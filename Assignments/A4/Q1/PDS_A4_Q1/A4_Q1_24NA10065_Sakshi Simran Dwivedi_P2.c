
#include <stdio.h>

int main ()

{
int a, i, n1, n2, x;

printf ("Enter a number: \n");
scanf ("%d", &a);



if (a<=0) {
	printf("N is invalid \n");
	return 0;
	}
	
if (a==1) {
	printf("1"); }
if (a==2) {
	printf("1, -1"); }
	
n1=1;
n2=-1;
a-=2;
printf("1 -1 ");
while (a>0) {
	x=n1-n2;
 	printf("%d ", x);
	n1=n2;
 	n2=x;
 	a--;
 	}
 }
