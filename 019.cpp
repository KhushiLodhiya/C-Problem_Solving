//  19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include <iostream>
using namespace std;

// Approach:1

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {  
        if (arr[i] > arr[i + 1]) {         
            return false;                  
        }
    }
    return true;  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool result = isSorted(arr, size);
    if (result) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl; 
    }

    return 0;
}

// Approach:2

#include <algorithm>
bool sort(int array[],int length){
     return is_sorted(array, array + length);
}

int main(){

    int array[]={2,5,9,5,7};
    int length=sizeof(array)/sizeof(array[0]);

    bool result = sort(array,length);
    if(result){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    
}