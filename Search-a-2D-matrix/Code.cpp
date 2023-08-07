
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r=mat.size();
        int c = mat[0].size();
        int low = 0, high = (r*c)-1;

        while(low<high){
            int mid = (low + high)>>1;
            int midEle = mat[mid/c][mid%c]
            if(midEle < target) low = mid+1;
            else high = mid;
        }
        return midEle==target;
    }
};
