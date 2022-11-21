#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
	int n,y,m,g;
	float s1,s2,s3,s4;
	g=978, m=125;
	printf("enter the value of the height");
	scanf("%d",&y);
	printf("enter the number of bounce");
	scanf("%d",&n);
	s1=pow((2/3),n);
	s2=1-s1;
	s3=s2/2.0;
	s4=y*(1.0+s3);
	printf("The distance is %f",s4);
	return 0;


	




}



