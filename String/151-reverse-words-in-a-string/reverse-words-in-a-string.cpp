class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        int n = s.size();
        int pos = 0;

        // Skip leading spaces
        while (pos < n && s[pos] == ' ') {
            pos++;
        }

        int nexPos = s.find(' ', pos);
        while (nexPos != string::npos) {
           
                ans.push_back(s.substr(pos, nexPos - pos));
        
            pos = nexPos + 1;
            while (pos < n && s[pos] == ' ') {
                pos++;
            }
            nexPos = s.find(' ', pos);
        }

        if (pos < n) {
            ans.push_back(s.substr(pos));
        }

        string result = "";
        for (int i = ans.size() - 1; i >= 0; i--) {
            result += ans[i];
            if (i > 0) {
                result += " ";
            }
        }

        return result;
    }
};
