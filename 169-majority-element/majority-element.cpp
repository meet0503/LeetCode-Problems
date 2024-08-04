class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algorithm

        int count =1;
        int element = nums[0];
        int i=1;
        while(i<nums.size()){
            if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count=1;
                element=nums[i];
            }
            i++;
        }
        return element;


    //     int count = 1;
    //     int maxcount = 0;
    //     int ans = -1;
    //     if(nums.size()<2){
    //         return nums[0];
    //     }
    //     sort(nums.begin(), nums.end());
    //     for(int i =0 ; i<nums.size()-1; i++){
    //         if(nums[i]==nums[i+1]){
    //             count++;
    //         }else{
    //             count=1;

    //         }
    //         if(count>maxcount){
    //             maxcount = count;
    //             ans = nums[i];
    //         }
    //     }
    //     return ans;
    }
};