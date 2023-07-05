class Solution {
public:

    int lower_bound(vector<int> &nums,int low, int high, int target){
        int n = nums.size();
        //int low=0, high=n-1;
        int lb=0, ub=0;
        while(low<=high){
            // handling overflow
            int mid = low + ((high-low)>>1);
            if(nums[mid]>=target){
                high = mid-1;
                //lb = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        // implement lower_bound function and use it
        int n=nums.size();
        int left=0, right=n-1;
        int lb =lower_bound(nums,left, right, target);
        int ub =lower_bound(nums,left, right, target+1)-1;
        if(lb<n && nums[lb]==target){
            return {lb,ub};
        }else return {-1,-1};
    }
};
