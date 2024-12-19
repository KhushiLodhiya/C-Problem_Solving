// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3

#include <iostream>
using namespace std; 

int main(){

    int array[]={1,2,3,4,5};
    int sum=0;
    int length=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<length;i++){
        sum=sum+array[i];
    }

    int avrg=sum/length;

    cout<<avrg;

}