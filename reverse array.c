#include <stdio.h>
int main() {
    int n, i, j, ar[100];
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Elements of the array in reverse are; \n");
    for (j=n-1; j>=0;j--)
    {
        printf("%d \n", ar[j]);
    }
    return 0;
}