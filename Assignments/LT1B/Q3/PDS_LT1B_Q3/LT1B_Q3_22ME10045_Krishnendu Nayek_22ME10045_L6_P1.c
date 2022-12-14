#include<stdio.h>
int main()
{
int n[1000];
printf("Enter numbers :\n");

int i=0;
int p=0;

while(i>=0)
{
scanf("%d",&n[i]);
char q;
printf("enter 'e'if you want to exit?\n");
scanf("%c",&q);
if(q=='e')
break;
else
i++;
}
int d=0,count=0;
while(n[d]>0)
{
count++;
}

int j,k,t,l,sl;
for(j=0;j<=count;j++)
{
l=n[0];
if(l<n[j+1])
{
l=n[j+1];
t=j+1;
}
}
n[t]=0;
for(k=0;k<=count;k++)
{
if(l!=n[0])
sl=n[0];
else
sl=n[1];
if(sl<n[k+1])
{
sl=n[k+1];
}
}
if(i>1)
{
printf("largest number is %d \n",l);
printf("second largest number is %d \n",sl);
}
else if(i==1)
{
printf("largest number is %d \n",n[0]);
printf("second largest number: value not yet entered \n");
}
}




