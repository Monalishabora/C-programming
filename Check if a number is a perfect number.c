// Q29 - Check if a number is a perfect number
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;
}