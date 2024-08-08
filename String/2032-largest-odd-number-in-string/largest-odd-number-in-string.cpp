class Solution {
public:
    string largestOddNumber(string num) {
        int point=-1;
        for(int i = num.size()-1 ; i>=0;i--){
            int digit = num[i] - '0';
            if(digit%2 != 0){
                point = i;
                break;
            }
        }
        if(point>=0){
            return num.substr(0,point+1);
        }
        return "";
        
    }
};