class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxi=0;
        int prof=0;
        for(int i=0;i<n;i++){
            prof=prices[i]-mini;
            maxi=max(maxi,prof);
            mini=min(mini,prices[i]);
        }
        return maxi;
    }
};
