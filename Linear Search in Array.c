#include <stdio.h>
int main()
{
    int ara[100], n, i, key, found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the integer elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i=0; i<n; i++)
    {
        if (ara[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found==1)
    {
        printf("Element %d found at index %d", key, i);
    }
    else 
    {
        printf("Element %d not found in the array", key);
    }
    return 0;
}