/* 	NAME: PRIYAM TARAFDER
	ROL NO.: 22EC10059
	ASSIGNMENT NO.: 7
	QUESTION NO.: 1
	to find the numbers that repeat a specific number of times in an array
*/
#include <stdio.h>
int main(){
	int a[100],n,m,k=0;
	scanf("%d",&n);	//takes inputs
	for(int t=0;t<n;t++)
		scanf("%d",&a[t]);	//takes inputs in arrays
	scanf("%d",&m);
	for(int t=0;t<n;t++){
		int c=0;
		for(int i=t;i<n;i++)
			if(a[t]==a[i]){	//checks for duplicates elements
				c++;
				k++;
			}
		if(c==m)
			printf("%d ",a[t]);
	}
	if(k>0)
		printf("appears %d times",m);
	else
		printf("NO number appears %d times",m);
}//end of main method
