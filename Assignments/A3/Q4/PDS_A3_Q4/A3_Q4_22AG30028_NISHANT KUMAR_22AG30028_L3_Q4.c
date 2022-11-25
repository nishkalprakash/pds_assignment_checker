/*section:-14
roll:-22AG30025
name:-NISHANT KUMAR
assignment:-3  */
// to calculate energy bill

#include<stdio.h>
int main () {

float unit,bp,tp,up;
printf("enter your used unit");
scanf("%f",&unit);

bp=unit*up;
tp=(bp*0.2)+bp;

if(unit<=100)
printf("your total bill is::%f",(unit*0.50)*0.2+(unit*0.50));

else if(unit<=200)
printf("your total bill is::%f",(unit*0.75)*0.2+(unit*0.75));

else if(unit<=300)
printf("your total bill is::%f",(unit*1.20)*0.2+(unit*1.20));

else if(unit>=300)
printf("your total bill is::%f",(unit*1.5)*0.2+(unit*1.5));

else

return 0;
}
