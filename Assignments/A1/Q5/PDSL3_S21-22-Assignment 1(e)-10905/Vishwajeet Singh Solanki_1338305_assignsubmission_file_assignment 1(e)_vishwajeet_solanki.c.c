/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:1(e)
*/
#include<stdio.h>

int main(){
char w,n,s;
float k,b,GST,t;
printf("Type of wood:\n");
scanf("%c",&w);

printf("Weight of wood:\n");
scanf("%f",&k);
if(w==n){
        b=1100*k;
        GST=0.2*b;
        t=GST+b;

printf("base price of wood:%f\n",b);
printf("GST of wood:%f\n",GST);
printf("Total price of wood:%f\n",t);
}
else if(w==s){
        b=780*k;
        GST=0.15*b;
        t=GST+b;

printf("base price of wood:%f\n",b);
printf("GST of wood:%f\n",GST);
printf("Total price of wood:%f\n",t);
}
return 0;
}

