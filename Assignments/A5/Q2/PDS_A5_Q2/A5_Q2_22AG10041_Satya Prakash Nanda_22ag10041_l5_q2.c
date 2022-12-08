/*
satya prakash nanda
section 14
22ag10041
question2
*/


#include<stdio.h>

void coprime(int a, int b);

int main(){
int num[5];
printf("enter any five nnumbers:");
for(int i=0; i<5; i++){
	scanf("%d", &num[i]);
}
printf("numbers are %d %d %d %d %d", num[0], num[1], num[2], num[3], num[4]);
return 0;
}


