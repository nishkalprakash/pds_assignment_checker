/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:3
discription : to calculate electricity bill
*/

#include<stdio.h>
int main()
{
float a; //electric unit
printf("give your unit input");
scanf("%f" , &a);
if (a<100) {
 printf("your bill is %f", (a*0.50)*1.2);
}
else if (100<a<200) {
printf("your bill is %f" , ((a-100)*0.75 + 50)*1.2);
}
else if (200<a<300) {
printf("your bill is %f" , ((a-200)*1.20 + 125)*1.2);
}
else { 
printf("your bill is %f" , ((a-300)*1.50 + 275)*1.2);
}
return 0;
}

