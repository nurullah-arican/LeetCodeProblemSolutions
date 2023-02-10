#include <iostream>
#include <string> //We add the string library to get string from the user
#include <cctype> //We add cctype library to check if the input is string

using namespace std;
//Dynamic Solution Class that checks the members of the string and returns the answer in the end.
class Solution {
public:
	bool isSubsequence(string s, string t) {
		int length = t.size(); //The variable length is initialized to the size of the string t
		int s_index = 0; //This variable will keep track of the current index in the string s that we are check
		for (int i = 0; i < length; i++) {  
			if (s[s_index] == t[i]) { //If the character at the current index i of t is equal to the character at the current index s_index of s
				s_index++; //s_index is incremented.
			}
		}
		if (s_index == s.size()) {
			return true; //All of the characters in s were found in t in order, so the function returns true
		}
		else {
			return false; //Not all of the characters in s were found in t in order, so the function returns false
		}
	}
};
//Here we check if the input is a string or not. If the input is not a string, we warn the user and exit the program.
bool checkStringInput(string& userInput) {
	for (char c : userInput) {
			if (!isalpha(c)) {
				cout << "Error: The input is not a string. Please enter only string!" << endl;
				exit(0);
			}
		}
	}
//Here we check the length of the string. If it is longer than the wanted length, we warn the user and exit the program. If it is true, we continue.	
bool checkStringLength(const string& input, const int maxLength) {
	if (input.length() > maxLength) {
		std::cerr << "Error: input string is too long (max length is " << maxLength << " characters)\n";
		exit(0);
	}
	return true;
}

int main()
{
	string userInput_s, userInput_t; //We define the "s" and "t" strings.

	cout << "Please enter the first string:";
	getline(cin, userInput_s); //We get the input "s" from the user.
	//We check the string.
	checkStringInput(userInput_s);
	checkStringLength(userInput_s, 100);
	//If the first string is correct,we continue and get the second "t" string from the user.
	cout << "Please enter the second string:";
	getline(cin, userInput_t);
	//We check the string.
        checkStringInput(userInput_t);
	checkStringLength(userInput_t, 10000);
	//We define a Solution class named "s".
	Solution s;
	cout << s.isSubsequence(userInput_s, userInput_t); //We print the result of the solution in the end.
}
