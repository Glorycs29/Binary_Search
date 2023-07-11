# Problem statement:

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:

[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

You must decrease the overall operation steps as much as possible.

 

### Example 1:

- Input: nums = [1,3,5]
- Output: 1
### Example 2:

- Input: nums = [2,2,2,0,1]
- Output: 0
 

### Constraints:

- n == nums.length
- 1 <= n <= 5000
- -5000 <= nums[i] <= 5000
- nums is sorted and rotated between 1 and n times

[Solution]()

# Explanation: 
Here in my solution i used binary search to solve this question considering these four cases :

1st case : when mid element is greater then larger then we will find in right part so i have done small = mid + 1;

2nd case : when mid element is smaller then the larger then we have to make end = mid .. as mid element can be the smallest.

3rd case : when larger element is repeated then we done large = large -1.

4th case (important case) : now we used else {start ++}
this we done to tackle the case when suppose our array is
[3,4,5,1,3] and suppose start is at 0th index and end is at 4th index
so to tackle this case we used 4th case (when nums[mid] == nums[large]
and nums[large] != nums[large-1] ) thats why we done start ++ in this case.
