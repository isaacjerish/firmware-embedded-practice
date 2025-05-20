#include <stdio.h>
/*
 * Function: binarySearchIterative
 * -------------------------------
 * Implements an iterative binary search algorithm.
 *
 * arr: A pointer to a sorted array of integers.
 * size: The number of elements in the array.
 * target: The integer value to search for.
 *
 * returns: The index of the target element if found; otherwise, -1.
 */



/*
 * Function: binarySearchRecursive
 * --------------------------------
 * Implements a recursive binary search algorithm.
 *
 * arr: A pointer to a sorted array of integers.
 * low: The starting index of the current search subarray.
 * high: The ending index of the current search subarray.
 * target: The integer value to search for.
 *
 * returns: The index of the target element if found; otherwise, -1.
 *
 * Note: For the initial call, 'low' would be 0 and 'high' would be 'size - 1'.
 * You might want a wrapper function for a cleaner public API that matches
 * the iterative version's signature, e.g.,
 * int binarySearchRecursiveWrapper(int arr[], int size, int target);
 */
