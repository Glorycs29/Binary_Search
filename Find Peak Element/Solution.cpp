class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n - 1;

  while (start < end) {
    int mid = (start + end) / 2;

    if (mid == 0)
      return arr[0] >= arr[1] ? 0 : 1;

    if (mid == n - 1)
      return arr[n - 1] >= arr[n - 2] ? n - 1 : n - 2;

    //Cheking whether peak ele is in mid position
    if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
      return mid;

    //If left ele is greater then ignore 2nd half of the elements
    if (arr[mid] < arr[mid - 1])
      end = mid - 1;

    //Else ignore first half of the elements
    else
      start = mid + 1;
  }

  return start;
 
    }
};
