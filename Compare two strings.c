// Q38 - Compare two strings
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", a);
    printf("Enter second string: ");
    scanf(" %[^\n]", b);
    if (strcmp(a, b) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return 0;
}