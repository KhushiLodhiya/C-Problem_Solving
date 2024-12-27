// ## 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].


#include <iostream>
using namespace std;


void add(int arr[], int& size, int newElement) {

    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;  
    size++;  


    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[10] = {1, 2, 3, 4};  
    int size = 4;  
    int newElement = 0;  

    add(nums, size, newElement);

    return 0;
}


//  Approach:2

void beginAdd(int array[],int size,int newelement){
    
    int newsize=size+1;
    int newarray[newsize];
    newarray[0]=newelement;

    for(int i=0;i<size;i++){
        newarray[i+1]=array[i];
    }

    cout<<"Updated array : ";
    for(int i=0;i<newsize;i++){
        cout<<newarray[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    int newelement=0;
    beginAdd(array,size,newelement);
}

// Approach:3

#include <vector>

void add(vector<int>&arr,int newelement){
    arr.insert(arr.begin(),newelement);
    cout<<"Updated Array:";

    for(int num : arr){
        cout<<num<<" ";
    }
}

int main(){
    
    vector<int>arr={1,2,3,4};
    int newelement=0;
    add(arr,newelement);

    return 0;
}

// Approach:4