/* Section 14
   Muskan
   Lab- 11
   Roll No.- 22ME30042
*/
#include<stdio.h>
   

float har_sum(int n)
{if(n==0)return 1;
if(n==1)
return 1;
else return (har_sum(n-1)+1.0/n);
}

int main()
{
int n;
printf("Enter the number of terms\n");
scanf("%d",&n);
float sum=har_sum(n);
printf("sum of series is %f",sum);
return 0;
}



