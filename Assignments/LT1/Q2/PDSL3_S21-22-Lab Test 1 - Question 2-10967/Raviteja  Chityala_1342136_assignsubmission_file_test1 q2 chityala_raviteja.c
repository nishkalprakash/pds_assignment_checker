/*chityala raviteja
section 3
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>

int main() {
    double  x0,e,x1,error;
    int m_iter,iter;
    printf("x0=");
    scanf("%lf",&x0);
    printf(",E=");
    scanf("%lf",&e);
    printf("maxIteration=");
    scanf("%d",&m_iter);
    error=1000000.00;
    iter=1;
    printf("Iteration     x0        x1         Error\n");
    while (error>e && iter<=m_iter){
        x1=x0-((x0*x0*x0-25)/(3*x0*x0));
        error=x0-x1;
        printf("   %d       %lf    %lf    %lf\n",iter,x0,x1,error);
        x0=x1;
        iter+=1;
    }
    printf("The square root is %lf",x1);
return 0;
    
}