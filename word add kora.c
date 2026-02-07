#include<stdio.h>
#include <string.h>
int main()
{
    char name[20],word[10];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter any word: ");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word, "\n")] = 0;
    printf("%s ",word);
    puts(name);
    return 0;
}
