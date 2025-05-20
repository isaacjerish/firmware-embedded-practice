 #include <stdio.h>

 int binarySearchIterative(int arr[], int size, int target) {
    if (size == 0) return -1;
    if (size == 1) return ((arr[0] == target) ? (0):(-1)); //Optional, the loop would handle this as well but, recogonizing this condition early can save static + dynamic instructions
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end) {
        mid = start + (end-start)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
            
        } else {
            end = mid -1;
        }
    }
    return -1;
 }

 int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high-low)/2;
    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, high, target);
    }
    else {
        return binarySearchRecursive(arr, low, mid - 1, target);
    }
}