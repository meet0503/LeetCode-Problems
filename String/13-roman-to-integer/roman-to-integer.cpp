class Solution {
public:
    int romanToInt(string s) {
        int romanHash[26]={0};
        romanHash['I'-'A'] = 1;
        romanHash['V'-'A'] = 5;
        romanHash['X'-'A'] = 10;
        romanHash['L'-'A'] = 50;
        romanHash['C'-'A'] = 100;
        romanHash['D'-'A'] = 500;
        romanHash['M'-'A'] = 1000;
        int sum =0;
        int i=0;
        while(i<s.size()){
            int digit;
            if(i != s.size()-1 && romanHash[s[i]-'A']<romanHash[s[i+1]-'A']){
                digit = romanHash[s[i+1]-'A']  - romanHash[s[i]-'A'];
                i+=2;
            }
            else{
                digit = romanHash[s[i]-'A'];
                i+=1;
            }
            sum += digit;
        }

        return sum;
    }
};