#include <iostream>
#include <climits>
#include<algorithm>

using namespace std;
// kadane's algorithm

int main(){
int n = 5;
int arr[5]= {1,2,3,4,5};
 int currsum = 0 ,  maxSum = INT_MIN;
 for(int i=0;i<n;i++){
    currsum += arr[i];
    maxSum = max(currsum,maxSum);
    if(currsum <0){
        currsum = 0;
    }
 }
cout << maxSum;
}

