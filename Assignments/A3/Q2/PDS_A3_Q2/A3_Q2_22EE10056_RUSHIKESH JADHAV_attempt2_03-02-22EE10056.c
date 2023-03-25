#include<stdio.h>

int main()
{

    int a,b,sum=0,j;//declaration of variables
    printf("Enter any two integer numbers between -999 & 999:");//asking for input
    scanf("%d %d",&a,&b);//taking input
    if(a/1000==0 || b/1000==0)
    {
    j=a%10;//calculation
    sum=sum*10+j;
    a=a/10;
    if(a!=0)
    {j=a%10;
    sum=sum*10+j;}
    a=a/10;
    if(a!=0)
    {j=a%10;
    sum=sum*10+j;}
    if(sum==b)//checking condition
    {
        printf("Perfect pair");//printing output
    }else
    {
        printf("Not perfect pair");//printing output
    }}
    else{
    printf("wrong input");}
    return 0;
}
