class Solution {
public:
    int findMin(vector<int>& arr) {
        int n= arr.size();
        int low= 0, high = n-1;

        
        while(low < high){
                // if already sorted
                if(arr[low] < arr[high]) return arr[low];

            int mid= low + (high-low)/2;

            // sample example : {4, 5, 6, 7, 0, 1, 2}
            if(arr[low] <= arr[mid]){
                
                low = mid+1;
            }else{
                high = mid;
            }
        }

        return arr[low];

    }
};
