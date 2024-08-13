/* > Program to compute sum of the series and sum of squares of series
   > Code creator : somanath goudar
   > Roll number  : 24NA10002
*/

#include <stdio.h>

int main()
{
int n;
printf("ENTER THE NUMBER n:");
scanf("%d" ,&n);
   int S1;
   S1 = (n)*(n+1)/2;
   long int S2;
   S2 = (n)*(n+1)*(2*n+1)/6;
   printf("%d,%ld" ,S1,S2);
   
   return 0;
 }
    
