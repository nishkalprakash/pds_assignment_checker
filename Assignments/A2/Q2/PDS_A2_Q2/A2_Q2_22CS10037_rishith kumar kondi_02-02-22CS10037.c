#include<stdio.h>
#include<math.h>
int main()
{
    double alpha=.306,sigma=1.2,rs=6.96e8,ts=1.3654e-11,d=1.496e11,tp;
    //printf("enter alpha,sigma,rs,ts,d"); 
    //scanf("%le,%le,%le,%le,%le",&alpha,&sigma,&rs,&ts,&d);
    tp=ts*sqrt((rs/(2*d))*sqrt((1-alpha)/sigma));
    printf("tp=%le",tp);
    //there is no change in the output of theprogram if the values are predefined or given as input
}