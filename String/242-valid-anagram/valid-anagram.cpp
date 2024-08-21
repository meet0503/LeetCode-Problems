class Solution {
public:
    bool isAnagram(string s, string t) {
        int t_hash[26] = {0};
        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); i++) {
            t_hash[s[i] - 'a']++;
            t_hash[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (t_hash[i] != 0) return false;
        }
        return true;
    }
};
