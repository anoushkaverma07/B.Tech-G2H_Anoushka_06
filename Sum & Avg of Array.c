#include <stdio.h>
int main ()
{
    int n, i ,ara[100];
    float sum =0.0, avg=0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        sum+=ara[i];
    }
    avg = sum/n;
    printf("The sum of the array is: %.2f\n", sum);
    printf("The average of the array is: %.2f\n", avg);
    return 0;
}