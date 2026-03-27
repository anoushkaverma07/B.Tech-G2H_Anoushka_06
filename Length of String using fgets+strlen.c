#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int length;
    printf("Enter a string : ");
    fgets(str1, sizeof(str1), stdin);
    length = strlen(str1)-1; // Subtract 1 to exclude the newline character
    printf("Length of string is: %d", length);
    return 0;
}