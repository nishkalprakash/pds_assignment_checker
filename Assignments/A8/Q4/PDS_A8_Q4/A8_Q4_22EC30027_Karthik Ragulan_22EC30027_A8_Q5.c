#include<stdio.h>
int main()
{
char A[100],B[100];
char a,b;
int i=0,j=0,l1,l2,count=0,k;
printf("enter the first string S1: ");
while(a!='\n')
{
	a=getchar();
	A[i++]=a;
}
A[i]='\0';
l1=i;
printf("enter the first string S2: ");
while(b!='\n')
{
	b=getchar();
	B[j++]=b;
}
B[j]='\0';

l2=j;
for(i=0;i<l2-l1+1;i++)
{
	for(j=0;j<l1;j++)
	{
		for(k=i;k<l2-l1+1;k++)
			{
				if((A[j]==B[k])&&(A[j]==B[k+1])&&(A[j]==B[k+2]))
				count++;
			}	
		
	}

}
printf("%d",(count));
return 0;
}

