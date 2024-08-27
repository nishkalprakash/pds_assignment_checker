// Code to print n terms of series
// code creator: Bhumi garg
// Roll no: 24NA10021

#include <stdio.h>
int main ()
{ 

        int N, count, C =0, A =1, B = 0;
        
        printf(" Enter N: ");
        scanf ("%d", &N);
        
        for (count = 1; count <= N; count ++)
        
   {     C = (A + B) ;
        
        A = B, B = C ;
        
        if ( count % 2 == 0)
       {   
        C = C * (-1);
        printf (" %d", C); }
        
        else
        printf (" %d", C);
        
   }
        if (N <= 0)
        printf (" N is invalid");
        
}
