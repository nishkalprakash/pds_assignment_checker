/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 9
description: to find if two circles intersect each other or not 
*/ 




# include <stdio.h>
# include <math.h>


struct circle {
	int x;
	int y;
	float r;
} ;


//to find distance between centre of the circle 
float distance(struct circle C1, struct circle C2){
	float distance_sq = (C2.x - C1.x)*(C2.x - C1.x) + (C2.y - C1.y)*(C2.y - C1.y) ;
	return sqrt(distance_sq);
}


int main()
{
	struct circle  C_1 ,C_2 ;

	// to take value of the radii and centre from the keyboard  
	printf ("enter the x coordinate y coordinate of circles's centre and its radius\nx y r \n");
	scanf("%d %d %f", &C_1.x , &C_1.y , &C_1.r);
	scanf("%d %d %f", &C_2.x , &C_2.y , &C_2.r);       
	float C1C2 = distance(C_1 , C_2) ;

 	// findind the sum and difference of radii
	int sumradii = C_1.r + C_2.r;
	int diffradii = C_1.r -  C_2.r ;
	if(diffradii<0) diffradii*=-1 ; 

	//printing if they intersect 
	if((C1C2 <= sumradii) && (C1C2) >= diffradii ) printf(" \n _______ Circles Intersect_______\n\n ");
	else printf("\n _______ Circles Don’t Intersect_______\n\n");



	
	

	

	return 0;
}
