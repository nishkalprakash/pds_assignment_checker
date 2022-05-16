/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3c
package          : code blocks
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x0,e,maxiteration;
    printf("x0=");
    scanf("%f",&x0);
    printf("\ne=");
    scanf("%f",&e);
    printf("\nmax iteration=");
    scanf("%f",&maxiteration);
    printf("\n");
    //given f(x)=x^3-25 => f'(x)=3*x^2 and x(n+1)= x(n)-(f(x(n))/f'(x(n)));
    float p,q,k=e;
    float x1;
    int i=1;
    while((k>=e)&&(i<=maxiteration)){
        p= ((x0)*(x0)*(x0))-25;
        q= 3*(x0)*(x0);
        k= p/q;
        x1= x0 - k;
        printf("%d\t",i);
        printf("%f\t",x0);
        printf("%f\t",x1);
        printf("%f\t",k);
        x0 = x1;
        printf("\n");
        i++;
    }
    return 0;
}
