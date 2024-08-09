class Solution {
public:
    bool rotateString(string s, string g) {
       string newString = s+s;
       if(s.size()!=g.size()) return false;
       if(newString.find(g) != string::npos){
        return true;
       }
       return false;
    }
};