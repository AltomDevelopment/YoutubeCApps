#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Elements in the array are integers
    //Arrays store information
    //ints doubles floats string,, Arrays store information
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    //Can also define how many elements should be in the array
    //You can then set values at the indexes
    int unluckyNumbers[10];
    char phrase[20] = "Array";
    unluckyNumbers[1] = 80;
    //Can modify elements by referring to the index
    luckyNumbers[1] = 200;
    //Put index of the element you want to access
    //Indexes of Arrays start at 0
    printf("%d\n", luckyNumbers[1]);
    printf("%d", unluckyNumbers[1]);

    return 0;
}
