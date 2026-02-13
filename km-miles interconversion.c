#include <stdio.h>
int main()  {
    float km, miles;
    int choice;

    printf("1. Convert Kilometers to Miles\n");
    printf("2. Convert Miles to Kilometers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter distance in Kilometers: ");
        scanf("%f", &km);

        miles = km * 0.621371;  
        printf("Distance in Miles = %.3f\n", miles);
    }
    else if (choice ==2) {
        printf("Enter distance in Miles: ");
        scanf("%f", &miles);

        km=miles * 1.60934;  
        printf("Distance in Kilometers = %.3f\n", km);
    }
    else {
        printf("Invalid Choice!\n");
    }
    return 0;
}