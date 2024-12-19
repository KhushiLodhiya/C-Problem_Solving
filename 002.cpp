//2. Write a function to determine whether a given number is positive, negative, or zero.


#include <iostream>
using namespace std; 

int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    
    if(num>0){
        cout<<"Number is Positive";
    }
    else if(num<0){
        cout<<"Number is Negative";
    }
    else{
        cout<<"Number is Zero";
    }
}
