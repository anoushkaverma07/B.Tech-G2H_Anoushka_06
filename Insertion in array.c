#include<stdio.h>
void insbeg(int a[], int n, int x)
{
    int i;
    for (i=(n-1); i>=0; i--)
    {
        a[i+1]=a[i];    
    }
    a[0]=x;
}

void insend(int a[], int n, int x)
{
    a[n]=x;
}

void inspos(int a[], int n, int x)
{int pos, i;
    printf("Enter position at which element is to be inserted: ");
    scanf("%d", &pos);
    for (i=(n-1); i>=(pos-1); i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=x;
}

void display(int a[], int n)
{
    int i;
    n++;
    printf("Array elements are: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[20], n, i, item;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d", &item);
    insbeg(a,n,item);
    display(a,n);
    insend(a,n,item);
    display(a,n);
    inspos(a,n,item);
    display(a,n);
    return 0;
}