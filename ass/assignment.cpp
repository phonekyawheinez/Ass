#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str) {
    string cleanedStr;
    
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedStr += tolower(ch);
        }
    }
    
    int length = cleanedStr.length();
    for (int i = 0; i < length / 2; ++i) {
        if (cleanedStr[i] != cleanedStr[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string inputStr;
    
    cout << "Enter a string to check : ";
    getline(cin, inputStr);
    
    if (isPalindrome(inputStr)) {
        cout << "the string is a palindrome." << endl;
    } else {
        cout << "the string is not a palindrome." << endl;
    }
    
    return 0;
}
