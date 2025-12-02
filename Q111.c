#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);
    printf("First negatives in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d ", firstNeg);
    }
    return 0;
}
