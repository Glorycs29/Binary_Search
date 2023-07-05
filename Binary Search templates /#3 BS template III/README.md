## Template #3 is another unique form of Binary Search.
### Code:
```
int binarySearch(vector<int>& nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left + 1 < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left + 1 == right
    if(nums[left] == target) return left;
    if(nums[right] == target) return right;
    return -1;
}

```
 
### Key Attributes:

- An alternative way to implement Binary Search
- Use the element's neighbors to determine if the condition is met and decide whether to go left or right
- **Guarantees Search Space is at least 3 in size at each step**
- Post-processing required. Loop/Recursion ends when you have 2 elements left. Need to assess if the remaining elements meet the condition.
  
## 

### Distinguishing Syntax:

- Initial Condition: left = 0, right = length-1
- Termination: left + 1 == right
- Searching Left: right = mid
- Searching Right: left = mid

  ## Let's encounter a few challenges using this template:
- [Search for a range]()
- [Find K closest element]()
- [Find **peak** element]()
