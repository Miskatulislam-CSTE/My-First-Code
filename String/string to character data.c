// string print separate character
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i=0;
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
     name[strcspn(name, "\n")]='\0' ; //sakibul
    while(name[i]!='\0')
    {
        printf("%c ",name[i]);
        i++;
    }
    return 0;
}
