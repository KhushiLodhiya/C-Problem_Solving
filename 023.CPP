// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".


#include <iostream>
using namespace std;

// Approach:1

string concate(string str1, string str2) {
    for (int i = 0; i < str2.length(); i++) { 
        str1 += str2[i]; 
    }
    return str1; 
}

int main() {
    string str1 = "hello";  
    string str2 = " world"; 
    cout << concate(str1, str2) << endl;
    return 0;
}

// Approach:2

string concatenate(string str1, string str2) {
    return str1 + str2; 
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout  << concatenate(str1, str2) << endl;
    return 0;
}


// Approach:3

string Append(string str1, string str2) {
    str1.append(str2); 
    return str1; 
}

int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << Append(str1, str2) << endl;
    return 0;
}

