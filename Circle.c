#include <stdio.h>
#include <math.h>
int main() {
    float r,area,circ;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    circ=2*3.14*r;
    area=3.14*r*r;
    printf("The circumference of circle = %.2f \n",circ);
    printf("The area of circle = %.2f \n",area);
    return 0;
}