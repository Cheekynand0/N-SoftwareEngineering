#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    //Task to add an extra number, display & find the average.
    int y = 0;

    printf("Enter your friend's age\n");
    int founder = scanf_s("%d", &y);
    printf("Matched %d items\n", founder);
    printf("y = %d\n", y);

    float z = ((float)y + (float)x) / 2.0;
    printf("Average = %f", z);
}


