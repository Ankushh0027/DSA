//leetcode - 287
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr) {//Time complexity = o(n); space complexity = o(1)
    int slow = arr[0], fast = arr[0];

    do {
        slow = arr[slow];//+1
        fast = arr[arr[fast]];//+2
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast) {
        slow = arr[slow];//+1
        fast = arr[fast];//+1
    }

    return slow;
}

int main() {
    vector<int> arr = {3, 1, 3, 4, 2};

    cout << "Duplicate element: " << findDuplicate(arr) << endl;

    return 0;
}