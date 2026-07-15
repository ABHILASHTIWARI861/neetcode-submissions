class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> hash(256, 0);

        int n = s.size();
        int m = t.size();

        for (int i = 0; i < m; i++) {
            hash[t[i]]++;
        }

        int l = 0, r = 0;
        int cnt = 0;

        int mini = INT_MAX;
        int start = -1;

        while (r < n) {

            if (hash[s[r]] > 0)
                cnt++;

            hash[s[r]]--;

            while (cnt == m) {

                if (r - l + 1 < mini) {
                    mini = r - l + 1;
                    start = l;
                }

                hash[s[l]]++;

                if (hash[s[l]] > 0)
                    cnt--;

                l++;
            }

            r++;
        }

        if (start == -1)
            return "";

        return s.substr(start, mini);
    }
};