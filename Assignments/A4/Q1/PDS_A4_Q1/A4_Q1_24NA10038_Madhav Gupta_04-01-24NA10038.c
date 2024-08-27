//Creator: Madhav Gupta
//Roll No.:24NA10038
//About: Displaying a series
#include <stdio.h>
int main()
{
       int n, i, k, j, count;
       scanf("%d", &n);
       if (n>0) {
       for(count=1, i= 1, k= -1; count<=n; count++){ //starts the loop
       printf("%d\n", i);
       j=k;
       k=i+(k*(-1)); //gives the next number
       i=j;
       }
       }
       else
       printf("N is invalid");
       return 0;
       }
       
       
     
