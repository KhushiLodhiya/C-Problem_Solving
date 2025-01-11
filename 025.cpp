// 25. Write a program to split a string into an array of words. Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'

#include <iostream>
#include <cstring>
using namespace std;

// Approach:1

void split(string str) {
    int start = 0; 
    int length = str.length(); 
   for (int i = 0; i < length; i++) {
       
        if (str[i] == ' ' || ispunct(str[i])) {
            
            if (i > start) {
                cout << str.substr(start, i - start) << " ";
            }
            start = i + 1;
    }

   } 
    if (start < length) {
        cout << str.substr(start) << endl;
    }
}

int main() {
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words (Manual Array Split): ";
    split(inputString);
    return 0;
}


