/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 3
Discription : To calcute electric bill
*/
#include<stdio.h>
int main()
{
	float units;
	scanf("%f", &units);
	if (100>=units){
		printf("your bill is Rs 60");
	}
		else if((units>100)&&(units<=200)){
			printf("Your bill is Rs %f", (units-100)*0.9+60);
		}
			else if((units>200)&&(units<=300)){
			printf("Your bill is Rs %f", ((units-200)*1.44)+90+60);
			}
				else if(units>300){
				printf("Your bill is Rs %f", (units-300)*1.8+144+90+60);
				}
	return 0;
}
