#include <stdio.h>

int main()
{
    // Outer loop 
    for (int j = 1; j <= 12; j++) //One multiplier
    {
        printf("(%d)\n", j); 
        
        for (int k = 1; k <= 12; k++)  //Second multiplier
        {
            printf("\t\t%d x %d = %d\n", k, j, (j*k));
        }


    }
}
