// ## 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.

#include <iostream>
using namespace std;

void add(int array[],int &n,int newelement){

    array[n]=newelement;
    n++;

    cout<<"updated array : ";

    for(int i=0; i<n; i++){
        cout<<array[i]<<"";
    }

    cout<<endl;

}

int main(){
    int array[5]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(array[0]);
    int newelement=6;
    add(array,n,newelement);
}
