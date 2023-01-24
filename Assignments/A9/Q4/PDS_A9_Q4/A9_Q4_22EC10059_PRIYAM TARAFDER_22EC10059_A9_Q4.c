/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 9
QUESTION NO. : 3
DESCRIPTION: computes net salary of employee
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char ch[100];
	int d;
	float w; 
} employee;
void netPay(employee a){
	printf("\nName: %s\n",a.ch);
	float hra,ta,bp=a.w*a.d;
	if(bp<1000.0)
		hra=0.12*bp;
	else
		hra=0.2*bp;
	if(a.d>19)
		ta=0.1*bp;
	else
		ta=0;
	float net=bp+hra+ta;
	printf("Net pay: %f\n",net);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int t=1;t<=n;t++){
		employee a;
		printf("Name wage days\n\n");
		scanf("%s %f %d",a.ch,&a.w,&a.d);
		netPay(a);
	}
}