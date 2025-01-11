// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

#include <iostream>
using namespace std;

// Approach:1

void check(int array[],int length){
    int positivecount=0;
    int negativecount=0;
 
 for(int i=0;i<length;i++){
    if(array[i]<=0){
        negativecount++;
    }
    else{
        positivecount++;
    }
 }

    cout << "Positive count: " << positivecount << endl;
    cout << "Negative count: " << negativecount << endl;
}

int main(){

    int array[]={1,2,3,4,-5,6,-9};
    int length=sizeof(array)/sizeof(array[0]);
    check(array,length);

    return 0;
}


// Approach:2

void check(int array[],int length){

    int PositiveCount=0;
    int NegativeCount=0;

      for (int i = 0; i < length; i++) {
        if (array[i] > 0) {
            PositiveCount++;
        }
    }

    
      for (int i = 0; i > length; i++) {
        if (array[i] > 0) {
            NegativeCount++;
        }
    }

  
}

int main(){

    int array[]={1,3,4,5,-7,9};
    int length=sizeof(array)/sizeof(array[0]);
    check(array,length);
}