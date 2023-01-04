/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 7
Description : Program to find out the number of times an element in an array appear
*/

#include<stdio.h>
int main()
{
	int i,j,n,m,a[100],count = 0;
	char check = 'f';

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter %d numbers: ",n);
	for(i = 0;i < n;i++)
		scanf("%d ",&a[i]);

	//printf("Enter number of times to check: ");
	scanf("%d",&m);

	for(i = 0;i < n;i++){
		for(j = 0;j < n-1;j++){
			if(a[i] == a[j]){
				count++;
			}
		}
		if(count == m){
			printf("%d ",a[i + 1]);
			check = 't';
		}
	}
	if(check == 'f')
		printf("No number appears %d times",m);
	if(check == 't')
		printf("appears %d times ",m);
	return 0;
}
