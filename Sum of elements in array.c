#include <stdio.h>
int main() {
    int n, ar[100], i, sum=0;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array : \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum+=ar[i];
    }
    printf("Sum of array elements = %d", sum);
    return 0;
}