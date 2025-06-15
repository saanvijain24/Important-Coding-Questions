#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int max_subarray(vector<int> &arr)
{
    int n = arr.size();
    // this approach has time complexity of n^3
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            result = max(sum, result);
        }
    }

    return result;
}
// below has time complexity of n^2
int max_sub2(vector<int> arr)
{
    int n = arr.size();
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];
            result = max(sum, result);
        }
        
    }

    return result;
}
// Kadane's algorith = O(n)
int kadane(vector<int>nums){
    int n=nums.size();
    int sum=0;
    int result=INT_MIN;
    for(int i=0;i<n;i++){
        if(sum<0){
            sum=0;
        }
       
        sum+=nums[i];
        result=max(result,sum);
    }
        return result;  
}





int main()
{
    vector<int> nums = {10,-5,-8,5,7};
    cout << max_subarray(nums)<<endl;
    cout<<kadane(nums)<<endl;

    return 0;
}