#include <iostream>
#include <cmath>
#include <string>

using namespace std;

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
    
    cout<<"Please enter your ID:";
    cin>>passWord;
    
    if (passWord == "Alice1") {
    cout << "Password is correct, continuing..." << std::endl;
  } else {
    cout << "Password is incorrect, please try again..." << std::endl;
    return 0;
  }
    
    cout<<"Please enter the integer n to be written on the chalkboard:";
    cin>>n;
    
    if (cin.fail() || fmod(n, 1) != 0) {
        cerr << "Error: Please enter an integer!" << endl;
        return 1;
    }
    
    Solution s;
    cout<<s.divisorGame(n);
    
    return 0;
}
