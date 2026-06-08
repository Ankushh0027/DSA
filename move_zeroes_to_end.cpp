//Leetcode - 283
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> nums = {0, 1, 0, 0, 3, 2, 5};
    moveZeroes(nums);
    cout << "New array:\n";
    for (int x : nums)
    {
        cout << x << " ";
    }
}