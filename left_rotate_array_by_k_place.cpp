#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0)
        return;
    k = k % n;
    if (k == 0)
        return;

    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }

    for (int i = k; i < n; i++)
    {
        nums[i - k] = nums[i];
    }

    for (int i = n - k; i < n; i++)
    {
        nums[i] = temp[i - (n - k)];
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cout << "Enter the value of k :";
    cin >> k;
    rotate(nums, k);

    cout << "Rotated array: ";
    for (int value : nums)
        cout << value << " ";
}
