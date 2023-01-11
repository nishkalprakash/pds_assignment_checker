/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 8
QUESTION NO.: 1
DESCRIPTION: displays matrix array in coloumn major order
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *matrix;
	int n;
	printf("Number of elements in one row= ");
	scanf("%d",&n);
	matrix=(int *)malloc(n*n*sizeof(int));
	for(int t=0;t<n*n;t++)
		scanf("%d",(matrix+(t/n)*n+(t%n)));
	printf("Coloumn Major Order: ");
	for(int t=0;t<n*n;t++)
		printf("%d ",*(matrix+(t/n)+(t%n)*n));
}
