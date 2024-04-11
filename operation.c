# include <stdio.h>

int main () {
    int x,y;
    float sum,difference,multiplication,division,modulus;

    printf("Enter your first number:");
    scanf("%d", &x);

    printf("Enter your second number:");
    scanf("%d", &y);

    sum = x + y;
    difference = x - y;
    multiplication = x * y;
    division = x / y;
    modulus = x % y;


    printf ("sum: %.0f\n", sum);
    printf ("difference: %.0f\n", difference);
    printf ("multiplication: %.0f\n", multiplication);
    printf ("division: %.2f\n", division);
    printf ("modulus: %.0f\n", modulus);
    

    return 0;
}
