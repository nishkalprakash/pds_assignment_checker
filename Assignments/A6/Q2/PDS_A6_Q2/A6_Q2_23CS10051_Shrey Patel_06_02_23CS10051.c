//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>

int a[30];


int sum(int b[],int size)
{if(size==-1)
return 0;
return b[size-1]+sum(a,size-1);
}

int max(int b[],int size)
{int Max=b[size-1],l=b[size-2];

if(size-2==0)
return Max;

if(Max<l)
Max=l;

max(a,size-1);
}


int rev(int a[],int l,int m)
{
int temp;
if(l>m)
return 0;

else{
temp=a[l];
a[l]=a[m];
a[m]=temp;
rev(a,l+1,m-1);    
}}

int main()
{
int l;
for(int i=0;i<30;i++)
a[i]=rand()%11+20;
for(int i=0;i<30;i++)
{printf("%d\t",a[i]);
if(i%10==9)
printf("\n");}

l=sum(a,30);
printf("The sum is %d\n",l);

l=max(a,30);
printf("The max is %d\n",l);

printf("The Reverse of the aray is:\n");
rev(a,0,29);
for(int i=0;i<30;i++)
{printf("%d\t",a[i]);
if(i%10==9)
printf("\n");}

return 0;
}
