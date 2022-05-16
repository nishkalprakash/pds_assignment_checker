/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */
   
#include<stdio.h>

int main(){
	
	char w;
	float weight, base, gst, total;
	
	
	
	printf("Enter the type of wood (n for natural wood, s for synthetic wood):");
	scanf("%c", &w);
	switch(w){
		case 'n':
		{
			printf("\nEnter the weight of wood (in Kg.) you want:");
			scanf("%f", &weight);
			base = weight * 1100;
			gst = base * 0.2;
			total = base + gst;
			printf("\nbase = %.2f \nGST = %.2f \nTotal price = %.2f", base, gst, total);
		}
		case 's':
		{
			printf("\nEnter the weight of wood (in Kg.) you want:");
			scanf("%f", &weight);
			base = weight * 780;
			gst = base * 0.15;
			total = base + gst;
			printf("\nbase = %.2f \nGST = %.2f \nTotal price = %.2f", base, gst, total);
		}
	}
	return 0;
}