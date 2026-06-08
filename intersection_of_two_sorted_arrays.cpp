#include <bits/stdc++.h>
using namespace std;
vector<int> findIntersectionOfArrays(vector<int> &A, int n, vector<int> &B, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n = 5;
    vector<int> A = {1, 2, 2, 3, 4};
    int m = 7;
    vector<int> B = {2, 3, 3, 5, 6, 7, 7};
    vector<int> result = findIntersectionOfArrays(A, n, B, m);
    cout << "Intersected Array:\n ";
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}