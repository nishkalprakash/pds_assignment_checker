/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>
#include <math.h>

int main()
{

    int m1[4]= { 8200,8300,6900,9200 };
    int m2[4]= {7700, 3700, 4900, 9200};
    int m3[4]= { 1100, 6900, 500, 8600};
    int m4[4]= {800, 900, 9800, 2300};

    int a=100000;
    int sum;
    int i,j,k,l;
    for(i=0;i<4;i++){
        sum=m1[i];

        for(j=0;j<4;j++){
            if(j==i) continue;
            else sum+=m2[j];

            for(k=0;k<4;k++){
                if(k==j || k==i) continue;
                else sum+=m3[k];

                for(l=0;l<4;l++){
                    if(l==k || l==j|| l==i) continue;
                    else sum+=m4[l];
                }
            }
        }
        if(a>sum) a=sum;
    }



printf("the min cost is %d",a);
    return 0;
}


