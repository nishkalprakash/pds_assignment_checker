/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SECTION: 14
ASSIGNMENT NO.: 11
QUESTION NO.: 1
DESCRIPTION: display sum recursively
*/

#include <stdio.h>
#include <stdlib.h>
float sum(int t){
	if(t==1|| t==0)
		return 1.0/1;
	return 1.0/t+sum(t-1);
}
int main(){
	int n;
	scanf("%d",&n);
	float s=sum(n);
	printf("The sum is: %f",s);
}