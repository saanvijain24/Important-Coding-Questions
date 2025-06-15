#include <iostream>
#include <vector>
using namespace std;
bool sorted(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    //cout<<sorted(arr);
    if(sorted(arr)==false){
        cout<<"The provided array is not sorted";
    }
    else{
        cout<<"The provided array is sorted";
    }

    return 0;
}
