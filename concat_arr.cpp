// Approach:1

// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans(2*n);

//         for(int i=0;i<n;++i){
//             ans[i]=nums[i];
//             ans[i+n]=nums[i];
//         }
//         return ans;
//     }
// };


// Approach:2 {without vector}

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// void Copy(int array[],int length,int ans[]){

//     for(int i=0;i<length;i++){
//         ans[i]=array[i];
//     }
//     for(int i=0;i<length;i++){
//         ans[length+i]=array[i];
//     }
 
// }

// int main() {
//     int array[3]={1,2,3};
  
//     int length=sizeof(array)/sizeof(array[0]);
//       int ans[2*length];
    
//     Copy(array,length,ans);
        
//         for (int i = 0; i < 2 * length; i++) {
//         cout << ans[i] << " ";
//     }
    
//     cout << endl;


//     return 0;
// }


// Approach:3 {vector with push_back methode}

