class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq_1(256,0);
        vector<int>freq_2(256,0);
        int n1=s1.size();
        int n2=s2.size();
        for(int i=0;i<n1;i++){
           freq_1[s1[i]]++;
        }
        int l=0;
        int r=0;
        while(r<n2){
          freq_2[s2[r]]++;
          while((r-l+1)>n1){
            freq_2[s2[l]]--;
            l++;
          }
          if((r-l+1)==n1 && freq_1==freq_2){
            return true;
          }
          r++;
        }
        return false;
    }
};
