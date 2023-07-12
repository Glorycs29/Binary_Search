class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        // ignore the overlapping elements // there no need of consideration regarding overlapping elements
        vector<int> merged;
        int n = nums1.size(), m= nums2.size();
        int i=0, j=0, repeated=0;

        while(i<n && j<m){
            
            if(nums1[i]==nums2[j]){
               merged.push_back(nums1[i++]);
            }else if(nums1[i]<nums2[j]){
                merged.push_back(nums1[i++]);
            }else{
                merged.push_back(nums2[j++]);
            }
            
        }
        
        while(i<n){
            
           merged.push_back(nums1[i++]);
        
        }
        
        while(j<m){
        
            merged.push_back(nums2[j++]);
        
        }
        // only taken the unique items
        // merged.erase(unique(merged.begin(), merged.end()), merged.end());

        int size = merged.size();
        double ans = 0;
        if(size%2==0){
            // take median of two mid element
            ans = (merged[size/2]*1.00 + merged[size/2 - 1]*1.00)/2.0;
        }else{
            ans = merged[size/2]*1.00;
        }
        
        return ans;
    }
};
