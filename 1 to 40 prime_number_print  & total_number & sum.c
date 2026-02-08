#include<stdio.h>
int main()
{
    int a ,number,check,total_prime_number,sumof_prime_numbers;
    printf(" prime numbers between 1 and 40:\n");
    for(number=1;number<=40;number++)

    {
        check=0;
       if(number<=1)
            continue;           /*১-৪০ পর্যন্ত সংখ্যাগুলোর মধ্যে মৌলিক সংখ্যাগুলো প্রিন্ট এবং
                                        কয়টি মৌলিক সংখ্যা আছে এবং তাদের যোগফল গননা। */
       for(a=2;a<number;a++)
       {
           if(number%a==0)
           {
               check=1;
               break;
           }
       }
       if(check==0)
       {
        printf("%d\n",number);
        total_prime_number++;
        sumof_prime_numbers = sumof_prime_numbers+number ;
       }
    }
    printf("total prime numbers = %d\n",total_prime_number);
    printf("sum of total prime numbers = %d\n",sumof_prime_numbers);
    return 0;
}
