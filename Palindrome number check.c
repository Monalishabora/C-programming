// Q19 - Palindrome number check
#include <stdio.h>
int main() {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}