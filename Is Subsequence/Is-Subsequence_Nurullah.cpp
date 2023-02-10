#include <iostream>
#include<string>
#include <cctype>

using namespace std;

class Solution {
public:
	bool isSubsequence(string s, string t) {
		int length = t.size();
		int s_index = 0;
		for (int i = 0; i < length; i++) {
			if (s[s_index] == t[i]) {
				s_index++;
			}
		}
		if (s_index == s.size()) {
			return true;
		}
		else {
			return false;
		}
	}
};

bool checkStringInput(string& userInput) {
	for (char c : userInput) {
			if (!isalpha(c)) {
				cout << "Error: The input is not a string. Please enter only string!" << endl;
				exit(0);
			}
		}
	}
	
bool checkStringLength(const string& input, const int maxLength) {
	if (input.length() > maxLength) {
		std::cerr << "Error: input string is too long (max length is " << maxLength << " characters)\n";
		exit(0);
	}
	return true;
}

int main()
{
	string userInput_s, userInput_t;

	cout << "Please enter the first string:";
	getline(cin, userInput_s);
	
	checkStringInput(userInput_s);
	checkStringLength(userInput_s, 100);
	
	cout << "Please enter the second string:";
	getline(cin, userInput_t);
	
        checkStringInput(userInput_t);
	checkStringLength(userInput_t, 10000);
	
	Solution s;
	cout << s.isSubsequence(userInput_s, userInput_t);
}
