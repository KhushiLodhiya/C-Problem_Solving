//3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std; 

int main(){
    
    int a,b,c;
    
    cout<<"Enter fist side"<<endl;
    cin>>a;
     
    cout<<"Enter second side"<<endl;
    cin>>b;
      
    cout<<"Enter third side"<<endl;
    cin>>c;
    
    if(a==b && b==c){
        cout<<"the triangle is equilateral";
    }
    else if(a==b || b==c || c==a){
          cout<<"the triangle is isosceles";
    }
    else{
          cout<<"the triangle is scalene";
    }
  
}