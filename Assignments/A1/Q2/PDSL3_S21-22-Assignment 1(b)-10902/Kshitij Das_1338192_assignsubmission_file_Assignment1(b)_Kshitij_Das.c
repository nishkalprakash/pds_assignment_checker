/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Notepad++
   OS			: MS Windows 11
   */
   
#include <stdio.h>

int main(){
	int x, a, b, c;
	printf("Enter a 3-digit number:");
	scanf("%d", &x);
	a = x/100;
	b = (x - (x/100)*100)/10;
	c = x % 10;
	printf("\nReverse number = %d", c*100 + b*10 + a);
	return(0);
}