/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */
   
#include<stdio.h>
#include<math.h>

int main(){
	int n, wd, m;
	float k ,f, z;
	
	printf("Enter the number of machines:");
	scanf("%d", &m);
	
	printf("\nEnter the day number (1-7):");
	scanf("%d", &wd);
	
	switch(wd){
		case 1:
			n = m;
			printf("\nNumber of manufactured cars = %d", n);
			break;
			
		case 2:
			z = (float) m;
			n = round(z + z/2 + z/4);
			printf("\nNumber of manufactured cars = %d", n);
			break;
		
		case 3:
			printf("\nEnter no. of machines under inspection:");
			scanf("%f", &k);
			z = (float) m;
			n = round((z-k)+(z-k)/2+(z-k)/4);
			printf("\nNumber of manufactured cars = %d", n);
			break;
			
		case 4:
			printf("\nEnter boosting fraction:");
			scanf("%f", &f);
			n = round(m + m*f);
			printf("\nNumber of manufactured cars = %d", n);
			break;
		
		case 5:
			printf("\nEnter boosting fraction:");
			scanf("%f", &f);
			n = round(m + m*f);
			printf("\nNumber of manufactured cars = %d", n);
			break;
			
		case 6:
			printf("\nEnter no. of machines under inspection:");
			scanf("%f", &k);
			z = (float) m;
			n = round((z-k)+(z-k)/2+(z-k)/4);
			printf("\nNumber of manufactured cars = %d", n);
			break;
			
		case 7:
			printf("\nEnter boosting fraction:");
			scanf("%f", &f);
			n = round(m + m*f);
			printf("\nNumber of manufactured cars = %d", n);
			break;
	}
	
	return 0;
}
			
			
			