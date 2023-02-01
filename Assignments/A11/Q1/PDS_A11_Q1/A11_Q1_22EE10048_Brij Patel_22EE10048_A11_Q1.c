/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 11

Description- Recursive function to get sum of harmonic series
*/
#include<stdio.h>//INCLUDING PACKAGE
float sum(int n)
{
	float s=0;
	for(int i=1;i<=n;i++)
	{	
		if(n==1)s=1;//base conditon
		else
		s=sum(n-1)+(1/((float)n));//generating sum
	}
	return s;
}
int main()//MAIN METHOD
{
int n;
printf("Enter n: ");
scanf("%d",&n);//getting n from user
float s=sum(n);//getting sum of n
printf("Sum of harmonic series upto n: %0.3f\n",s);
return 0;
}
