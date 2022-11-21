#include<stdio.h>
#include<math.h>
int main()
{
	float Uo;
	float Eo;
	
	scanf("%f %f",&Uo,&Eo);
	printf("speed of light =");
	printf("%f",sqrt(1/(Uo*Eo)));
	
	return 0;
}
