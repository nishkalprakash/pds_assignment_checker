#include<stdio.h>


int main()
{
int in,p,q;
printf("Enter any Number: ");
scanf("%d", &in);
a=1;
b=1;
while(a<=in)
{
while(q<=p)
{ if(q%2==0)
printf("0");
else
printf("1");
q++;
}
p++;
printf("\n");
}
return 0;
}


	

