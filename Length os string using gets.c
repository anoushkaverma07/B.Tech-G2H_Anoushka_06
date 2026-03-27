#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int i=0;
    printf("Enter a string : ");
    gets(str1);
    while (str1[i] != '\0')
    {
        i++;
    }
    printf("Length of string is: %d", i);
    return 0;
}