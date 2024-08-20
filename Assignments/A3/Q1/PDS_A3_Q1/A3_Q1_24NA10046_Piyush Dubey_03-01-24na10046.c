#include<stdio.h>
//program to check if the date is valid or not 
int main(){
	int dd,mm,yyyy,flag=0;//flag is used as a mark for Valid date 
	scanf("%d",&dd);
	scanf("%d",&mm);
	scanf("%d",&yyyy);
	if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
		if(dd>0&&dd<=31){
		flag=1;
		}	
	}
	//2nd month is written in last 
	else if (mm==4||mm==6||mm==9||mm==11){
		if(dd>0&&dd<=30){
		flag=1;
		}	
	}
	else if (mm==2)
	{
		if(yyyy%4==0){
			if(dd>0&&dd<=29){
		flag=1;
		}
		}
		else if(dd>0&&dd<=28){
		flag=1;
		}
		
		
	}
	if (flag==1)
	printf("Valid Date\n"); 
	else printf("Invalid Date\n");
	return 0;
}
