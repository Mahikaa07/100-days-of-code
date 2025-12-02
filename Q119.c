#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int seen[n+1];  
    for (int i = 0; i <= n; i++) {
        seen[i] = 0;
    }
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }
    if (repeated != -1) {
        printf("Repeated element: %d\n", repeated);
    } else {
        printf("No repetition found\n");
    }
    return 0;
}
