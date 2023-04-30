#include<stdio.h>
#include<math.h>
#include <stdlib.h>
/* NAME - NAIN ADITYA
ROLL NO- 22AG10029
SECTION 2
LAB TEST QUESTION 2*/
int main(){
    int n,k=10;int l,rev=0;
    scanf("%d",&n);
    while(1){
        if(n/k>=1 && n/k<10) break;
        k*=10;}
        if (n<0) l=((-1)*n);
        else l=n;
        if (!(n%2==0)){printf("most significant to least significant digits is\n");
                for (int i=k;i>=1;i/=10){
                int b;
                b=(l/i);
            printf("%d ",b);}}
       else {printf("least significant to most significant digits is\n ");
            for (int i=1;i<=k;i*=10){
            int b;
            b=(l/i);
printf("%d ",b);
   }}int j=k;
for (int i =1 ;i<=k;i*=10){
        int a,b;
        a=l;
        b=(a/j);
        rev+=b*i;
        a=a%j;
        j/=10;

    }

 int diff;
 diff=n-rev;
 if (diff<0) diff=-1*diff;
 printf(" \n reverse no is %d \n difference between them is %d",rev,diff);
return 0;}
