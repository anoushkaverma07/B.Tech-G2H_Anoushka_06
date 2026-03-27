#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    printf("Enter a word : ");
    scanf("%s", str1);
    printf("Length of word is: %d", strlen(str1));
    return 0;
}