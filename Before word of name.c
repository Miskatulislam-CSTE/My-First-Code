#include<stdio.h>
int main()
{
    char name[8];  //akne number gonbe 7 pojjontu karon string null tarminal \0 ase .
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf(" wlecome ");
    puts(name);
    return 0;
}
