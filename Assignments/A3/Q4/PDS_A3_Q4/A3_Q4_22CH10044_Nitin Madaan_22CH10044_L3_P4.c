


/*
section 14
ROLL NO : 22CH10044
Name: Nitin
Assignment No:3
Description : Program to chk points
*/

#include<stdio.h>
int main()
{
     int a;

float P,Q,R,S,T,O,J,E,F,D,W;
printf("Enter Unit"); //a is unit
scanf("%d",&a);

 if(a<=100 && a>0)

 { P=a*0.5;  

 Q=P+P*0.2;

printf("Electricity bill is %f\n",Q);}

 else if(a>100 && a<=200)
 {   

   R=(a-100)*0.75;
   S=R+100*0.5;
   T= S*0.2+S;
   printf("Electricity bill is %f\n",T);
 }
 else if (a>200 && a<=300)
 {O=(a-200)*1.20;
 J=O+100*0.5+100*0.75;
 E=J+J*0.2;
 printf("Electricity bill is %f\n",E);}
 else if(a>300)
  { 
   F=(a-300)*1.50;
   D=F+100*0.5+100*0.75+100*1.20;
   W=D+D*0.2;
   printf("Electricity bill is %f\n",W);
  }


return 0;}
  
