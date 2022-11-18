/*This program is to find distance travelled*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  float a,u,alpha,t,d;
  printf("Enter the value from where on X-axis the particle starts :");
  scanf("%f",&a);
  printf("\n");
  printf("Enter the value of initial velocity :");
  scanf("%f",&u);
  printf("\n");
  printf("Enter the value of acceleration alpha :");
  scanf("%f",&alpha);
  printf("\n");
  printf("Enter the value of travelling time in seconds :");
  scanf("%f",&t);
  printf("\n");
  d=a+u*t+(alpha*t*t)/2;
  printf("distance travelled is : %f",&d);
}
