// 6. Write a program to count the number of words in a string using strtok ( string.h)
// void input_string(char *a);
// int count_words(char *string);
// void output(char *string, int no_words);
// input:
// hello world hello

// output:
// 3


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int words=0;
    char s[200];
    printf("Enter a sting:\n");
    gets(s);
    char d[]= " ";
    char *portion = strtok(s,d);
    while (portion!=NULL)
    {
        words++;
    //printf("%s\n",portion);
    portion=strtok(NULL,d);
    }
    printf("the no of words in the string is %d",words);
}
