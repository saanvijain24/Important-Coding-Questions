#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;//both are pointing at last element of the array
	int j=m-1;
	int carry=0;
	vector<int>ans;
//overlapping
	while(i>=0&&j>=0){
		int val1=a[i];
		int val2=b[j];
		int sum=val1+val2+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	//case 1
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;

	}
	//case 3
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	//carry case
	while(carry!=0){
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	reverse(ans.begin(),ans.end());
	return ans; 

}


int main(){
    vector<int>a={1,2,3};
    vector<int>b={3,4,5};
   vector<int>ans= findArraySum(a,a.size(),b,b.size());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}




