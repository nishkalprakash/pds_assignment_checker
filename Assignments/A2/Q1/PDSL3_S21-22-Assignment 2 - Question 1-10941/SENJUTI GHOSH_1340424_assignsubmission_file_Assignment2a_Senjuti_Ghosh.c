/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
double z,s,temp;
int k,i;
i=1;
printf("Enter height\n");
scanf("%lf",&z);
printf("Enter total number of iterations\n");
scanf("%d",&k);
while ((i<=k)&&(z!=0)){
       temp=z;
       s=sqrt(z);
       z=fabs(z-s);
       if (z==temp){
           s=s-(1/(i));
           z=temp-(s*s);
       }
       printf("(%lf,%d)",z,i);
       ++i;
}
return 0;
}
