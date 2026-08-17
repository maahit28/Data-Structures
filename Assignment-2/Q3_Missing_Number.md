Q3. Find a Missing Number in a Sorted Array

Given an array of n-1 distinct integers in the range 1 to n,
find the missing number.
Logic:
(a) Using Linear Time

1. Start.
2. Input n, the range of numbers from 1 to n.
3. Input the n-1 elements of the sorted array.
4. Calculate the sum of numbers from 1 to n:
   Sum = n × (n + 1) / 2
5. Calculate the sum of all elements present in the array.
6. Subtract the array sum from the total sum.
7. The result is the missing number.
8. Display the missing number.
9. Stop.

(b) Using Binary Search

1. Start.
2. Input n and the n-1 elements of the sorted array.
3. Set low = 0 and high = n - 2.
4. Find the middle position:
   mid = (low + high) / 2
5. Compare the middle element with its expected value (mid + 1).
6. If array[mid] = mid + 1:
   The missing number is on the right side.
   Set low = mid + 1.
7. Otherwise:
   The missing number is on the left side.
   Set high = mid - 1.
8. Repeat steps 4–7 while low <= high.
9. The missing number is low + 1.
10. Display the missing number.
11. Stop.
