/* section 14
 roll no. 22ME10083
 assignment 3*/ 






#include<stdio.h>

void main()
{
	float a,b;
	int i;
	printf("ENTER TWO NO.\n");
	scanf("%f %f",&a,&b);
	printf("1 is for +\n2 is for -\n3 is for *\n4 is for /\n");
	scanf("%d",&i);
	switch(i){
          case 1: 
		printf("ADDITION OF THE DIGITS IS %f",(a+b));
		break;
	  case 2:
		printf("SUBLIMITION OF THE DIGITS %f",(a-b));
		break;

	  case 3: 
		printf("MULTIPLICATION OF THE DIGITS IS %f",(a*b));
		break;
	  case 4: 
		printf("DIVIDE OF THE DIGITS IS %f",(a/b));
		break;
	  default:
	        printf("none of the cases match");
		break;
        }

}
