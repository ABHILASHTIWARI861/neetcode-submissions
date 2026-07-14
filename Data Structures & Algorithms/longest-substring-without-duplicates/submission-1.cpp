class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxi_length=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<n;j++){
                if(mpp.find(s[j])!=mpp.end()){
                   break;
                }
                mpp[s[j]]=1;
                maxi_length=max(maxi_length,j-i+1);
            }
        }
        return maxi_length;
    }
};
