#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f22;
    scanf("%d",&n);
    printf("Value of n: %d",n);
    if(n<0)
        {
         printf("\n enter a positive number");
         return 0 ;
        }
    for(int i=2;f2<=n;i++)
        {
            int a ;
    a=f2 ;
    f2=f2+f1 ;
    f1=a ;
        }
   f22=f1 ;
    if(f22==n)
        {
         printf("\n %d is a fibonachi nuber",f22);
        }
        else {
    if((f2-n)>=(n-f22))
        {
         printf("\n Nearest fibonachi number: %d",f22);
        }else{
         printf("\n Nearest fibonachi number: %d",f2);
        }
}
   return 0 ;
}
