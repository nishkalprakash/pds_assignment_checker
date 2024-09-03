#include <stdio.h>
int main (){
	#define N 100
	int number[N];
	printf ("Enter the size of the array :");
	int n,i,j=0;
	scanf ("%d",&n);
	printf ("Enter your preferred numbers :");
	for (i=0;i<n;i++){
		scanf ("%d",&number[i]);
		}
	if (number[i]<0){
		number[i]=number[j];
		j++;
	}
	printf ("Your rearranged list is :%d",number[i]);
	return 0;
}
	
