// ## 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].



#include <iostream>
using namespace std;

void remove(int array[],int length){

    int newArray[length-1];

// Compare all elements not the last one
    for(int i=0;i<length-1;i++){
        newArray[i]=array[i];
    }

    for(int i=0;i<length-1;i++){
        cout<<newArray[i];
    }
}
int main(){
    int array[]={1,2,3,4,5};
    int length=sizeof(array)/sizeof(array[0]);
    remove(array,length);
}

// Approach:2

void remove(int array[],int length){
    if(length>0){
        
         length--;

        for(int i=0;i<length;i++){
           cout<< array[i]<<  " " ;
        }
       cout<<endl;
    }
}

int main(){

    int array[]={1,2,3,4,5};
    int length=sizeof(array)/sizeof(array[0]);

    remove(array,length);

 }



// Approch:3

#include <vector>

void removeLast(vector<int>& array) {
    if (!array.empty()) {
        array.pop_back();  
    }

    // Print the updated array
    cout << "Updated array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5};
    removeLast(array);  
    return 0;
}
