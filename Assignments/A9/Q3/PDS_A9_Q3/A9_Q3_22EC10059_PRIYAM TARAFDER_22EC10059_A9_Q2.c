/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 9
QUESTION NO. : 2
DESCRIPTION: displays area of a rectangle
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	double x,y;
} rectangle;
int main(){
	rectangle a,b;
	scanf("%lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y);
	printf("Rect: (%lf %lf) (%lf %lf)",a.x,a.y,b.x,b.y);
	printf("\n Area: ");
	double area=(a.x-b.x)*(a.y-b.y);
	if(area<0)
		area*=-1;
	printf("%lf",area);
}