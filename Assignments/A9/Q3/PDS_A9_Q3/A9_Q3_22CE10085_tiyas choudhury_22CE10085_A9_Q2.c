#include<stdio.h>
typedef struct 
{int x1;
	int y1;
	int x2;
	int y2;
	
}Area;
int  AreaRec(int,int,int,int);
int main()
{
	Area a;
	printf("Enter x1\n");//Taking input from user
	scanf("%d",&a.x1);
	printf("Enter y1\n");
	scanf("%d",&a.y1);
	printf("Enter x2\n");
	scanf("%d",&a.x2);
	printf("Enter y2\n");
	scanf("%d",&a.y2);
	printf("Area:%d",AreaRec(a.x1,a.y1,a.x2,a.y2));//Calling  Function
		return 0;
}
int AreaRec(int x1,int y1,int x2,int y2)//Passing Values
{
	int Area1;
	Area1=(y2-y1)*(x2-x1);
	return Area1;
}