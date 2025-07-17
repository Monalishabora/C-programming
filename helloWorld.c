
// Q1: Print “Hello, World!”
#include<stdio.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}

// Q2: Input two numbers and print their sum
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    return 0;
}

// Q3: Area of a circle given its radius
#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", PI * radius * radius);
    return 0;
}

// Q4: Swap two numbers using a temporary variable
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

// Q5: Find the largest of two numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is larger\n", a);
    else if (b > a)
        printf("%d is larger\n", b);
    else
        printf("Both are equal\n");
    return 0;
}

// Q6: Find the largest among three numbers
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is the largest\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest\n", b);
    else
        printf("%d is the largest\n", c);
    return 0;
}

// Q7: Check if a number is even or odd
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}

// Q8: Calculate the factorial of a number
#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d\n", fact);
    return 0;
}

// Q9: Reverse a number
#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed = %d\n", rev);
    return 0;
}

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

// Q11: Print Fibonacci series up to n terms
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}

// Q12: Check if a number is prime
#include <stdio.h>
int main() {
    int n, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}


// Q13: Print all prime numbers in a range
#include <stdio.h>
int main() {
    int low, high, i, flag;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);
    for (; low <= high; low++) {
        if (low <= 1) continue;
        flag = 1;
        for (i = 2; i <= low/2; ++i) {
            if (low % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", low);
    }
    printf("\n");
    return 0;
}

// Q14: Find GCD of two numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD = %d\n", a);
    return 0;
}

// Q15: Find LCM of two numbers
#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }
    return 0;
}

// Q16 - Print all prime numbers between 1 and 100
#include <stdio.h>
int main() {
    int i, j, isPrime;
    for (i = 2; i <= 100; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}

// Q17 - Count number of digits in a number
#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}

// Q18 - Sum of digits of a number
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}

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

// Q20 - Fibonacci series (n terms)
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}

// Q21 - Check if a character is vowel or consonant
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");
    return 0;
}

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

// Q24 - Print ASCII value of a character
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("ASCII value = %d\n", c);
    return 0;
}

// Q25 - Check if a number is positive, negative or zero
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}

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

// Q27 - Find GCD of two numbers
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD = %d\n", a);
    return 0;
}

// Q28 - Find LCM of two numbers
#include <stdio.h>
int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        ++max;
    }
    return 0;
}

// Q29 - Check if a number is a perfect number
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");
    return 0;
}

// Q30 - Convert Celsius to Fahrenheit
#include <stdio.h>
int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", f);
    return 0;
}

// Q31 - Calculate compound interest
#include <stdio.h>
#include <math.h>
int main() {
    double p, r, t, ci;
    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    ci = p * pow((1 + r / 100), t) - p;
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}

// Q32 - Count vowels and consonants in a string
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (i = 0; str[i]; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}

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

// Q34 - Reverse a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int i, len;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';
    printf("Reversed string = %s\n", rev);
    return 0;
}

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

// Q39 - Count frequency of characters in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], freq[256] = {0};
    int i;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for (i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c: %d\n", i, freq[i]);
    }
    return 0;
}

// Q40 - Find largest element in array
#include <stdio.h>
int main() {
    int arr[100], n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest = %d\n", max);
    return 0;
}
