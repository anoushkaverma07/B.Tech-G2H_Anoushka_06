#include <stdio.h>
int main() {
    float n1, n2, n3, n4, n5, sum, perc;
    printf("Enter the marks of 5 subjects: \n");
    scanf("%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5);
    sum = n1+n2+n3+n4+n5;
    perc = (sum/500)*100;
    printf("Total sum of marks = %.2f \n", sum);
    printf("Overall percentage = %.2f \n", perc);
    if (perc<=60)
    {
        printf("Grade D");
    }
    else if (perc<=80)
    {
        printf("Grade C");
    }
    else if (perc<=90)
    {
        printf("Grade B");
    }
    else if (perc<=100)
    {
        printf("Grade A");
    }
    return 0;
}