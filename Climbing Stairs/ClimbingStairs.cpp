#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
      int a = 0, b = 1, c,i;
       for(i = 1; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
      return b;
    }
};

void ControlNumber(int x){
    if(x>45 || x<1){
        std::cout<<"Please enter a number between 1 and 45 (1 and 45 are included)";
        exit(0);
        };
    }

int main(){
    double n;
    std::cout<<"Please enter an integer between 1 and 45 (1 and 45 are included)"<<std::endl;
    std::cin>>n;
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: You entered a decimal number." << endl;
        return 1;
    }
    
    ControlNumber(n);
    Solution s;
    std::cout<<"The number of distinct ways to climb the top is "<<s.climbStairs(n);
}
