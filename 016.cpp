// # 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.


#include <iostream>
using namespace std;

// Approach:1

bool check(int array[],int length){

    for(int i=0;i<length;i++){
        if(array[i]<=0){
              return false;
       }
    }

    return true;
}

int main(){

    int array[]={1,2,3,4,5,5};
    int length=sizeof(array)/sizeof(array[0]);

    if(check(array,length)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}


// Approaach:2

bool check(int array[],int length){

 bool F_variable=true;
 for(int i=0;i<length;i++){
    if(array[i]<=0){
        F_variable=false;
        break;
    }
 }
  return F_variable;
}

int main(){ 

    int array[]={1,2,3,6,8};
    int length=sizeof(array)/sizeof(array[0]);

    if(check(array,length)){
        cout<<"True";
    }
    else{
        cout<<"False"<<endl;
    }
}


// Third Approach

bool nonPositive(int num){
    return num<=0;
}
bool Positive(int array[], int length) {
    for (int i = 0; i < length; i++) {
        if (nonPositive(array[i])) { 
            return false;
        }
    }
    return true;
}


int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (Positive(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}