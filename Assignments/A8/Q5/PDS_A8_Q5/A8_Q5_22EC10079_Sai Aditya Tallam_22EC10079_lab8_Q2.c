#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	int i=0;
	int k=0;
	printf("enter the word :");
	gets(name);
	while(name[i]!='\0')
	{
		i++;
	}
	int n=i;

	for(int i=0,j=i+1;i<n-1;i++,j++)
	{
		if(name[i]==name[j])
		{
			while(k<2)
			{
				printf("%c",name[k+i]);
				k++;
			}
		}
		printf(" ");
		k=0;
	}
	k=0;
	for(int i=0,j=i+2;i<n-1;i++,j++)
	{
		if(name[i]==name[j])
		{
			while(k<3)
			{
				printf("%c",name[i+k]);
				k++;
			}
		}
		printf(" ");
		k=0;
	}
	k=0;
	for(int i=0,j=i+3;i<n-1;i++,j++)
	{
		if(name[i]==name[j] && name[i+1]==name[j-1])
		{
			while(k<4)
			{
				printf("%c",name[i+k]);
				k++;
			}
		}
		printf(" ");
		k=0;
	}
	for(int i=0,j=i+4;i<n-1;i++,j++)
	{
		if(name[i]==name[j] && name[i+1]==name[j-1] && name[i+2]==name[j-2])
		{
			while(k<5)
			{
				printf("%c",name[i+k]);
				k++;
			}
		}	
		printf(" ");	
			k=0;

	}
	k=0;

	
	return 0;

}