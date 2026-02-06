#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // বড় সংখ্যার জন্য long long ব্যবহার করা হয়েছে

    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 বা ঋণাত্মক সংখ্যা চেক করা
    if (n < 0)
        printf("Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;   // fact = fact * i
        }
        printf("Factorial of %d = %lld", n, fact);
    }

    return 0;
}
