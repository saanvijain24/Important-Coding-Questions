#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;
// generate all the subarrays
//time complexity 0"(n^3)
void gen_subarray(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++)// this will tell us from where our array is supposed to start
    {
        for(int j=i;j<n;j++){
            for (int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
//time complexity =O(n^2)
void gen_subarray2(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}


//max subarray sum






//max subarray with time complexity O(n^3)
int max_subaaray1(vector<int>&nums){
    int n=nums.size();
    
}






//max subarray with time complexity O(n^3)
//kadanes algorithm

int main(){
vector<int>nums={1,2,3,4,5};
gen_subarray(nums);
cout<<endl;
cout<<endl;
gen_subarray2(nums);








    return 0;
}