// Name: Bhoomik Modi
// roll_No.: 23PH10013
#include <stdio.h>
int main(){// Beginning of main function
	int p1,p2;//p1 for x-coordinate and p2 for y-coordinate
	printf("Enter x and y coordinate of the poiint\n");
	scanf("%d%d",&p1,&p2);
	if (p1==0&&p2==0){
		printf("The point lies on both x and y axis i.e it is at origin\n");
		}
	else if (p1==0&&p2!=0){
		printf("The point lies on the y-axis\n");
		}
	else if (p2==0&&p1!=0){
		printf("The point lies on the x-axis\n");
		}
	else if (p1>0&&p2>0){
		printf("The point lies in the first quadrant\n");
		}
	else if (p1<0&&p2>0){
		printf("The point lies in the second quadrant\n");
		}
	else if (p1<0&&p2<0){
		printf("The point lies in the third quadrant\n");
		}
	else if (p1>0&&p2<0){
		printf("The point lies in the fourth quadrant\n");
		}
	else {
		printf("wrong data entered");
		}
	return 0;
	}

