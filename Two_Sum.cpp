#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &arr, int tar)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int sec = tar - first;
        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }

    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 11, 7, 15};
    int target;
    cout << "Enter Target:";
    cin >> target;
    vector<int> ans = twoSum(arr, target);
    if (ans.size() == 0)
    {
        cout << "No pair found";
    }
    else
    {
        cout << "Indexes are: " << ans[0] << " " << ans[1] << endl;
        cout << "values are: " << arr[ans[0]] << " " << arr[ans[1]] << endl;
    }
    return 0;
}