// remove Whitespace

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Approach:1

string space(string str) {
    int start=0;
    int end=str.length()-1;

    while(start<=end && isspace(str[start])){
        start++;
    }
    while(start<=end && isspace(str[end])) {
        end--;
    }

    return str.substr(start, end-start + 1);
}

int main () {
    string input = " hello ";
    cout<< space(input)<<endl;
}


// Approach:2

#include <cctype>
#include <algorithm>

string removespace(string str){
    
    str.erase(str.begin(),find_if(str.begin(),str.end(),[](unsigned char ch) {return !isspace(ch);}));
    str.erase(find_if(str.rbegin(),str.rend(),[](unsigned char ch) { return !isspace(ch);}).base(),str.end());
    
    return str;
}

int main(){

    string input = "  hello   ";
    cout<<"Using erase"<<removespace(input)<<"\"" << endl;
    return 0;

}

// Approch:3


#include <algorithm> 
#include <cctype>    

string remove(string str) {
    
    auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch) { return isspace(ch); });

  
    auto end = find_if_not(str.rbegin(), str.rend(), [](unsigned char ch) { return isspace(ch); }).base();

    return (start < end ? string(start, end) : ""); 
}

int main() {
    string input = "  hello   ";
    cout << "Updated:" <<remove(input) << "\"" << endl;
    return 0;
}



