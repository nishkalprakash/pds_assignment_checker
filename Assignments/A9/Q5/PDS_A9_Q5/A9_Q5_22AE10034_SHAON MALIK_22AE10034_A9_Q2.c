/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :9
 Question No :2
 Description: to find number of days between two dates
*/
#include <stdio.h>

struct Date{
	int d;
	int m;
	int y;
};

struct Date ReadDate(){

	int x,y,z;
     printf("enter date in dd mm yyyy format");
     scanf(" %d %d %d ", &x,&y,&z);
     struct Date D;
     D.d=x;
     D.m=y;
     D.y=z;
     return D;
}

void PrintDate(struct Date x){
	printf( " %d / %d / %d \n", x.d , x.m , x.y);
}


void FindDays(struct Date X,struct Date Y){
   int d1,d2;
   d1=X.d;
   d2=Y.d;
   int i;
   for(i=2000;i<X.y;++i)
   {
	if (i%4==0)
	 d1+=366;
	 else
	 d1+=365
   }

   for(i=2000;i<Y.y;++i)
   {
	if (i%4==0)
	 d2+=366;
	 else
	 d2+=365
   }

  for(i=1;i<X.m;i++)
  {
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	d1+=31;
	else if(i==2)
	d1+=28;
	else
	d1+=30;
  }

  for(i=1;i<Y.m;i++)
  {
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	d2+=31;
	else if(i==2)
	d2+=28;
	else
	d2+=30;
  }
  int x=d1-d2;
  if(x<0)
  x*=-1;
  printf("Days: %d",x);
  
}

int main(){

	struct Date d1,d2;
	d1=ReadDate();
	d2=ReadDate();
	printf("X=");
	PrintDate(d1);
	printf("Y=");
	PrintDate(d2);
	void FindDays(d1,d2);


}