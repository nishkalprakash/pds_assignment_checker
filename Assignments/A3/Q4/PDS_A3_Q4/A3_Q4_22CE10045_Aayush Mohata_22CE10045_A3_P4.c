/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To calculate electricity bill 

*/
#include<stdio.h>
int main()
{
	float units;
	scanf("%f",&units);
	if((100>units)&&(units>0))
	{
		printf("Your bill is 60");
	}
	else 
		if((units>100)&&(200>units))
		{
			printf("Your bill is %f",(units-100)*0.9+60);
		}
		else
			if((units>=200)&&(300>units))
			{
				printf("Your bill is %f",((units-200)*1.2+125)*1.2);
			}
			else
				if(units>=300)
					{
					printf("Your bill is %f",((units-300)*1.5+245)*1.2);
					}
											
	return 0;
}
