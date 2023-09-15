//Shrey Patel
//23CS10051

#include <stdio.h>

int main()
{
int n;
printf("Enter the number of students:");
scanf("%d",&n);
float a[n],sum=0;
unsigned int b[n];
printf("Enter the roll no and then marks in one line(eg 23CS10051 8.5)\n");
for(int i=0;i<n;i++)
{
scanf("%u %f",&b[i],&a[i]);
}

for(int i=0;i<n;i++)
{
printf("%u \t %f \n",b[i],a[i]);
sum=sum+a[i];
}
printf("The average is %f\n",sum/n);

for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{if(((int)(a[i]*100)==(int)(a[j]*100))&& a[i]!=20)
{
printf("Roll no:%d CGPA:%f \n",b[i],a[i]);
printf("Roll no:%d CGPA:%f \n",b[j],a[j]);
for(int k=j+1;k<n;k++)
{if((int)(a[k]*100)==(int)(a[i]*100))
{printf("Roll no:%d CGPA:%f\n",b[k],a[k]);
 a[k]=20;}
}}
printf("\n");}}
return 0;
}
