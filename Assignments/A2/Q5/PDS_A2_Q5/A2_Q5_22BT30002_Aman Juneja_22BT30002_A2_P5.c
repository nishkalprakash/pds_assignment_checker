#include<stdio.h>
#include<math.h> //including math header file

int main(){
	double mass=0.125, gravity=97800, Y; //decleration and initialization of variables
	int n;
	scanf("%lf %d",&Y,&n); //scanning values from user 

	double total_distance ;

	total_distance = Y*(1+(2.0/3)*(1-pow(4,-n))); //total distance travelled by ball

	printf("%.10lf",total_distance); //printing of answer on the screen.

	return 0;
}
