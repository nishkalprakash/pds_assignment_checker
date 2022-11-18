/*kethavath shivakumar
 21MI31013*/

#include<stdio.h>
int main()
{
float u,d,alpha,t;
printf("enter the initial velocity\n");
scanf("%f",&u);
printf("enter the acceleration of the body\n");
scanf("%f",&alpha);
printf("enter the time taken by the body\n");
scanf("%f",&t);
d=(u*t)+(alpha*(pow(t,2)))/2;
printf("the distance that the body travelled d=%f",d);
return 0;

}
