#include<stdio.h>
int main(){
int a,b;
printf("enter the pair");
scanf("%d%d",&a,&b);
int q=b,res=0,rem=0;
rem=q%10;
res=res*10+rem;
q=q/10;
if(q!=0)
{
  rem=q%10;
  res=res*10+rem;
  q=q/10;
}
if(q!=0)
{
  rem=q%10;
  res=res*10+rem;
  q=q/10;
}
if(res==a)
{
    printf("the nos are perfect pair");

}
else{
    printf("the nos are not perfect pair");
}
}
