#include <stdio.h>
int main()
{
	char a[100], b[100];

	printf("Enter String 1 :");
	
		scanf("%s",&a[0]);
	
	
	printf("Enter String 2 :");
	/*for (int i = 0; i < 100; ++i)
	{
		scanf("%s",&b[i]);
	}
	*/

	for (int i = 0; i < 100; i++)
	{
		printf("%c\n",a[i] );
	}
	return 0;
}