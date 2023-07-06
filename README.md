# Binary-Search repo contains:

## [Binary-Search Templates:](https://github.com/Glorycs29/Binary_Search/tree/main/Binary%20Search%20templates%20)  
1. Basic Template:
  - [Non-recursive](https://github.com/Glorycs29/Binary_Search/blob/main/Binary%20Search%20templates%20/%231%20Elementary%20template/Code.cpp)
  - [Recursive](https://github.com/Glorycs29/Binary_Search/blob/main/Binary%20Search%20templates%20/%231%20Elementary%20template/Non-Recursive-Code.cpp)
  
2. Advance Template:
  





### Binary Search
* Sorted Array
* Used for Search
* Can Solve Monotonically Inc problems

##### Important Codes
1. Basic Searching
```cpp
int searchForElement() {
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 4;

    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}
```

2. Lower Bound Search ( >= target)
```cpp
void lowerBound() {
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 6, n = nums.size();

    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] >= target)
            hi = mid;
        else
            lo = mid + 1;
    }

    if (lo == n)
        cout << "No lower bound element" << endl;
    else
        cout << "Lower bound element: " << nums[lo] << endl; //Output: 6
}
```

3. Upper Bound Search ( > target)
```cpp
void upperBound() {
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 3, n = nums.size();

    int lo = 0, hi = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] <= target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    if (lo == n)
        cout << "No higher bound element" << endl;
    else
        cout << "Higher bound element: " << nums[lo] << endl; //Output: 4
}
```

----
> Extra Theories

**Basic Working**
When using Binary Search, it looks like to find the first T or the last F in FFFFFTTTTTTTTTTTT.(T means TRUE while F means FALSE.)

l <= r
This means l can be chosen, and r can be chosen i.e. [l, r]. (vec[0], ..., vec.back())

For example:
```
FFFFFFTTTTTT
↑..........↑
l..........r
```
[l,r]
If we want to find first T,
when mid is FALSE, the first T must on the right, so l = mid +1;
when mid is TRUE, just remember to do as we do in the simplest binary search such as finding a distinct number in an ascending array, i.e. r = mid-1;
Then it will end like this:
```
FFFFFTTTTTT
....↑↑
....rl
```
(l points to the first T, and r points to the last F)
So, if we want to find the first TRUE, we return l. If we want to find the last FALSE, we return r.
It seems that the Binary Search partitions the array to two parts:
[0,r] : F, [l, size-1] : T, and maybe that's why we update l and r in that way.

Code maybe like this:

```cpp
int BinarySearch(){
	while(l<=r){
		int mid = l + (r-l)/2;
		if(TRUE(mid)){
			r = mid -1;
		}
		else{
			l = mid + 1;
		}
	}
	return l;// find the first T
	//return r;//find the last F
}
```
l < r
This means r can not be chosen, i.e. [l, r).(Think about vec.begin(), vec.end())
For example:
```
FFFFFFTTTTTT
↑...........↑
l...........r
[l,r)
```
Just remember to do as we do in the simplest binary search such as finding a distinct number in an ascending array.
If we want to find first T,
when mid is FALSE, so the first T must be on the right, l = mid+1;
when mid is TRUE, r = mid;(because r can not be chosen.)(Just remember to do as we do in the simplest binary search such as finding a distinct number in an ascending array).
Then it will end like this:

```
FFFFTTTTTTT
....↑
....l&&r
```
(l and r points to the first T)
So, if we want to find the first TRUE, we return l(or r); if we want to find the last FALSE, we return l-1(or r-1).
[0,r) : F, [l, size) : T
Code maybe like this:

```cpp
int BinarySearch(){
    while(l<r){
        int mid = l + (r-l)/2;
        if(TRUE(mid)){
    		r =mid;
        }
        else{
        	l = mid +1;
        }
    }
    return l;//find the first T
	//return l-1;//find the last F
}
```
