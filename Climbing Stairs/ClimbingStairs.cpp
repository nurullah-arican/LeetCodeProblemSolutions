#include <iostream>
#include <cmath> //We include cmath library to check the given input

using namespace std;
//Dynamic Solution Class that gives the distinct ways to climb to the top.
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
//Here we check that the entered number is between 1 and 45. If it is entered incorrectly, we give a warning and terminate the program.
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
    //We check here if the user entered an integer number. If the user did not enter an integer number, we warn the user and terminate the program. 
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: You did not enter an integer number. Please try again..." << endl;
        return 1;
    }
    
    ControlNumber(n); // We check here if the number is between 1 and 45.
    
    Solution s; // We define a class named "s".
    std::cout<<"The number of distinct ways to climb the top is "<<s.climbStairs(n); //We print the number of distinct ways to climb to the top in the end.
}
