#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Method is also a term that is used instead of function
    //main gets executed at the start of the program
    printf("Top\n");
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    printf("Bottom\n");
    return 0;
}

void sayHi(char name[], int age){
    //This is a function
    printf("Hello %s you are %d \n", name, age);
}


