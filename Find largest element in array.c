// Q40 - Find largest element in array
#include <stdio.h>
int main() {
    int arr[100], n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest = %d\n", max);
    return 0;
}
