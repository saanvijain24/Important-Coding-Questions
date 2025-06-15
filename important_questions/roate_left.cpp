#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&arr){
    int n=arr.size();
    int temp=arr[0];//store first element in a temporary variable
    for(int i=1;i<n;i++){//shift each element by 1 position in left
    
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;//last element is equal to the first element

}
int main(){
    vector<int>nums={1,2,3,4,5};
    rotate(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}