#include<stdio.h>
int main()
 {
    int number, a, check;

    printf("prime numbers between 1 and 20:\n");

    for(number = 1; number <= 25; number++)
        {  // ১ থেকে ২০ পর্যন্ত লুপ
        check = 0;  // প্রতিবার নতুন সংখ্যার জন্য check রিসেট করব

        if (number == 1)
            continue;   // ১ মৌলিক না, তাই বাদ

        for(a = 2; a < number; a++)
            {
            if(number % a == 0)
             {
                check = 1;
                break;
            }
        }

        if(check == 0)
            printf("%d ", number);  // মৌলিক হলে প্রিন্ট করব
    }

    return 0;
}

