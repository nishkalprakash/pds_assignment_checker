/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 4
desciption:
*/



#include<stdio.h>
#include<math.h>


int main()

{
int g,d,e,f;
double a,b,x,y,c,m;
printf("enter the value of a");
scanf("%le", &a);
printf("enter the value of b");
scanf("%le", &b);
printf("enter coefficient of x^0:");
scanf("%d", &g);
printf("enter coefficient of x^1:");
scanf("%d", &d);
printf("enter coefficient of x^2:");
scanf("%d", &e);
printf("enter coefficient of x^3:");
scanf("%d", &f);
x=f*pow(a,3)+e*pow(a,2)+(d*a)+g; //f(a)=x
y=f*pow(b,3)+e*pow(b,2)+(d*b)+g;// f(b)=y

if((x>0 &&y<0) ||(x<0 && y>0)) // because they have to be of opposite signs for a root to be present in between 
{
 for(c=a; c<=b; c++) // c is the root
  {
    m=f*pow(c,3)+e*pow(c,2)+(d*c)+g;// f(c)=m
    if(m=0)
     {
      printf("%le", c);
       
    }
  }
}


}



