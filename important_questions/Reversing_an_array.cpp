#include<iostream>
#include<vector>
using namespace std;
//array is always passed by referance to reflect its changes in main function as well



//for inbuilt reverse function and any other STL use STL library and its syntax is diffrent for vector: reverse(arr.begin(),arr.end()) and for array : reverse(arr,arr+n)
void reverse(vector<int>&arr){
    int i=0;
    int n=arr.size();
    int j=n-1;
 while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
 }

}




int main(){
    vector<int>nums={1,2,3,4};
    reverse(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}