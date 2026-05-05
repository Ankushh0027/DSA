// Leetcode 274
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    int r = 0, c = n - 1;
    while (c >= 0 && r < m)
    {
        if (target == mat[r][c])
        {
            return true;
        }
        else if (target < mat[r][c])
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 16, 22}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target;
    cout << "Enter target :";
    cin >> target;
    if (searchMatrix(matrix, target))
        cout << "FOUND " << endl;
    else
        cout << "NOT FOUND" << endl;
    return 0;
}