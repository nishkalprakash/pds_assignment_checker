// Name: Bhoomik Modi
// Roll_No.: 23PH10013
#include<stdio.h>
int main(){// Beginning of the main function
	int a,b;
	printf("Enter the bottom-left coordinate: ");
        scanf("%d%d",&a,&b);
	int c,d;
	printf("Enter the top-right coordinate: ");
        scanf("%d%d",&c,&d);
	if (c-a<=0||d-b<=0){
		printf("Ill formed rectangle\n");
		return 0;// For exiting the main function
		}
	else {
		int x,y;
		printf("Enter the x and y coordinate of the point: ");
		scanf("%d%d",&x,&y);
		if (x==a && y!=b && y!=d)
			printf("It lies on left-side of rectangle\n");
		else if (x==c && y!=d && y!=b)
			printf("It lies on Right-side of rectangle\n");
		else if (x!=c && x!=a && y==d)
			printf("It lies on Top-side of rectangle\n");
		else if (x!=a && x!=c && y==b)
			printf("It lies on Bottom-side of rectangle\n");
		else if (x==a && y==b)
			printf("It lies on the bottom-left corner of rectangle\n");
		else if (x==c && y==b)
			printf("It lies on the bottom-right corner of rectangle\n");
		else if (x==c && y==d)
			printf("It lies on the Top-right corner of rectangle\n");
		else if (x==a && y==d)
			printf("It lies on the Top-left corner of rectangle\n");
                else if ((x-a>0&&y-b>0)&&(c-x>0&&d-y>0))
			printf("It lies Inside the rectangle\n");
		else 
			printf("It lies outside the rectangle\n");
}
return 0;
}
