/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
int d;
float m,k,f;
int n;
printf("Enter the day number");
scanf("%d",&d);
switch(d){
       case 1:
              printf("Enter the number of machines");
              scanf("%f",&m);
              n=m;
              printf("The number of manufactured cars is %d",n);
              break;
       case 2:
              printf("Enter the number of machines");
              scanf("%f",&m);
              n=round((m+(m/2)+(m/4)));
              printf("The number of manufactured cars is %d",n);
              break;
       case 3:
       case 6:
              printf("Enter the number of machines");
              scanf("%f",&m);
              printf("Enter the number of machines kept under inspection");
              scanf("%f",&k);
              n=round((m-k)+((m-k)/2)+((m-k)/4));
              printf("The number of manufactured cars is %d",n);
              break;
       case 4:
       case 5:
       case 7:
              printf("Enter the number of machines");
              scanf("%f",&m);
              printf("Enter the boosting fraction(should be a number between 0 and 1)");
              scanf("%f",&f);
              n=round((m*(1+f)));
              printf("The number of cars manufactured is %d",n);
              break;
}
return 0;
}
