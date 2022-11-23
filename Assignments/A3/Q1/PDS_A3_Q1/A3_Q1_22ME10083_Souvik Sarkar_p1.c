/* section 14
roll no. 22ME10083
assignment 3*/
#include<stdio.h>
#include<math.h>



int main ()
{

	int HH,MM,SS;
	printf("ENTTER THE SECOND ,MINUTE,HOUR  WITH A SPACE BETWEEN THEM\n");
	scanf("%d %d %d",&SS,&MM,&HH);
	if((0<HH<24)&&(0<MM<60)&&(0<SS<60)){

		printf("valid time--- %d:%d:%d",HH,MM,SS);
	     
	             
                  
            }
	else 
	  printf("invalid");
   return 0;

	          

}
