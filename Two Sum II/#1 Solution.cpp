class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0; i<nums.size();i++){
           if(binary_search(nums.begin()+i+1,nums.end(),target-nums[i])){
           int lb = lower_bound(nums.begin()+i+1, nums.end(), target-nums[i])-nums.begin();
               return {i+1,lb+1};
           }
       }
       return {-1,-1};
    }
};
