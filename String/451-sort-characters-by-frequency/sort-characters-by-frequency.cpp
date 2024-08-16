class Solution {
public:
    int findmaxIndex(int arr[]){
        int  max =0;
        int index = 0;
        for(int i=0; i<256; i++){
            if(arr[i]>max){
                max = arr[i];
                index = i; 
            }  
        }
        return index;
    }

    string frequencySort(string s) {
        int s_hash[256]={0};
        int elem = 0;
        for(int i=0; i<s.size(); i++){
            s_hash[s[i]]++;
            elem++;
        }
        string ans="";
        int j=0;
        while(j<s.size()){
            int I_max = findmaxIndex(s_hash);
            char ch = I_max;
            for(int i=s_hash[I_max]; i>0; i--){
                ans += ch;
                j++;
            }
            s_hash[I_max]=0;
        }
        return ans;
    }
};