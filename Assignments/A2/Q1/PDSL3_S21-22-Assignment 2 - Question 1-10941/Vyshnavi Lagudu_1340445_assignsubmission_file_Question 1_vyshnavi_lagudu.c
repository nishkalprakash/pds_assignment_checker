/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3
package          : code blocks
*/
#include<stdio.h>
#include <math.h>
int main()
{
    int k,i;
    float z,s;
    printf("z=");
    scanf("%f",&z);
    printf("\nk=");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        if(z<0){
                z=(-1*z);
                }
        s=pow(z,0.5);
        z=z-s;
        if(z<0)
            break;
        else
        {
            printf("(%f,%d),",z,i);
        }
    }
}
