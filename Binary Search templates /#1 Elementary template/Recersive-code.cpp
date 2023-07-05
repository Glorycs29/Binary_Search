class Solution {
public:
    // int search(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     int low = 0, high = n-1;
    //    // return bs(nums, target, low, high);
    //    while(low<=high){ 
    //        int mid = low + (high-low)/2;
    //        if(target == nums[mid])return mid;
    //        else if(target < nums[mid]){
    //            high = mid-1;
    //        }else{
    //            low = mid+1;
    //        }
           
    //    }
    //     return -1;
    // }

    int bs(vector<int>& nums, int target, int low, int high){
        //base case
        if(low>high)return -1;

        int mid = low + (high-low)/2;
        if(nums[mid] == target)return mid;
        else if(target > nums[mid]){
            return bs(nums, target, mid+1, high);
        }else{
            return bs(nums, target, low, mid-1);
        }
       // return -1;
    }
};
