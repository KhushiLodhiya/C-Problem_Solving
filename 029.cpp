// 29.Write a program to find all pairs in an array whose sum is equal to a given number.: Example 1:  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].

#include <iostream>
using namespace std;

void check(int num[],int n,int target){
    bool found = false;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++){

            if(num[i] + num[j] == target){
                cout<< "[" << i << "," << j << "]" <<endl;
            }
            found=true;
        }
        
    }
    if(!check){
        cout<<"No pair found"<<endl;
    }
}

int main(){
    int num[]={2,7,11,15};
    int target =9;
    int n= sizeof(num) / sizeof(num[0]);

    cout<<"Pair with sum"<<target<<endl;
    check(num, n,target);
}