#include<stdio.h>
#include<math.h>

int main()
 {
float a1,a2,a3;
float b1,b2,b3;
float ab12,ab23,ab31;
float cosa,cosb,cosc;
int flag;
printf("eneter coordinates of 1st point:\n");
scanf("%f%f",&a1,&b1);

printf("eneter coordinates of 2nd point:\n");
scanf("%f%f",&a2,&b2);

printf("eneter coordinates of 3rd point:\n");                          
scanf("%f%f",&a3,&b3);
ab12=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));                           //computes lenghts of sides
ab23=sqrt((a3-a2)*(a3-a2)+(b3-b2)*(b3-b2));
ab31=sqrt((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));

if((ab12+ab23)>(ab31)&&(ab23+ab31)>(ab12)&&(ab31+ab12)>(ab23)){       //checks for triangle's existance
   printf("triangle exists\n");
   flag=1;}
else{
   printf("invalid coordinates");}

cosa=((ab31*ab31+ab12*ab12-ab23*ab23)/2*(ab12*ab31));                 //calculates values of cosines to determine the type.(obtues/acute..)
cosb=((ab23*ab23+ab12*ab12-ab31*ab31)/2*(ab12*ab23));
cosc=((ab31*ab31+ab23*ab23-ab12*ab12)/2*(ab23*ab31));

if(flag==1&&((cosa<0&&cosb>0&&cosc>0)||(cosb<0&&cosa>0&&cosc>0)||(cosc<0&&cosa>0&&cosb>0))){
 printf("obtuse");
}
if(flag==1&&(cosa==0||cosb==0||cosc==0)){                            //condition for right angled triangle
printf("right angled");}

return 0;    
}
