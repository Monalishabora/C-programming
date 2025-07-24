// Q10: Check if a number is a palindrome
#include <stdio.h>
int main() {
    int num, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}