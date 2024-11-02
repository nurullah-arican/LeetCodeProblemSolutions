#include <iostream>
#include <cmath> //We add cmath library to check the given input
#include <string> //We add string library to get string input from the user

using namespace std;
//Simple Solution Class to check if the integer is even or not. If the integer is even we return true, if not we return false. 
class Solution {
public:
    bool divisorGame(int n) {
        bool winnerAlice = true;
        bool loserBob = false;
        
        if(n%2==0){
            return winnerAlice;
        }
        else{
            return loserBob; 
        }
}
};
//Here we check if the integer is between 1 and 1000. If it is not between this range, we warn the user and exit the program.
void ControlNumber(int x){
        if(x>1000 || x<1){
        std::cout<<"Please enter a number between 1 and 1000 (1 and 1000 are included)";
        exit(0);
        };
    }

int main()
{
    double n;
    string passWord; 
    
    cout<<"Please enter your ID:"; //Here we want from the user to enter defined password, so that Bob can not enter the integer first.
    cin>>passWord;
    //If the password is correct we continue, if not we exit the program.
    if (passWord == "Alice1") {
    cout << "Password is correct, continuing..." << std::endl;
  } else {
    cout << "Password is incorrect, please try again..." << std::endl;
    return 0;
  }
    //We want from the user to enter the first integer to be written on the chalkboard.
    cout<<"Please enter the integer n to be written on the chalkboard:";
    cin>>n;
    //We check here if the entered input is an integer
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: Please enter an integer!" << endl;
        return 1;
    }
   
    Solution s; //We define a class named s
    cout<<s.divisorGame(n); //We print the result in the end
    
    return 0;
}
