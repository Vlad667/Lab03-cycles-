#include <stdio.h>   
#include <stdlib.h>
#include <math.h>

int main ()
{
    int max;
    double i, sum = 0, factorial = 1;
    
        printf("max (i) =");
        scanf("%d", &max);
    
          for (i = 1; i <= max; i++) {
    	    factorial *= i;
        	sum += (1/pow(i, 2)) + factorial
    }
    
    printf("Summa rivna %lf", sum);
    
    system("pause");
    
    return 0;
}

