# Problem Statement

    Given an integer array nums and an integer k, return the kth largest element in the array.

# Example 1:

    Input: nums = [12, 5, 787, 1, 23], k = 2
    Output: 23

# Example 2:

    Input: nums = [1, 23, 12, 9, 30, 2, 50], k = 3
    Output: 23

# Problem Link 

    [https://leetcode.com/problems/kth-largest-element-in-an-array/]

# Concept

    1. Create a Min Heap with the help of Priority Queue.
    [https://www.geeksforgeeks.org/implement-min-heap-using-stl/]

    2. Insert first k elements to the min heap.

    3. Iterate for the rest elements in the array and check for the condition that if the top element of the min heap is smaller than the ith value of the array then pop the top value and push that ith value into the heap. 
    
    4. At the last the top of the min heap will be the kth largest element in the array.  