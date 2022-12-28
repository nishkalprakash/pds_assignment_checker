/*SECTION:14
  name:harsh
  roll no. 22MT30016
  assignment no :6
  question no.1
  description:series */

#include<stdio.h>
int print_term(int n)
{
if (n==0)
 return 0;
else if (n==1)
return 1;
else if(n==2)
return 2;
else
return(3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);
}
int main()
{
int i;
int k;
printf("enter k:");
scanf("%d",&k);
if(k<0)
{
printf("invalid input\n");
}
else
{

for (i=0;i<k;i++)

  printf("%d\n",print_term(i));
}

 return 0;
}
