#include <stdio.h>
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int main() {
    int nums[100], n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target element: ");
    scanf("%d", &target);
    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);
    if (first == -1 || last == -1)
        printf("-1, -1\n");
    else
        printf("First occurrence index: %d\nLast occurrence index: %d\n", first, last);
    return 0;
}
