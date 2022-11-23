/*section:-14
roll:-22AG30025
name:-NISHANT KUMAR
assignment:-3  */
// to solve arithmetic operation
#include<stdio.h>
int main () {

char a;
float b,c,d,e,f,g;

printf ("enter arithmetic operatio\n");
scanf ("%c",&a);
printf("enter first float\n");
scanf("%f",&b);
printf("enter second float\n");
scanf("%f",&c);


d=b+c;
e=b-c;
f=b*c;
g=b/c;

if(a=='+')
printf("output is %f\n",d);
 else if(a=='-')
printf("output is %f\n",e);
 else if(a=='*')
printf("output is %f\n",f);
 else if(a=='/')
printf("output is %f\n",g);
else 
{printf("wrong input"); }







return 0;
}
