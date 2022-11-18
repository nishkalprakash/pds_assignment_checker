/*
Anindita Malviya
21MI33004
Section3
Code blocks
Assignment 2 b
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int n,k;
    double D = 0;

    printf("Enter n: ");
    scanf("%d",&n);
    printf("k: ");
    scanf("%d",&k);
    for (int Count = 0; Count<k; Count++)
    {
     int dn = 0;
    for (int count = 0; count<n; count++)
    {
    int p = rand() & 1 ? -1 : 1;
    dn = p + dn;
   // printf("%d",dn);

    }


    D = D + dn*dn;
   // printf("%lf\n",D);

    }
  //  printf("%lf %d \n",D,k);

    double DE;
    DE = sqrt(D/k);
    printf("%lf",DE);

}
