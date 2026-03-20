#include <stdio.h>
int main() {
    int n, ar[100], i, j, car[100];
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array 1: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        car[i]=ar[i];
    }
    printf("Copied array: \n");
    for (j=0; j<n; j++)
    {
        printf("%d \n", car[j]);
    }
    return 0;
}