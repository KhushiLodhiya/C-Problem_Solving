// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

#include <iostream>
using namespace std;


int findLengthManual(string str) {
    int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
        count++; 
    }
    return count; 
}

int main() {
    string inputString = "Hello, World!"; 
    cout << findLengthManual(inputString) << endl;
    return 0;
}

// Approach:2

int findLength(string str) {
    return str.length(); 
}

int main() {
    string inputString = "Hello, World!";
    cout << "Length : " << findLength(inputString) << endl;
    return 0;
}

