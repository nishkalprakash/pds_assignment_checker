// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int p;
    
    int i, n,j,k;
    float d = 0, e = 0,f;

    printf("ENTER THE VALUE OF n\n");
    scanf("%d",&n);
     printf("ENTER THE VALUE OF k\n");
    scanf("%d",&k);

    for ( j = 0; j< k; j++)
    {
        for (i = 0; i < n; i++)
    {
        p = rand() & 1 ? -1 : 1;
        d = d + p;//adding up the distances
        
    }
     
     e=e+d*d;// adding up the squares total distances for each iterations
     d=0; 
    }

    f=sqrt(e/k);
    printf("OUTPUT:%f",f);
    
    


    return 0;
}
