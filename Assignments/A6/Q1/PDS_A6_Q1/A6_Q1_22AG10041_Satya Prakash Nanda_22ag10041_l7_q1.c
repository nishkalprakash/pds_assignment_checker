/*
satya prakash nanda
sec 14
roll no 22AG10041
asignment 7
*/

#include<stdio.h>

int term(int k);
void print_term(int k);

int main(){

int k;
printf("enter the number of terms:");
scanf("%d", &k);

while(k<0){
printf("invalid input!\n");
printf("enter the number of terms:");
scanf("%d", &k);
}

print_term(k);
printf(" \n");

return 0;
}

int term(int k){
if(k==0){return 0;}
if(k==1){return 1;}
if(k==2){return 2;}

int tkm1=term(k-1);
int tkm2=term(k-2);
int tkm3=term(k-3);
int tk;
if(k>=3){
 tk=3*tkm1*tkm2-2*tkm2*tkm3+1;}
return tk;

}

void print_term(int k){
for(int i=0; i<k; i++){
		printf("%d\t", term(i));
			}

}
