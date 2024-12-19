// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3

#include <iostream>
using namespace std;

void check(int array[], int length, int &evencount, int &oddcount) {
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    int evencount = 0;
    int oddcount = 0;

   
    check(array, length, evencount, oddcount);


    cout << "Even Numbers: " << evencount << "\n";
    cout << "Odd Numbers: " << oddcount << "\n";

    return 0;
}
