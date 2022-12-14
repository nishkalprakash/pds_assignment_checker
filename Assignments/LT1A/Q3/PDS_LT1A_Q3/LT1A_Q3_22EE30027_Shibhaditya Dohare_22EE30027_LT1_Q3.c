/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Lab test 1 (Set A), Q3
Discription : To find if the triange is acute, right or obtuse angled and if its a invalid triangle based on the input. 
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double x[3], y[3], L[3], m[3], C1, C2, C0; 
	int i=0;
	while(i<=2){
		printf("Type the coordinates of point %d\n", i+1); 
		scanf("%lf %lf", &x[i], &y[i]);					//Stores the values of x and y coordinates in separate arrays 			
		i++;}
	L[0]=sqrt(((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1])));		//Calculates the distance and square of distance between each pair of coordinates
	C0=((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1]));
	L[1]=sqrt(((x[2]-x[1])*(x[2]-x[1]))+((y[2]-y[1])*(y[2]-y[1])));
	C1=((x[2]-x[1])*(x[2]-x[1]))+((y[2]-y[1])*(y[2]-y[1]));
	L[2]=sqrt(((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2])));
	C2=((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2]));
	if((L[0]>=(L[1]+L[2]))||(L[1]>=(L[0]+L[2]))||(L[2]>=(L[1]+L[0])))	//checks if sum of two sides is not than the third side
			printf("Invalid");
	else if(((C0)==(C1+C2))||((C1)==(C2+C0))||((C2)==(C1+C0)))		//checks the type of triangle by pythagores theorem
			printf("Right angled");
	else if(((C0)>=(C1+C2))||((C1)>=(C2+C0))||((C2)>=(C1+C0)))
			printf("Obtuse angled");
	else if(((C0)<=(C1+C2))&&((C1)<=(C2+C0))&&((C2)<=(C1+C0)))
			printf("Acute angled");
	return 0;}
	
			
		
