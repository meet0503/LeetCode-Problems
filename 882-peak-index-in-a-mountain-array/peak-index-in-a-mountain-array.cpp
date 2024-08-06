class Solution {
public:
    int calculate(vector<int>arr){
        int low = 0; 
        int high = arr.size()-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }

            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else if(arr[mid]<arr[mid-1]){
                high = mid-1;
            }
        }
        return -1;
    }

    int peakIndexInMountainArray(vector<int>& arr) {

        return calculate(arr);
    }
};