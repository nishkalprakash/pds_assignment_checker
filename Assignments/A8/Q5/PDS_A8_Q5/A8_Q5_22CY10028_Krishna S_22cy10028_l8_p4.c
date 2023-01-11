#include <stdio.h>
int main()
{
	char a[100];
	printf("Enter the word :");			// Getting the word as a input from the user
	scanf("%s",&a[0]);
	for (int i = 0; i < 50; i++)
	{
		printf("%c",a[i] );
	}
	
	
	return 0;
}