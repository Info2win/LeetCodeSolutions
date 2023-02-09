class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int result=0;
        int left=0;
        int right=1;
        int profit;
        while(right!=size){
            profit = prices[right]-prices[left];
            if(profit > result) result = profit;
            if(prices[left]>prices[right])left = right;
            right++;
        }
        return result;
    }
};