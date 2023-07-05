class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        int ub = upper_bound(nums.begin(), nums.end(), target)-nums.begin();

        if(ub==lb){
            // must not be present
            return {-1,-1};
        }else{
            return {lb,ub-1};
        }
    }
};
