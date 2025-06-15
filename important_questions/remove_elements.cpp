#include <iostream>
#include <vector>
using namespace std;
class solution
{ public:
    int remove_elements(vector<int> &nums, int val)
    {
        int n = nums.size();
        int k = 0;
        if (nums.empty())
        {
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    solution obj;
    vector<int>nums={0,1,2,2,3,0,4,2};
    int k=2;
    cout<<obj.remove_elements(nums,k);

    return 0;
}