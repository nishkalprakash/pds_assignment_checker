/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Test-1 Set-A
 Question No : 2
 Description :program to check type of triangle
*/
 #include <stdio.h>
 #include <math.h>

double length(int x1,int y1,int x2,int y2)
{
	return sqrt( pow((x1-x2),2) + pow((y1-y2),2) );//returns length of line segment between coordinate (x1,y1) and (x2,y2)
}

double max(double a,double b,double c)
{
	double max;
	if(a>b) //max stores greater of a and b
		max=a;
	else
		max=b;

	if(c>max) //if c is greater than greater of a and b 
		max=c;

	return max;
}

int main()
{
	int a,b,c,d,e,f;//declaring variables
	double l1,l2,l3;
	printf("enter coordinate of first point :" );
	scanf("%d%d",&a,&b);
	printf("enter coordinate of second point :" );
	scanf("%d%d",&c,&d);
	printf("enter coordinate of third point :" );
	scanf("%d%d",&e,&f);
	l1=length(a,b,c,d);//length of side 1
	l2=length(c,d,e,f);//length of side 2
	l3=length(e,f,a,b);//length of side 3
      
	double l_max=max(l1,l2,l3);
	if( (2*l_max)>=(l1+l2+l3))//l_max is greater than sum of two other sides
		printf("invalid");
	else
	{
		double sum_of_square=pow(l1,2)+pow(l2,2)+pow(l3,2);//sum of squares of three sides
		double c_sq=pow(l_max,2);//square of largest side 
		if(sum_of_square>2*c_sq) //checking conditions 
			printf("Acute angled");
		if(sum_of_square<2*c_sq)
			printf("Obtuse angled");
		if(sum_of_square==2*c_sq)) // a^2 + b^2 + (c^2) = c^2 + (c^2)
			printf("Right angled");
	}
}


