class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s_hash[256] = {0};
        int t_hash[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            if(s_hash[s[i]] != t_hash[t[i]]) return false;
            s_hash[s[i]]=i+1;
            t_hash[t[i]]=i+1;
        }

        return true;
    }
};