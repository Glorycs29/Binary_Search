class Solution {
public:
     int search(int target, vector<int> &nums, int left, int right){
         while(left<=right){
             int mid = left + (right-left)/2;
             if(nums[mid]>target)
                 right = mid-1;
             else if(nums[mid]<target)
                 left = mid+1;
             else 
                 return mid;
         }
         return -1;
     }

    vector<int> twoSum(vector<int>& nums, int target) {
      

        for(int i=0; i<nums.size();i++){
            int j=search(target-nums[i], nums, i+1, nums.size()-1);
            if(j!=(-1))
                return {i+1,j+1};
        }
         return {-1,-1};

    }
};
