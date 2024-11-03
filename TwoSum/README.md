# Intuition
The problem requires finding two indices in an array such that the values at those indices add up to a specific target. A brute-force approach would be to check all pairs of numbers in the array, but a more efficient way is to use a single loop with a nested loop to check subsequent elements. 

# Approach
1. We initialize an `index` to start checking from the first element in the array.
2. We calculate the difference between the target and the current element at `index`. This difference represents the value we need to find in the subsequent elements of the array.
3. Using a nested `for` loop, we iterate over the elements after `index` to see if any of them match the difference. If a match is found, we store the matching index, set a flag (`indicesFound`) to exit the outer loop, and break the inner loop.
4. If no match is found in the inner loop, we increment `index` and repeat the process.
5. Finally, once we have the two indices, we return them as an array.

# Complexity
- Time complexity:
  - The time complexity is approximately $$O(n^2)$$ because we have a nested loop. For each element in the array, we search the remaining elements, leading to quadratic time complexity.

- Space complexity:
  - The space complexity is $$O(1)$$ because we only use a fixed amount of extra space to store the indices and flags, regardless of the input array size.
