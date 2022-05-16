/*n
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float z,s,il;
    int k;
    float zl=-1;
    printf("z = ");
    scanf("%f",&z);
    printf("k = ");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
            int flag=0;

            if(sqrt((zl-z)*(zl-z))<0.001){
               il = (float)i;
                s-=(1/il);
                flag++;

            }else{
                if(z>0){
                s=sqrt(z);
                }else{
                s=sqrt(-z);
                }
            }

            zl=z;
            if(flag==0){
                        z=z-s;
            }else{
                  z=z-s*s;
            }

        if(z<0){
            z= z*(-1);
        }
        printf("%f , %d\n",z,i);

    }

    return 0;
}
