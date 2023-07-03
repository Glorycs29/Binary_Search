# Template #2 is an advanced form of Binary Search.

 

# Key Attributes:

- An advanced way to implement Binary Search.
- Use the element's right neighbor to determine if the condition is met and decide whether to go left or right
-  Search Space is at least 2 in size at each step
- Post-processing required. Loop/Recursion ends when you have 1 element left. Need to assess if the remaining element meets the condition.
 

# Distinguishing Syntax:

- Initial Condition: left = 0, right = length - 1
- Termination: left == right
- Searching Left: right = mid
- Searching Right: left = mid+1
