#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main ()
{
   
   
       int max;
       double i, sum = 0;
	
    printf("maxim(i)= ");
    scanf("%d", &max);
for (i = 1; i <= max; i++) {
    sum = 1 / pow ((2 * i), 2);
    }
    printf("\nSumma rivna %lf", sum);
    system("pause");
    return 0;
}

