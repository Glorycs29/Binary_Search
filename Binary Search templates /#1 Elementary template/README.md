### The need for this template and the reasons why this template is been taught by everyone at the elementary level:

## Key Attributes:

- The most basic and elementary form of Binary Search
- Search Condition can be determined without comparing to the element's neighbors (or using specific elements around it)
- No post-processing is required because you are checking to see if the element has been found at each step. If you reach the end, then you know the element is not found
 

## Distinguishing Syntax:

- Initial Condition: left = 0, right = length-1
- Termination: left > right
- Searching Left: right = mid-1
- Searching Right: left = mid+1
