// Q33 - Check if a string is palindrome
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, isPalindrome = 1;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}