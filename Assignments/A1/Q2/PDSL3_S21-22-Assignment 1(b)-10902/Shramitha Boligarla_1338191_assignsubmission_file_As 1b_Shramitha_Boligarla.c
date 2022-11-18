/* NAME: Shramitha Boligarla
   ROLL NO. : 21ME10024      */

#include<stdio.h>
int main()
{

    int N,r;
    int d1,d2,d3;

    scanf("%d",&N);
    printf("Enter a 3 digit number: %d\n",N);

    d1=N/100;
    d2=N%100/10;
    d3=N%10;

    r= d3*100 + d2*10 + d1;

    printf("Reverse number = %d", r );
    return (0);

}
