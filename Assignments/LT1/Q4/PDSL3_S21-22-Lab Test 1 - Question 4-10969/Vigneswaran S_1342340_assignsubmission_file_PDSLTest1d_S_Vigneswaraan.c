/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>

int main(){
 int n,i,j,k,x[20],y[20];
 float xm=0.0,ym=0.0,m=0.0,b=0.0,denom;
 printf("Enter no of coordinates(<20)");
 scanf("%d",&n);
 printf("\nEnter x and y coordinates");
 for (i=0; i < n;i++){
    scanf("%d%d",&x[i],&y[i]);
    xm+=x[i]/n;
    ym+=y[i]/n;
 }
 for (j=0; j < n;j++) denom+=x[j]-xm;
 printf("entered coordinates are x  y");
  for (int k=0; k < n;k++){
    printf("\n%d\t%d",x[k],y[k]);
    m+=(x[k]-xm)*(y[k]-xm)/denom;

 }
 b=ym-m*xm;
 printf("\nm=%.1f,b=%.1f\nline eqn y=%.1fx+%.1f",m,b,m,b);

}
