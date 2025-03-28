#include <stdio.h>
#include <limits.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    int max_seen = INT_MIN, min_seen = INT_MAX;

    // Find the last element which is out of sorting order
    for (int i = 0; i < n; i++) {
        max_seen = (arr[i] > max_seen) ? arr[i] : max_seen;
        if (arr[i] < max_seen) {
            end = i;
        }
    }

    // Find the first element which is out of sorting order
    for (int i = n - 1; i >= 0; i--) {
        min_seen = (arr[i] < min_seen) ? arr[i] : min_seen;
        if (arr[i] > min_seen) {
            start = i;
        }
    }

    // If the array is already sorted, return 0
    if (start == -1) {
        return 0;
    }

    return end - start + 1;
}