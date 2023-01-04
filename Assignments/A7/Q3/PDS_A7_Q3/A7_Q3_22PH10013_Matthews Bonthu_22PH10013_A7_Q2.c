#include <stdio.h>
int main ( )
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	int i,j,anag;

	for(i=0;i<100;i++)
	{
         for(j=0;j<100;j++)
         {
         	if(a[i]==a[j])
         	{
         		anag=1;
         		break;
         	}
         	else
         	{
         		anag=0;
         	}
         }
	}
	if(anag==1)
	{
		printf("Anagram");
	}
	if(anag==0)
	{
		printf("Not Anagram");
	}
}