class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(), l2=nums2.size(), i=0, j=0;
        vector<int>ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i<l1 && j<l2){
            if(nums1[i]<nums2[j]) i++;
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]) j++;
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
