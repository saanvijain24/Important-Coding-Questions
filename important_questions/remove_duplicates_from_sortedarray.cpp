#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    int RemoveDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        if (arr.empty())
        {
            return 0;
        }
        int k = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                arr[k] = arr[i];
                k++;
            }
        }

        return k;
    }
};

int main(){
 solution obj;
 vector<int>arr={1,1,2,2,3,3,4,4};
 cout<<obj.RemoveDuplicates(arr);







    return 0;
}








































/*class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            if(nums.empty()){return 0;}
            int k=1;
            for(int i=1;i<n;i++){
                if (nums[i]!=nums[i-1]){
                    nums[k]=nums[i];
                      k++;
                }



            }

            return k;
        }
    };*/