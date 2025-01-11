// Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;

#include <iostream>
using namespace std;

// Approach:1

void check(int num1 , int num2){
    if(num1>num2){
        cout<<num1<<endl;
    }
    else{
        cout<<num2<<endl;
    }
}
int main(){
    int num1=10;
    int num2=20;
    check(num1,num2);
}

// Approach:2
//  using turnery

void check(int num1,int num2){
    
    cout<<"largest"<<(num1>num2 ? num1 : num2);
}
int main(){
    int num1=10;
    int num2=20;
    check(num1,num2);
}

// Approach:3
// using in-built number

#include <algorithm>

void check(int num1,int num2){
    
}