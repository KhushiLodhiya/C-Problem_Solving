// 4. Write a function to check whether a given character is a vowel or consonant.

#include <iostream>
using namespace std; 

void check(char var){
    if(var=='a' || var=='e' || var=='i' || var=='o' || var=='u' ||
      var=='A' || var=='E' || var=='I' || var=='O' || var=='U' ){
          cout<<"It is vowels"<<endl;
      }
    else if(var>='a' && var<='z' || var>='A' && var<='z'){
        cout<<"It is consonant"<<endl;
    }
    else{
        cout<<"Enter valid value"<<endl;
    }
}
int main(){
    
    char var;
    cout<<"Enter a Character"<<endl;
    cin>>var;
    
    check(var);
    
    return 0;
}
