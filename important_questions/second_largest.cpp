#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr={3,2,2,6,1};
//FIRST find the largest element
int largest=arr[0];
for(int i=0;i<arr.size();i++){
    if (arr[i]>largest){
        largest=arr[i];
    }
}
//now find the second largest element
int second_largest=INT_MIN ;
for(int i=0;i<arr.size();i++){
    if(arr[i]!=largest){ //if my value is not largest then
        if(arr[i]>second_largest){ //if my values isgreater then infinity 
            second_largest=arr[i];
        }
    }
}
cout<<second_largest<<endl;



    return 0;
}