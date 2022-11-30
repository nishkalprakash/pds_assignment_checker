/*
section 14
roll no 22CH30005
ASSIGNMENT 4
*/

#include<stdio.h>

int main(){
int num,n;
printf("enter a number{0-9999999999}");
scanf("%d",&n);

printf("%d",n);

while(n>0){
	int i;
	i=n%10;
	if(i==0){printf("zero");}
	else if(i==1){printf("one");}
	else if(i==2){printf("two");}
	else if(i==3){printf("three");}
	else if(i==4){printf("four");}
	else if(i==5){printf("five");}
	else if(i==6){printf("six");}
	else if(i==7){printf("seven");}
	else if(i==8){printf("eight");}
	else if(i==9){printf("nine");}
	n=n/10;
}
return 0;
}
