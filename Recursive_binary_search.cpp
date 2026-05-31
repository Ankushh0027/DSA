// Leetcode - 704
// TC - O(logn)
#include <bits/stdc++.h>
using namespace std;
int binSearch(vector<int> &nums, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == tar)
        {
            return mid;
        }
        else if (nums[mid] <= tar)
        {
            return binSearch(nums, tar, mid + 1, end);
        }
        else
        {
            return binSearch(nums, tar, st, mid - 1);
        }
    }
    return -1;
}
int search(vector<int> &nums, int tar)
{
    return binSearch(nums, tar, 0, nums.size() - 1);
}
int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int tar;
    cout << "Enter target :";
    cin >> tar;
    int ans = search(nums, tar);
    cout << "Index = " << ans << endl;
    return 0;
}