/* 
Name : Krishna
Roll No. 22CY10028
Section : 14
*/

#include<stdio.h>	 // including libraries //
#include<math.h>
#include<stdlib.h>

int main ()

{
int x,y;		 // declaring the variables//
printf("Enter the number :");
scanf("%d",&x);			// getting input from the user on how many times the iteration should happen //

for (int i =1;i<=x;i++){
	for(int y = 1;y<=i; y++){	// using for loop to iterate the function and to print the output //
	printf("%d ",i);
	
}
	printf("\n");
}
return 0;
}

