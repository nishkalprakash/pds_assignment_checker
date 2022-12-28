#include<stdio.h>
int print_term(int n)/*defining a function*/
{
int k,pre,prev,previ;
if(n==0)/*terminating condition*/
{
return 0;
}
if(n==1)/*terminating condition*/
{
return 1;
}
if(n==2)/*terminating condition*/
{
return 2;
}
k = 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
/*reoccursion is called in this statement*/
return k;
}
int main()
{
int k,i,c;
printf("enter the no");
scanf("%d",&k);
if(k>=0)
{
for(i=0;i<k;i++)/*loop is used so that it could perform the action on all the no till k*/
{
c = print_term(i);/*function is called*/
printf("%d,",c);/*value are printed*/
}
}
else
{
printf("invalid");/*if k is negative than it will print negative*/
}
return 0;
}


