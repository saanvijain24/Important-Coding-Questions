/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

*/
#include<algorithm>
#include <iostream>
#include <vector>
#include<stdlib.h>
#include<string>
using namespace std;
    void rotateleft(vector<int>&arr,int d){// this is the code with time complexity O(N) and space complexity null and this code is used for rorating left elements
        int n=arr.size();
        d=n%d;
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
    }//understand from sir
    
    //why isnt this giving correct output/
        void reverse1(vector<int>&arr,int d, int n){
            int j=d-1;
            int i=0;
        while(i<j){
             swap(arr[i],arr[j]);
             i++;
             j--;
        }
        cout << "one";
        }
        
        void reverse2(vector<int>&arr,int d, int n){
           int j=n-1;
           int i=d;
            while(i<=j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            cout << "two";
        }
        void reverse3(vector<int>&arr,int d, int n){
            int j=n-1;
            int i=0;
            while(i<=j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            cout << "three";
        }
    



    void rotateright(vector<int>&nums,int d){// this is the code with time complexity O(N) and space complexity null and this code is used for rorating  elements to the right
        int n=nums.size();
        d=n%d;
        d=n-d;
        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.end());
        reverse(nums.begin(),nums.end());
    }

    void rotate(vector<int> &nums, int k)// this is an optimal approach for roatting elements but it has time complexity of O(N) and space complexity of O(n) making it a bit less non ideal approach for rotating elemts but both the approaches can be used 
    {
        int n = nums.size();
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;
    }


int main()
{ 
    int k;
    cout<<"enter the value of number of places to rotate"<<endl;
    cin>>k;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n=arr.size();
    k=k%n;
    reverse1(arr,k,n);
    reverse2(arr,k,n);
    reverse3(arr,k,n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}