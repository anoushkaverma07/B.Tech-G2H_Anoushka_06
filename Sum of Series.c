#include <stdio.h>
int main ()
{
    int i, n;
    float sum = 0.0 ;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        sum += 1.0/i;
    }
    printf("The sum of %d terms of series is = %.2f",n,sum);
    return 0;
}