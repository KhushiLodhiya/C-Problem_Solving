// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".


#include <iostream>
using namespace std;

string UpperCase(string str) {
    for (int i = 0; i < str.length(); i++) { 
        if (str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 32; 
        }
    }
    return str; 
}

int main() {
    string input = "hello"; 
    cout << UpperCase(input) << endl;
    return 0;
}


// Aproach:2;

#include <cctype>

void convertToUpper(string str){
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);
    }
 
}
int main(){
     string input="hello c++";
     cout<<"upadateed : " << convertToUpper(input)<<endl;
     return 0;
}


// Approach:3


#include <iostream>
#include <algorithm> 
#include <cctype>    
using namespace std;

string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str; 
}

int main() {
    string input = "hello";
    cout << "Uppercase : " << toUpperCase(input) << endl;
    return 0;
}