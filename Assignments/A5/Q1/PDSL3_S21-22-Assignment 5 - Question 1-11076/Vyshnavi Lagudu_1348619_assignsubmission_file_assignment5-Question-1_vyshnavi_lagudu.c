/*name           : vyshnavi_lagudu
dept             : EE
roll number      : 21EE10044
assignment class : 3c
package          : code blocks
comments:NA
*/
#include<stdio.h>
void order(int *x,int *y,int *z)
{
   int i,j,k;
   i=*x;j=*y;k=*z;
   if(i<=k && k<=j){
                  *y=k;
                  *z=j;
                  }
    else if(j<=i && i<=k){
                         *x=j;*y=i;
                         }
    else if(j<=k && k<=i){
                         *x=i;*y=k;*z=i;
                         }
    else if(k<=i && i<=j){
                         *x=k;*y=i;*z=k;
                         }
    else if(k<j && j<i && k<i){
                              *x=k;*y=j;*z=i;
                              }
}
main()
{
   int a,b,c;
   printf("enter the three integers:");
   scanf("%d%d%d",&a,&b,&c);
   printf("\naddress of a=%d\n",&a);
   printf("address of b=%d\n",&b);
   printf("address of c=%d\n",&c);
   printf("values in a,b,c=%d,%d,%d\n",a,b,c);
   order(&a,&b,&c);
   printf("after calling function:\naddress of a=%d\n",&a);
   printf("address of b=%d\n",&b);
   printf("address of c=%d\n",&c);
   printf("values in a,b,c=%d,%d,%d\n",a,b,c);
   return 0;
}
