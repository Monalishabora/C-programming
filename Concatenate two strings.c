// Q36 - Concatenate two strings
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    strcat(str1, str2);
    printf("Concatenated = %s\n", str1);
    return 0;
}