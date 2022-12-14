/*TEST 1, SET A
CODE BY: ABHIRUP KUMAR DAS, 22ME30004*/

#include<stdio.h>

int main(){
int N;
printf("Enter the number: ");//Input of number by User
scanf("%d", &N);
int factor;
int i=2;
if(N<0 || N ==1){ //Checking validity of the number
printf("Invalid \n");
}
else{
N = (N < 0) ? -N : N;//Finding Factors of the number					
	for (int i = 1; i <= N / 2; i++)
		(N % i) ?: printf("%d ", i);
}
int sf;
sf=sf+i;
if(sf==N){
printf("Perfect Number");
}

return 0;
}

