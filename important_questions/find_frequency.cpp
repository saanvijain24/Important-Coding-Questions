#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
// print frequency of occurence of an element
void print(vector<int>&arr){
    int n=arr.size();
    unordered_map<int,int>mp;// one value will be arr value and other will be its freuency
    for(int i=0;i<n;i++){
        mp[arr[i]]++;// by default key will be arr[i] and freq will start from zero
    }
    for(auto x:mp){
        cout<<mp.first<<" "<<mp.second<< " ";
    }
}

int main(){
    return 0;
}