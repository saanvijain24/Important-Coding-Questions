#include<iostream>
/*1752. Check if Array Is Sorted and Rotated
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.*/

/*there can be three cases in this question 1:my array is sorted {1,2,3,4,5}(here there will exist 1 pair where arr[i-1]>arr[i] i.e last and first element )
2.my array is sorted and rotated{3,4,5,1,2}(here also there will exist one pair where arr[i-1]>arr[i] )
3. neither of the two:{3,4,2,1,5}(here we can see there exist 2 pairs of above condition)
4.all my element are equal{1,1,1})it will be considered both sorted and roated; 

*/

#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>&nums){
    int n=nums.size();
    int count=0;//to count the number of pairs
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){//traversing the array and finding how many pairs
            count++;
        }
    }
    if(nums[n-1]>nums[0]){//to check first and last element 
        count++;
    }
    return count<=1; //< because if all elements are equal the number of pairs will be zero

}



int main(){
    vector<int>nums={1,1,1};
    cout<<sorted(nums);
    return 0;
}
