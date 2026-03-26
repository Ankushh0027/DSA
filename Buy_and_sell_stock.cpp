#include <iostream>
#include <vector>
using namespace std;
int maxprofit(vector<int> prices){

    int bestbuy = prices[0];
    int maxprofit = 0;

    for(int i = 1;i<prices.size();i++){
        if(prices[i]<bestbuy){
            bestbuy = prices[i];
        }
        else{
            int profit = prices[i] - bestbuy;
            if(profit>maxprofit){

                maxprofit = profit;
            }
        }

    }
    return maxprofit;
}






int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxprofit(prices);
      cout << "Maximum Profit: " << result << endl;
      return 0;


    
}