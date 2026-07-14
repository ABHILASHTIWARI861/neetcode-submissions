class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        int n=temperature.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperature[i]>=temperature[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(i);
        }


        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            if(ans[i]!=0){
            result[i]=ans[i]-i;
            }
        }
        return result;
    }
};
