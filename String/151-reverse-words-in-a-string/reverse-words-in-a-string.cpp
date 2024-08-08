class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        int pos=0;
        while(s[pos] == ' '){
            pos++;
        }
        int nexPos = s.find(' ',pos);
        while(nexPos != string::npos){
            ans.push_back(s.substr(pos, nexPos-pos));
            
            pos = nexPos+1;
            while(s[pos] == ' '){
                pos++;
            }  
            nexPos = s.find(' ', pos);
            
        } 
        if (pos < s.size()) {
            ans.push_back(s.substr(pos));
        }
        string result="";
        for(int i=ans.size()-1; i>=0; i--){
            result+= ans[i];
            if(i>0){
                result += " ";
            }
        }
        
        return result;
    }
};