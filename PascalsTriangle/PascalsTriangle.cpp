#include <iostream>
#include <vector> //We add the vector library to 
#include <cmath>

using namespace std;
//Dynamic Solution Class that prints the rows of the pascal's triangle.
vector<vector<int>> generate(int numRows) {
	vector<vector<int>> ret; //2D vector 'ret' which will store the rows of the triangle.
	for (int i = 0; i < numRows; i++) { //The size of the vector row is equal to the current iteration number i plus 1.
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; j++) { //We calculate the values of the elements in row that are not equal to 1.
			row[j] = ret[i - 1][j] + ret[i - 1][j - 1]; //Each element is the sum of the two elements above it in the previous row
		}
		ret.push_back(row); //The current row is added to the end of the ret vector using the push_back function.
	}
	return ret; //The function returns 'ret' as the final result
}
//We check if the entered integer is between 1 and 30. If it is not between this range, we warn the user and exit the program.
void ControlNumber(int x){
    if(x>30 || x<1){
        std::cout<<"Please enter a number between 1 and 30 (1 and 30 are included)";
        exit(0);
        };
    }

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows; //We get the number from the user.
       //We check the integer.
	ControlNumber(numRows); 
     if (cin.fail() || fmod(numRows, 1) != 0) {
        cerr << "Error: You entered a decimal number." << endl;
        return 1;
    }
    //
	vector<vector<int>> triangle = generate(numRows); //This line stores the result in a 2D vector triangle.
    for (int i = 0; i < triangle.size(); i++) { //The outer loop i iterates over the rows, while the inner loop j iterates over the elements of each row
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " "; // The triangle[i][j] is printed to the console.
        }
        cout << endl;
    }
    return 0;
}
