#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter value of a: ");
   scanf("%d",&a);
   printf("Enter value of b: ");
   scanf("%d",&b);
   if (a==b)
   {
      printf("Both values are equal");
   }
   else
   {
      printf("The values are not equal");
   }
   return 0;
}