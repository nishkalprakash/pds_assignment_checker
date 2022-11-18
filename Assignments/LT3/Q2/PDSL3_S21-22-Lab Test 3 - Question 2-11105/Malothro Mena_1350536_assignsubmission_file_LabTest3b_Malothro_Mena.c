#include<math.h>//important header files
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 17
typedef struct node
  {
int coeff;
struct node *next;
  }node;
node *  init();
void read(node *h1);
void print(node *h1);
node * multiply(node *h1,node *h2);
/*Polynomial is stored in a linked list, ith node  gives coefficient of x^i .
  a polynomial 3x^2 + 12x^4 will be represented as (0,0,3,0,12,0,0,….)
*/
void main()
{
node *h1=NULL,*h2=NULL,*h3=NULL;
int option;
do
{
printf("\n 1 to create 1st polynomial");
printf("\n 2 to create 2nd polynomial");
printf("\n 4 to Multiply polynomials");
printf("\n 5 to Quit\n");
printf("\n Enter your choice :");
scanf("%d",&option);
switch(option)
{
case 1:h1=init();read(h1);break;
case 2:h2=init();read(h2);break;
case 4:h3=multiply(h1,h2);
      printf("1st polynomial");
      print(h1);
      printf("2nd polynomial");
      print(h2);
      printf("n product=");
      print(h3);
      break;
}
}while(option!=5);
}
void  read(node *h)
{
int n,i,j,power,coeff;
node *p;
p=init();
printf("Enter number of terms :");
scanf("%d",&n);
/* read n terms */
for (i=0;i<n;i++)
{       printf("enter a term(power  coeff.)");//enter the term in this form -for example 2 1
scanf("%d%d",&power,&coeff);
for(p=h,j=0;j<power;j++)
   p=p->next;
p->coeff=coeff;
}
}
void print(node *p)
{
   int i;
for(i=0;p!=NULL;i++,p=p->next)
if(p->coeff!=0)
printf("%dX^%d ",p->coeff,i);
}
node * multiply(node *h1, node *h2)
{
node *h3,*p,*q,*r;
int i,j,k,coeff,power;
h3=init();
for(p=h1,i=0;p!=NULL;p=p->next,i++)
for(q=h2,j=0;q!=NULL;q=q->next,j++)
   {
coeff=p->coeff * q->coeff;
power=i+j;
for(r=h3, k=0;k<power; k ++)
r=r->next;
r->coeff=r->coeff+coeff;
    }
  return(h3);
}
node * init()
{
    int i;
    node *h=NULL,*p;
    for(i=0;i<MAX;i++)
{
p=(node*)malloc(sizeof(node));
p->next=h;
p->coeff=0;
h=p;
}
  return(h);
}
