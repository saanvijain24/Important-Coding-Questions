#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={3,2,2,6,1};
int ans=arr[0];
for(int i=0;i<arr.size();i++){
    if (arr[i]>ans){
        ans=arr[i];
    }
    

}
cout<<ans<<endl;


    return 0;
}