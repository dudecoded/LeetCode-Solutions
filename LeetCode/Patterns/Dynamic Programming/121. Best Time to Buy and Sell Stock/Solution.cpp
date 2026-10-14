#include<algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         if(prices.empty())
          return 0;
        int ans= prices[0];
         int diff = 0;
         int profit = 0;
         
      for(int i =0 ; i<prices.size();i++){
        ans = min(ans , prices[i]);
        
        diff=prices[i]- ans;
        profit = max(profit,diff);
      }
      return profit;
    }
};