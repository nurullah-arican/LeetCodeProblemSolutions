#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int x) {
        if (x == 0 || x == 1) 
            return x; 
            
        vector<int> dp(x + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= x; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[x];
    }
};

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
    
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: Please enter an integer between 0 and 30!" << endl;
        return 1;
    }
    ControlNumber(n);

    Solution s;
    cout << "Output is " << s.fib(n);
    
    return 0;

}
