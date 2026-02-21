#include <stdio.h>

int main()
{
    int t,i, a, number, check;

    printf("Enter how many numbers(t): ");
    scanf("%d", &t);
    for (a = 1; a <= t; a++)nn  n
        {
        printf("Enter number %d: ", a);
        scanf("%d", &number);
        check = 0;
        if (number <= 1)
            {
            check = 1;
        }
        else
         {
            for (i = 2; i * i <= number; i++)
             {
                if (number % i == 0)
                 {
                    check = 1;
                    break;
                }
            }
        }

        if (check == 0)
            {
            printf("prime number\n");
           }
        else
            {
           printf("not prime number\n");
        }
    }

    return 0;
}
