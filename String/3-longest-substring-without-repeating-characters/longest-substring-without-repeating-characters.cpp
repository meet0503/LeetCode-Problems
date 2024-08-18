class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int maxLength = 0;
        int start = 0;
        int hash[256]={0};
        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
            while(hash[s[i]]>1){
                hash[s[start]]--;
                start++;
            }
            maxLength = max(maxLength, i - start+1);
        }

        return maxLength;
    }
};