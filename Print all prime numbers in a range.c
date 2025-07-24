// Q13: Print all prime numbers in a range
#include <stdio.h>
int main() {
    int low, high, i, flag;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);
    for (; low <= high; low++) {
        if (low <= 1) continue;
        flag = 1;
        for (i = 2; i <= low/2; ++i) {
            if (low % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", low);
    }
    printf("\n");
    return 0;
}