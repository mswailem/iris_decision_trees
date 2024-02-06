#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

//Function to load the data from the CSV file
std::vector<std::map<std::string, double>> loadCSV (const std::string &filename) {
	std::ifstream file(filename);
	std::string line;
	std::vector<std::map<std::string, double>> data;

	while (std::getline(file, line)) {
		if (line.empty()) {
			continue;
		}
		std::stringstream line_stream(line);
		std::map<std::string, double> row;
		int column_index = 1;
		while(std::getline(line_stream, line, ',')) {
			if (line.empty()) {
				break;
			}
			if (column_index == 1) {
				row["sepal length"] = std::stod(line);
			} else if (column_index == 2) {
				row["sepal width"] = std::stod(line);
			} else if (column_index == 3) {
				row["petal length"] = std::stod(line);
			} else if (column_index == 4) {
				row["petal width"] = std::stod(line);
			} else if (column_index == 5) {
				if (line == "Iris-setosa") {
					row["species"] = 0;
				} else if (line == "Iris-versicolor") {
					row["species"] = 1;
				} else if (line == "Iris-virginica") {
					row["species"] = 2;
				}
			}
			column_index++;
		}
		data.push_back(row);
	}
	return data;
}

int main (int argc, char *argv[]) {
	
	//Reading the data
	std::vector<std::map<std::string, double>> data = loadCSV("../iris/iris.data");

	//TODO: Implement an algorithm to randomly split the data into training and test sets
	
	//TODO: Implement an algorithm to train a decision tree classifier

	return 0;
}
