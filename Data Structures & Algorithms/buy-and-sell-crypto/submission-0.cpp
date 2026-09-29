class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        for(int i=0;i<n;i++){
            int profit=0;
            for(int j=i+1;j<n;j++){
                profit=prices[j]-prices[i];
                maxprofit=max(maxprofit,profit);
            }
        }
        return maxprofit;
    }
};
