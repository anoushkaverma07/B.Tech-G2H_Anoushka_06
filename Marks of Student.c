#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks of Subject1: ");
    scanf("%d",&a);
    printf("Enter the marks of Subject2: ");
    scanf("%d",&b);
    printf("Enter the marks of Subject3: ");
    scanf("%d",&c);
    printf("Enter the marks of Subject4: ");
    scanf("%d",&d);
    printf("Enter the marks of Subject5: ");
    scanf("%d",&e);
    float f;
    float g;
    f=a+b+c+d+e;
    g= ((f*100)/500);
    printf("The total marks= %f \n",f);
    printf("The percentage obtained= %.2f",g);
    printf("%");
return 0;}