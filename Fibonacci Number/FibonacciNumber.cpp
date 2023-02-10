#include <iostream>
#include <cmath> //We add cmath library to check the given input
#include <vector> //We add vector library to add dynamic sized array-like interface

using namespace std;
//Dynamic Solution Class that gives the Fibonacci Number
class Solution {
public:
    int fib(int x) {
        if (x == 0 || x == 1) //If x is equal to 0 and 1, we return it's value
            return x; 
            
        vector<int> dp(x + 1); //We define a dynamic sized array 
        dp[0] = 0; //The first term's value of the array is equal to 0
        dp[1] = 1; //The second term's value of the array is equal to 1
        for (int i = 2; i <= x; i++) { //After the second term, we add one and two previous values and print it in the end
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[x];
    }
};
//We check if the number is in the range of 0 and 30. If not, we warn the user and exit the program.
void ControlNumber(int x) {
    if (x > 30 || x < 0) {
        std::cout << "Please enter a number between 0 and 30 (0 and 30 are included)";
        exit(0);
    };
}

int main()
{
    double n;
    cout << "Enter the index of the desired Fibonacci number:";
    cin >> n;
    //We check if the user entered an integer number
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: Please enter an integer between 0 and 30!" << endl;
        return 1;
    }
    ControlNumber(n); //We check the number and continue

    Solution s; //We define a class named "s"
    cout << "Output is " << s.fib(n); //We print the output in the end.
    
    return 0;

}
