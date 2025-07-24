// Q22 - Calculate power of a number (a^b)
#include <stdio.h>
#include <math.h>
int main() {
    double base, power, result;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &power);
    result = pow(base, power);
    printf("Result = %.2lf\n", result);
    return 0;
}
