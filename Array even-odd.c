#include <stdio.h>
int main() {
    int n, ar[100], i, even=0, odd=0;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("Number of even elements = %d \n", even);
    printf("Number of odd elements = %d", odd);
    return 0;
}