class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0, high=letters.size()-1;
        while(low<=high){
            int mid = low + ((high-low)>>1);
            //if(letters[mid]==target)return mid;
            if(letters[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low==letters.size()? letters[0] : letters[low];
    }
};
