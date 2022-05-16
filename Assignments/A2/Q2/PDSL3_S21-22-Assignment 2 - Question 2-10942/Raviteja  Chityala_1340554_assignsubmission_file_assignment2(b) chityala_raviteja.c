/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include <math.h>
int main(){
    srand(time(NULL));
    int n,k,a,b,p,dn=0,D=0;
    double DE;
    printf("n = ");
    scanf("%d",&n);
    printf("k = ");
    scanf("%d",&k);
    for(b=0;b<k;b++){
        for (a=0;a<n;a++){
        p=rand()&1?-1:1;
        
        dn=dn+p;
        
        }
    D=D+pow(fabs(dn),2);
    
    }
    DE=sqrt((D/k));
    printf("%lf",DE);
    return 0;
    
}