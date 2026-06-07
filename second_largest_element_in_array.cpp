#include <bits/stdc++.h>
using namespace std;
int secondLargestElement(vector<int> &nums)
{
    int n = nums.size();
    int largest = nums[0];
    int slargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > slargest)
        {
            slargest = nums[i];
        }
    }
    return slargest;
}

int main()
{
    vector<int> nums = {8, 8, 7, 6, 5};
    int result = secondLargestElement(nums);
    cout << "SecondLargestElement is : " << result << endl;

    return 0;
}