// Q35 - Find length of a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Length = %lu\n", strlen(str));
    return 0;
}