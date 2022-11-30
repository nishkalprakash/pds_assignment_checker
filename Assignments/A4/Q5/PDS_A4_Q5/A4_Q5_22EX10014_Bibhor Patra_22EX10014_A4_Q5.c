/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:4
Description:
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int w,x,y,z;// declaration of variables
	printf("please enter coefficient of x^0");
	scanf("%d",&z);
	printf("please enter coefficient of x^1");
	scanf("%d",&y);
	printf("please enter coefficient of x^2");
	scanf("%d",&x);
	printf("please enter coefficient of x^3");
	scanf("%d",&w);
	double a,b;
	printf("please enter value of a and b");
	scanf("%lf %lf",&a,&b);
	double pofa,pofb,c,pofc; //declaration of variables
	pofa= w*(a*a*a) + x*(a*a) + y*(a) + z;
	pofb= w*(b*b*b) + x*(b*b) + y*(b) + z;
	pofc= w*(c*c*c) + x*(c*c) + y*(c) + z;//
	pofc=123;
	while(abs(pofc)>0.001){
		c= (2*a*pofa) - (b*pofa) - (a*pofb);
	    pofc= w*(c*c*c) + x*(c*c) + y*(c) + z;
	    if(abs(pofc>=0.001)){
	    	printf("%lf",c);

	    }
	    else{
	    	if((pofa*pofc)>0){a=c;}
	    	else{b=c;}
	    }// printing of results
	    }
	    

return 0;
}

