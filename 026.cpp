// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.

#include <iostream>
#include <string>
using namespace std;

// Approach:1

bool check(string str,char ch){
    if(str.length()==0){
        return false;
    }
    if(str[str.length()-1]==ch){
        return true;
    }
    return false;
}

int main(){
    string inputstring = "codinggita";
    char target='a';

    if(check(inputstring,target)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

}

// Approach:2

bool check(string str,char ch){
    
}