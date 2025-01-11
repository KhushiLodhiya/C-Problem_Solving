//  18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]


#include <iostream>
using namespace std;


void check(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) { 
        if (i % 2 == 0) {           
            cout << arr[i];        
            if (i < size - 2) {    
                cout << ", ";
            }
        }
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    check(arr, size);
    return 0;
}


// Approach:2

void check(int array[],int length){
    
        cout << "[";
    for (int i = 0; i < length; i += 2) { 
        cout << array[i];                 
        if (i < length - 2) {             
            cout << ", ";
        }
    }
    cout << "]" << endl;

}
int main(){

    int array[]={1,4,6,-9,6};
    int length=sizeof(array)/sizeof(array[0]);
    check(array,length);

    return 0;
}

// Approach:3

void check(int array[],int length){
    int temp[length];
    int tempindex=0;
    for(int i=0;i<length;i+=2){
        temp[tempindex++]=array[i];
    }
      cout << "[";

       cout << "[";
    for (int i = 0; i < tempindex; i++) {
        cout << temp[i];
        if (i < tempindex - 1) { 
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    check(array, size);
    return 0;
}