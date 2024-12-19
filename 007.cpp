//7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

#include <iostream>
#include <string>
using namespace std; 

void check(string a){
    if(a=="red"){
        cout<<"Stop the car";
    }
    else if(a=="yellow"){
        cout<<"Slow down";
    }
    else{
        cout<<"You can gooooo";
    }
}

int main(){
    
    string a;
    cout<<"Enter color of lights"<<endl;
    cin>>a;
    
    check(a);
    return 0;

}
