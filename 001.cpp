
// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

#include <iostream>
using namespace std; 

int main() {
  int score;
  cout<<"Enter your score";
  cin>>score;
  if(score>90 && score<100){
      cout<<"Grade:A";
  }
  else  if(score>80 && score<89){
      cout<<"Grade:B";
  }
  else if(score>70 && score<79){
      cout<<"Grade:C";
  }
  else if(score>60 && score<69){
      cout<<"Grade:D";
  }
  else{
      cout<<"Grade F";
  }
}