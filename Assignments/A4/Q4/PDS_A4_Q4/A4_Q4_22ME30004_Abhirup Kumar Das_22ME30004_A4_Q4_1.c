#include<stdio.h>


int main()
{
int x,p,q;
printf("Enter any Number: \n");
scanf("%d", &x);
p=1;
q=1;
while(p<=x)
{
while(q<=p)
{ if(q%2==0)
printf("0");
else
printf("1");
q++;
}
p++;
q=1;
printf("\n");
}
return 0;
}


	

