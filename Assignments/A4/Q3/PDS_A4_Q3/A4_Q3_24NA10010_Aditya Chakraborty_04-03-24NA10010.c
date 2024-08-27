//This program is to make a numero-pyramid of a given height
//Code Creator: Aditya Chakraborty
//Roll No: 24NA10010
#include <stdio.h>
int main (){
	int x,i,j;
	printf ("Enter the number of rows:");
	scanf ("%d",&x);
	for (i=0;i<x;i++){
		for (j=0;j<2*x+1;j++){
			if (j<=i){
				printf ("%d",i+j+1);
			} else {
				printf ("%d",(2*(i+j+1)-1)-(j-i));
			}
		}
	}
	return 0;
}
