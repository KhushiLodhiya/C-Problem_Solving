//5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

#include <iostream>
using namespace std; 

void vote(int age){
    if(age>=18){
        cout<<"You are eligible for vote";
    }
    else{
        cout<<"Sorry You can't give vote";
    }
}

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    
    vote(age);
    
    return 0;
}
