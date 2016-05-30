#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int max;
    double k, sum = 0;
      printf("max(k)=");
    scanf("%d", &max);
    
    for (k = 1; k <= max; k++) {
    	sum = 1 / pow ( k, 5);
    }
    printf("\nSumma rivna = %lf", sum);
    system("pause");
    return 0;

