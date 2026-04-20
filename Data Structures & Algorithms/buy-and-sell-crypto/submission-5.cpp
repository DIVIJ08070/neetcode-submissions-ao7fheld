class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1;
        int ans = 0;
        int mini = prices[0];
        while(i < prices.size()){
            if(mini > prices[i]){
                mini = prices[i];
                i++;
            }
            else{
                ans = max(ans,prices[i]-mini);
                i++;
            }
        } 
        return ans;
    }
};
