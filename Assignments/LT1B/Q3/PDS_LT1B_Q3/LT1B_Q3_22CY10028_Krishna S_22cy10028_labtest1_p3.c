/* 
Name : Krishna
Roll No. 22CY10028
Section : 14
*/

#include<stdio.h>	//including libraries//
#include<math.h>
#include<stdlib.h>

int main ()

{
int x[100],y,p,a;
printf("Enter The Numbers :");		//getting input from the user//
scanf("%d",&p);
printf("\n Largest Number: %d", p);
printf(" \n Second largest number: Value not yet entered \n");
p = x[0];
printf("%d",p);
if(p>0){
for(int i =1;i<=100;i++){	// using for loop inorder to find the largest number//
	scanf("%d",&y);
	if(y<=0) return 0;
	y= x[i];
	a= x[i-1];
	if(y>a){
	printf("Largest Number: %d",y);
	}
	//printf("Second Largest Number:");
	
	
}

}


return 0;
}
