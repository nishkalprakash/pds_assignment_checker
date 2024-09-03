#include <stdio.h>
#define N 100
int main()
{
	int n,i,j=0,flag=0;
	int inumbers[N];
	printf("\nPlease input the number of elements:");
	scanf("%d", &n);
	if(n>100) printf("Please input the value less than or equal to 100.");
	printf("\nPlease input the elements of the array:");
	for(i=0 ; i<n ; i++ )
	{
		scanf("%d", &j);
		inumbers[i]=j;
	}
	printf("\nOriginal Array:");
	for(i=0 ; i<n ; i++ )
	{
		printf("%d ", inumbers[i]);
	}
	printf("\nDuplicates:");
	for(i=0; i<n && j<n && j!=i; i++)
	{
		if (inumbers[i]==inumbers[j])
		{
			++flag;
		}
		if(flag>0) printf("%d %d \n", inumbers[j], flag);
		else printf("No duplicate found.\n");	
		j++;
		
	}
	if(flag>0) printf("%d %d \n", inumbers[j], flag);
		else printf("NO Dublicate found.\n");	
	
	
	return 0;
}
