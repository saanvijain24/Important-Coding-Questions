#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
void print_subarray(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}
int main(){
vector<int>nums={1,2,3,4,5,6};
print_subarray(nums);



    return 0;
}