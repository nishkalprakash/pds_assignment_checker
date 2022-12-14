#include<stdio.h>
#include<math.h>

//The triangle problem 
int main(){
	int x1, x2, x3, y1, y2, y3;
	//taking input of the three sides of the triangle
	printf("Enter the coordinates of the first point");
	scanf("%d %d", &x1, &y1);
	printf("Enter the coordinates of the second point");
	scanf("%d %d", &x2, &y2);
	printf("Enter the coordinates of the third point");
	scanf("%d %d", &x3, &y3);
	//initialising integers to store the length of the sides 

	int p1, p2, p3;
	double l1, l2, l3;


	p1=(powf((x1-x2), 2)+powf((y1-y2), 2));
	p2=(powf((x2-x3), 2)+powf((y2-y3), 2));
	p3=(powf((x3-x1), 2)+powf((y3-y1), 2));

	//printf("%d %d %d", p1, p2, p3); testing the values

	l1=powf(p1, 0.5);
	l2=powf(p2, 0.5);
	l3=powf(p3, 0.5);


	//printf("%lf %lf %lf", l1, l2, l3); testing the values

	//initialising integers to store the slope of the lines

	double m1, m2, m3;
	if((x2-x1)!=0){
	m1=((y2-y1)/(x2-x1));
	}
	if((x3-x2)!=0){
	m2=((y3-y2)/(x3-x2));
	 }
	 if((x1-x3)!=0){
	m3=((y1-y3)/(x1-x3));
	 }

	while(1){
		if(((l1+l2)<=l3) || ((l2+l3)<=l1)|| ((l1+l3)<=l2)){
			printf("Invalid values");
			//printf("%lf %lf %lf", l1, l2, l3);
			break;
		}
		else{
			//printf("Good");//was testing the loop
			double k1, k2, k3;
			k1=sqrt(powf(l1, 2)+powf(l2, 2));
			k2=sqrt(powf(l2, 2)+powf(l3, 2));
			k3=sqrt(powf(l3, 2)+powf(l1, 2));
			if((k1==l3)||(k2==l1)||(k3==l2)){
				printf("This is a right angled triangle");
				break;
			}
			/*else if({
				printf("This is an obtuse triangle");
				break;
			}*/
			else
				printf("This is not a right angled triangle");
				break;
		}
	}



	return 0;
}
