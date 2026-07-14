class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0;
        int l=0;
        int maxi=0;
        int max_freq=0;
        int n=s.size();
        int windw_length;
        unordered_map<char,int>mpp;
        while(r<n){
            mpp[s[r]]++;
          
            max_freq=max(max_freq,mpp[s[r]]);
            while((r-l+1)-max_freq>k){
                mpp[s[l]]--;
                l++;
            }
            windw_length=r-l+1;
            maxi=max(maxi,windw_length);
            r++;
        }
        return maxi;
    }
};
