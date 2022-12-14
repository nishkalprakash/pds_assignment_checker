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
int i,a,b,c,d,e,f,y,p,q,r,s,t,u,g;
printf("Enter the number:");	//getting input from the user//
scanf("%d",&i);
if(i>0){			// testing for invalid input //
	for(int x =1; x<=i;x++){
	g=x;			// separating the numbers into its individual digits and storing them into individual variables//
	a=g%10;
	g=g/10;
	b=g%10;
	g=g/10;
	c=g%10;
	g=g/10;
	d=g%10;
	g=g/10;
	e=g%10;
	g=g/10;
	f=g%10;
	
	if(a!=0) {p=1;}
		
	if(b!=0) {q=1;}
	if(c!=0) {r=1;}
	if(d!=0) {s=1;}
	if(e!=0) {t=1;}
	if(f!=0) {u=1;}
		
	y = p + q + r + s + t+u ;
	if(x == (a^y + b^y + c^y + d^y + e^y + f^y) ){			// checking for armstrong number//
	printf("%d ",x);
	}	

}


}
else printf("Invalid Input");
return 0;
}
