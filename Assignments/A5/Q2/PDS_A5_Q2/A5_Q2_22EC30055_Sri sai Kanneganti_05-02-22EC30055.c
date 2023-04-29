/*name K.SRISAI
RollNo 22EC30055
LAB: 5
QUESTION No 2(functions)
*/
#include<stdio.h>
int primeCheck(int i);
int main()
{
 int n,g,a;
 printf("enter a number\n");
 scanf("%d",&n);
 if(n==1) {
    printf("the given number is a unique number\n-1");
    return 0 ;
 }
 if(n%2==1)
    {
    printf("the given number is odd\n-1\n");
 return 0 ;
    }
 /*printf("%d\n",primeCheck(n));*/
 if(primeCheck(n)==0){
     printf("-1");
 return 0 ;
 }
 for(int i=1;i<n-1;i++)
    {
    a=n-i ;
 if((primeCheck(a)==0)&&(primeCheck(n-a)==0)){
    break ;
 }
    }
    printf("%d,",a);
    printf("%d",n-a);
    return 0 ;

}
int primeCheck(int i)
{
int n=i,c ;
if(n==1){
    return 1 ;
}
for(int k=1;k<n-1;k++)
    {
    int a=n-k ;
    c=n%a ;
    if(c==0)
        {
         return 1 ;
        }

    }
    return 0 ;
}
