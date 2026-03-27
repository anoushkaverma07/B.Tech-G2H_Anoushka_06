#include <stdio.h>
int main ()
{
    int n, i, ara[100], max=ara[0];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i=1; i<n; i++)
    {
        if (ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("The maximum element in the array is: %d", max);
    return 0;
}
