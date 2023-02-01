#include<stdio.h>
float harmonic_sum(int n){
float sum=0;
if(n==0)
return 0;
if(n==1)
return 1;


sum=harmonic_sum(n-1)+ 1/(float)n;

return sum;

}
int main()
{
int n;
float sum;
printf("Enter the value of n between 0 to 99999");
scanf("%d",&n);
sum=harmonic_sum(n);
printf("Value of harmonic series is %f",sum);
return 0;
}
