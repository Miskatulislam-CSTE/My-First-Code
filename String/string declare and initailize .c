#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("%s\n",name);
    return 0;

}
