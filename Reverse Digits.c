#include <stdio.h>
int main()
{
    int num, a;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        a = num%10;
        printf("%d", a);
        num = num/10;
    }
    return 0;
}