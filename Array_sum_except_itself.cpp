#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptself(vector<int> nums){
    int n = nums.size(),i;
    vector<int> ans(n,1);
    // prefix => ans
    for(i=1;i<n;i++){
        ans[i] = nums[i-1]*ans[i-1];

    }
    int suffix = 1;
    // suffix
    for(i=n-2;i>=0;i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;

}
int main(){

    vector<int> nums = {1,2,3,4};
   vector<int> Result = productExceptself(nums);
   cout<<"Product:" ;
   for(int x : Result){
    cout<<x<<" ";

   }
   cout<<endl;

   return 0;
}