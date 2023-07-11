class Solution {
public:
// the important part is it contains duplicates
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = nums.size()-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else if(nums[mid] < nums[high])
                high = mid;
            else if(nums[high] == nums[high-1])
            high--;
            else
            low++;
        }
        return nums[low];
    }
};
