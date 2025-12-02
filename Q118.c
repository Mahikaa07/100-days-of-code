#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (between 0 and %d, missing one): ", n, n);
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;
    printf("Missing number: %d\n", missing);
    return 0;
}
