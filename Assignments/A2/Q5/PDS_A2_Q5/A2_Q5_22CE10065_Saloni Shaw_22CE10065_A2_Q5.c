//program to calculate distance travelled

#include<stdio.h>
#include<math.h>
int main()
{
int n,y;

float g;

g=9.78;

printf("enter the height");

scanf("%d",&y);//to read the entered height by the user

printf("enter number of time ball touches the floor");

scanf("%d",&n);

double d;

d=pow((2*g*y),0.5);

float h=y;

if(n==1)//case 1

{

printf("distance travelled= %d",y);

}

else{//other cases

for(int i=2;i<=n;i++)

{

d=d/2;

h=h+(2*((d*d)/(2*g)));

}

printf("distance travelled= %lf", h);// to print the total distance covered 

}

return 0;

}
