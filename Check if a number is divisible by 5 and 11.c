// Q26 - Check if a number is divisible by 5 and 11
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
        printf("Divisible by both 5 and 11\n");
    else
        printf("Not divisible by both\n");
    return 0;
}