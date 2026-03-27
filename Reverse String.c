#include <stdio.h>
int main ()
{
    char str1[100];
    int n, i;
    printf("Enter a string: ");
    gets(str1);
    n = strlen(str1) - 1;
    for (i=n; i>=0; i--)
    {
        printf("%c", str1[i]);
    }
    return 0;
}