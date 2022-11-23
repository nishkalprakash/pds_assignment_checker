/*
SECTION 14
ROLL NO. : 22HS10010
Name: Archit Bharani
Assignment No. : 3
Description:To check electricity bill
*/
#include<stdio.h>
int main()
{
float a;
printf("Enter no. of electric units used ");
scanf("%f",&a);
if (a<=100){
printf("Bill is %f",1.2*0.5*a);
}else if (a>100 && a<=200){
 printf("Bill is %f", 1.2*(50+(0.75*(a-100))));
}else if (a>200 && a<=300){
printf("Bill is %f", 1.2*(125+(1.2*(a-200))));
}else if (a>300){
printf("Bill is %f", 1.2*(245+(1.5*(a-300))));
//20% additional surcharge is added to bill so 1.2 is  multiplied
}
return 0;
}
