// Q23 - Armstrong number check
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, n = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");
    return 0;
}
