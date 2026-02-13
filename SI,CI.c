#include <stdio.h>
#include <math.h>
int main() {
   float pa,roi,t;
   printf("Enter Principal Amount: ");
   scanf("%f",&pa);
   printf("Enter Rate of Interest: ");
   scanf("%f",&roi);
   printf("Enter Time in years: ");
   scanf("%f",&t);
   float si,ci,e;
   si=pa*roi*t/100;
   e=pow(1+roi/100,t);
   ci=(pa*e)-pa;
   printf("The Simple Interest =%.2f \n",si);
   printf("The Compound Interest =%.2f \n",ci);
return 0;
}