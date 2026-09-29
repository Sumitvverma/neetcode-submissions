class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        vector<int>minleft(n);
        minleft[0]=prices[0];
        for(int i=1;i<n;i++){
            minleft[i]=min(prices[i],minleft[i-1]);
        }
        for(int i=0;i<n;i++){
            maxprofit=max((prices[i]-minleft[i]),maxprofit);
        }
        return maxprofit;
    }
};
