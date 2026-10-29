class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int p = 0;
        int s = prices.size();
        int left=0, right=1;
        while(right<s){
            if(prices[right]>=prices[left]){
                p = prices[right] - prices[left];
                mp = max(p, mp);
                right++;
            }
            else{
                left = right;
            }
        }
        return mp;
    }
};
