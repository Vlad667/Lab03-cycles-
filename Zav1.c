#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>


int main(void)
{
     printf("Vvedite chiclo \nn=");
    int x, y, z;
   
    scanf("%d", &x);
    for(y=2;y<x;y++)
    {
        int f = 0;
         for (z=2;z<y;z++) {
             if(y%z==0) {
                 f=1;
                 break;
             }
         }
         if (f==0)
             printf("%d\n",y);
    }
    system("pause");        
    
    return (0);   
}
