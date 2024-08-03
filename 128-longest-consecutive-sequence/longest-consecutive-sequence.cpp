class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int lastSmaller = INT_MIN;
        int i = 0;
        int count = 0;
        int longest=1;
        
        if(arr.size()==0) return 0;

        for(int i=0; i< arr.size(); i++){
            if(arr[i]-1 == lastSmaller){
                lastSmaller = arr[i];
                count++;
            }
            else if(lastSmaller != arr[i]){
                count=1; 
                lastSmaller = arr[i];
            }
            longest = max(longest, count);
        }
        return longest;
    }
};