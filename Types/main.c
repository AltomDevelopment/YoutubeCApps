#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    //Prompt the user
    printf("Enter your name: ");
    //Scanf with a string only grabs chars up to the first space
    // John Smith entered would only pick up John
    //fgets with enter prints newline and stores other chars
    fgets(name, 20, stdin);
    printf("Your name is %s asdfd", name);

    return 0;
}
/* Data Structures
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    char phrase [] = "Giraffe Academy"

- Print out can be used to print out all sorts of information
printf("%d"); means you want to print out an integer
- %f for float
- %c for character "char"

int favNum = 90;
    printf("My favorite %s is %d", "number", favNum);

    return 0;

printf("%f", 5 + 4);
- will not work because we are asking for a float
-ceil, floor, sqrt, pow "Math functions"

const int num = 5;
    printf("%d\n", num);
    //Throws an error because you can't modify a constant
    num = 8;
    printf("%d", num);
    return 0;

    double gpa;
    //Prompt the user
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    return 0;
*/
