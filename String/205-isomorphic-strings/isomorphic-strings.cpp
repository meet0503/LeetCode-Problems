class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s_hash[256] = {0};
        bool t_mapped[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            // if(s_hash[s[i]] != t_hash[t[i]]) return false;
            
            if(s_hash[s[i]]==0 && t_mapped[t[i]]==0){
                s_hash[s[i]]= t[i];
                t_mapped[t[i]] = 1;
            }  
        }
        for(int i = 0; i<s.size(); i++){
            if(t[i] != s_hash[s[i]]){
                return false;
            }
        }

        return true;
    }
};