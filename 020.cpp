//  20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

#include <iostream>
using namespace std;

// Approach:1

int check(int array[], int length) {
    int max = array[0];
    int min = array[0];

    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    return max - min;
}

int main() {
    int array[] = {80, 30, 70, 50, 20};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Difference between max and min: " << check(array, length) << endl;

    return 0;
}


// Approach:2

#include <algorithm>

int check(int arr[],int length){

    int max=*max_element(arr,arr+length);
    int min=*min_element(arr,arr+length);

    return max-min;
}


int main(){
    int arr[]={80,30,50,55};
     int length = sizeof(arr) / sizeof(arr[0]);
     cout<< "Difference between max and min: "<<check(arr,length);
}


// Approach:3

int check(int arr[], int length) {
    // Initialize maxElement and minElement to the first element of the array
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for (int i = 1; i < length; i++) {
        if (arr[i] < min) { 
            min = arr[i];
        }
    }

    
    return max-min;
}

int main() {
    
    int arr[] = {80, 30, 70, 50, 20};
    int length = sizeof(arr) / sizeof(arr[0]);   
    cout << "Difference: " <<check(arr, length) << endl;
    return 0;
}


