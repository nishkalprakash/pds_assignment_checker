/*
Anindita Malviya
21MI33004
Section3
Code blocks
Assignment 2 a
*/

#include <stdio.h>
#include <math.h>

int main(){
  int k,i;
  float z, zl,s;

  printf("Enter z= ");
  scanf("%f", &z);
  printf("k = ");
  scanf("%d", &k);


    for(i=1; i<=k; i++)
    {
        printf("(%f,%d)", z, i);
        zl=z;
        s = sqrt(fabs(z));
        z = z - s;
        if (z<0){z= 0-z;}
        if(zl==z)
        {
        s = s - (1/i);
        z = z - pow(s, 2);
        }
        if (z==0)
            {
                printf("(%f,%d)", z, i-1);
                break;
            }

    }

}


