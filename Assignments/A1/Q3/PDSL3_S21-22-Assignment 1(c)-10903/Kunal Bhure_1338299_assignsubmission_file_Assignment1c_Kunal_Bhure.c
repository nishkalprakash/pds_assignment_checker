#include<stdio.h>
int main()
{
int d,n, day;
float f,m,k;

printf("Enter number of machines:");
scanf("%f",&m);
printf("Enter day number:");
scanf("%d",&d);
day= d;
switch(day){
case 1:printf("Number of manufactured cars:%f\n",m);
        break;
case 2:printf("Number of manufactured cars:%.0f\n",(m+m/2+m/4));
        break;
case 3:
case 6:printf("Enter number of machines under inspection:");
       scanf("%f",&k);
       printf("Number of manufactured cars:%.0f\n",m-k + (m-k)/2 + (m-k)/4);
case 4:
case 5:
case 7:printf("Enter boosting fraction:");
       scanf("%f",&f);
       printf("Number of manufactured cars:%.0f\n", m+m*f);

}
}
