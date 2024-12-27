// ## 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <iostream>
using namespace std;

// Approach :1
void check(int arr[],int n,int target){
    int count=0;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=true;
            }
    }
    if(found){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    check(arr,n,target);
}




