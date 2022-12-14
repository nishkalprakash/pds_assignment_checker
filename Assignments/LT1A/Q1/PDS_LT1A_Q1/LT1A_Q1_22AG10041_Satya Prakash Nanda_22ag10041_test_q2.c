/*
satya prakash nanda
22ag10041
section 14
lab test 1
set a
ques 2
*/
#include<stdio.h>
int perfectnum(int x);
int main(){
int n;
scanf("%d", &n);

perfectnum(n);


return 0;
}
int perfectnum(int x){
int sum=0;
for(int i=1; i<=x; i++){
		if(x%i==0){
		sum= sum +i;
			}				
	}
if(x==sum){
	printf("%d", x);
}
else{printf("no");}
}

