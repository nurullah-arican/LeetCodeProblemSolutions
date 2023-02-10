#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> ret;
	for (int i = 0; i < numRows; i++) {
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; j++) {
			row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		}
		ret.push_back(row);
	}
	return ret;
}

void ControlNumber(int x){
    if(x>30 || x<1){
        std::cout<<"Please enter a number between 1 and 30 (1 and 30 are included)";
        exit(0);
        };
    }

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    ControlNumber(numRows);
     if (cin.fail() || fmod(numRows, 1) != 0) {
        cerr << "Error: You entered a decimal number." << endl;
        return 1;
    }
    vector<vector<int>> triangle = generate(numRows);
    for (int i = 0; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
