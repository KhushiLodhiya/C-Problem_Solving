//  27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".

#include <iostream>
using namespace std;

// Approach:1

string check(string name){

    // check krega ki lask pehle dot kha hai
    int pos_of_dot=name.rfind('.');

    if(pos_of_dot!=string::npos && pos_of_dot!=0){
        // dot k bad age ka add karega
        return name.substr(pos_of_dot+1);
    }
    return "";
}
int main(){
    string name="document.pdf";
    cout<<"Result : "<<check(name)<<endl;
    return 0;
}

// Approach:2

// Only chane in in-bilt function
// here we use find_last_of

string check(string name){

    // check krega ki lask pehle dot kha hai same as .rfind
    int pos_of_dot=name.find_last_of('.');

    if(pos_of_dot!=string::npos && pos_of_dot!=0){
        // dot k bad age ka add karega
        return name.substr(pos_of_dot+1);
    }
    return "";
}
int main(){
    string name="document.pdf";
    cout<<"Result : "<<check(name)<<endl;
    return 0;
}

