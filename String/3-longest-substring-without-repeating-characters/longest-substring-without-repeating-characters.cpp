class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> charSet;
        int maxLength = 0;
        int start = 0;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // If character is already in the set, remove characters from the start
            while (charSet.find(ch) != charSet.end()) {
                charSet.erase(s[start]);
                start++;
            }

            // Insert the current character into the set
            charSet.insert(ch);

            // Update the maximum length
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};