// Q37 - Copy one string to another
#include <stdio.h>
#include <string.h>
int main() {
    char src[100], dest[100];
    printf("Enter source string: ");
    scanf(" %[^\n]", src);
    strcpy(dest, src);
    printf("Copied string = %s\n", dest);
    return 0;
}
