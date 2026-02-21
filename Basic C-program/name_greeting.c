#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf(" Hallo ");
    puts(name);
    return 0;
}
