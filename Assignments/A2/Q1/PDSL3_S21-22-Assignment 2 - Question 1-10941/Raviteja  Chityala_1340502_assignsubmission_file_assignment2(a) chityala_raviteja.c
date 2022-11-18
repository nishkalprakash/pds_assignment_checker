/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>

int main() {
    
    int a,k;
    double z,s,z1;
    printf("z = ");
    scanf("%lf",&z);
    printf("k = ");
    scanf("%d",&k);
    for (a=1;a<=k;a++){
        
        s=sqrt(z);
        z1=fabs((z-s));
        if (z1==z){
            s=s-(1/a);
            z1=z-(s*s);
        }
        z=z1;
        printf("(%lf,%d), ",z,a);
        if (z==0){
            return 0;
        }
    }
    return 0;
}