#include <stdio.h>
int f(int n)
{
   if(n<2)
     return 1;
	
  return f(n-1)+f(n-2);

}
int main()
{
int arr[30];
int n,i;
printf("enter no. to be checked");
scanf("%d",&n);
for(i=0;i<30;i++)
{
  arr[i] = f(i);
}
int flag=0;
for(i=0;i<30;i++)
{
	if(n==arr[i])
	{
	flag=1;
	break;
	}
}
if(flag==1)
printf("yes");
else
printf("no");
return 0;
}
