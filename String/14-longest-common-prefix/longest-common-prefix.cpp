class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string check = strs[0];
        for(int i =0 ;i<strs.size(); i++){
            while(strs[i].find(check) != 0 ){
                check = check.substr(0,check.length()-1);
            }
        }
        return check;
    }
};