    vector<int> func_for_pse(vector<int>&arr) {
     stack<int>st;
     int n=arr.size();
     vector<int>pse(n,-1);
     for(int i=0;i<n;i++){
     while(!st.empty() && arr[i]<arr[st.top()]){
        st.pop();
     }
     if(!st.empty()){
        pse[i]=st.top();
     }
     st.push(i);
     }
     return pse;
    }

    vector<int> func_for_nse(vector<int>&arr) {
     stack<int>st;
     int n=arr.size();
     vector<int>nse(n,n);
     for(int i=n-1;i>=0;i--){
     while(!st.empty() && arr[i]<=arr[st.top()]){
        st.pop();
     }
     if(!st.empty()){
        nse[i]=st.top();
     }
     st.push(i);
     }
     return nse;
    }

class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int> nse = func_for_nse(arr);
        vector<int> pse = func_for_pse(arr);
        long long maxi=0;
        for(int i=0;i<arr.size();i++){
         maxi = max(maxi, 1LL * (nse[i] - pse[i] - 1) * arr[i]);
    }
    return maxi;
    }
};



