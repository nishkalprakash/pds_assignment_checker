/* Section 14
   Muskan
   Lab- 11
   Roll No.- 22ME30042
*/
#include<stdio.h>

int fibo_seq(int n)
{ 
 if(n==0)return 0;
 if(n==1)return 1;
 else return (fibo_seq(n-1)+fibo_seq(n-2));
}


int main()
{
 int n,key,found=0;
 printf("Enter the number of terms of fibonacci sequence\n");
scanf("%d",&n);
printf("Enter the number u want to search\n ");
scanf("%d",&key);
for(int i=0;i<n;i++)
{
if(key==fibo_seq(i))
{
 found=1;
 break;
}
else
{
found=0;
}
}

if(found==1)
{
printf("Number is found?: Yes\n");
}
else
printf("Number is found?: No\n");

return 0;
}



