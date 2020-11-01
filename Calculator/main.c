#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculator
    //int num1;
    //int num2;
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);
    //What if you want decimal numbers

    return 0;
}
