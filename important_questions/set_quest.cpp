#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
//Q1: print unique elements in an array and count the number as well
void find_unique(vector<int>&arr){
    int  n=arr.size();
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);// set will only take unique elements and reject duplicate values
    }
    cout<<s.size()<<endl;//to print number of elements
    for(auto x:s)cout<<x<<" ";// will print all the elements

}


int main(){

    vector<int>nums={1,2,3,4,5,6};
    find_unique(nums);

    return 0;
}