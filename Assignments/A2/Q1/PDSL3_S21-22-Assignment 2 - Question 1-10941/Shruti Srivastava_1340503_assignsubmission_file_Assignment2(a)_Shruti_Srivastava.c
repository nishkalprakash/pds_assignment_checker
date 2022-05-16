/* Name - Shruti Srivastava
   Roll no- 21EE30025
   Electrical Engg. Dual Degree
   Section 3
   Code Blocks
   Windows 10
   */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    double z,prev;
    int k;
    printf("Please Enter the Height 'z'\n");
    scanf("%lf",&z);
    printf("Please Enter the number of iterations 'k'\n");
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        prev=z;
        z=z-sqrt(z);
        if(z<0){
            z=(-1)*z;
        }
        if(z==prev){
            z=z-1/k;
        }
        if(z==prev){
            printf("(0.000000,%d)\n",i);
            break;
        }
        printf("(%lf,%d)\n",z,i);
    }
    return 0;
}
