#include <stdio.h>
int main()
{
//while (1)
//{	
	int n1;
	char c1;
	float f1;
	printf("Enter a positive integer : ");
	scanf("%d",&n1);
	printf("Enter a floating point number in scientific notation : ");
	scanf("%f",&f1);
	printf("Enter any character : ");
	scanf("%s",&c1);

	printf("%d\n%f\n%c\n",n1,f1,c1);
//}
	return 0;

}

