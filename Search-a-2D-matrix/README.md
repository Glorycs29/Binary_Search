[You can also check](https://github.com/Glorycs29/Binary_Search)

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->
- Similar to basic binary search.
- How will the matrix behave like an array without actually creating an auxiliary array?
- It could be achieved by the following formula :
- A n * m matrix converted into an array: matrix[x][y] : a[x * m + y]
An array can be converted into **n * m matrix: a[x] : matrix[x / m][x % m]**

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">


# Approach
<!-- Describe your approach to solving the problem. -->
- No special approach.
- Just do what you've done in Binary Search.

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

# Complexity
- Time complexity: O(log(n*m)) : It's highly optimized : O(logn) + O(logm)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->


- Space complexity: O(1) : We have stored nothing 🥳
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

# Code
```
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
```
