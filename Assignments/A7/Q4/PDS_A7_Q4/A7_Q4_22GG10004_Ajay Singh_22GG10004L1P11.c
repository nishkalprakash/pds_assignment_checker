#include <stdio.h>
int main(){//declaration part-------------
intc,n,key,array[100];//input step--------------------
printf("Enter number ofelements: ");
scanf("%d",&n);printf("Enter %dintegers: ",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("Enter valuetofind: ");
scanf("%d",&key);//calculation step----------------
for(c=0; c<n; c++)
{if ( array[c]== key)
{
printf("%d found at position %d.\n", key, c);
break;
}}//output step---------------------
if(c==n)
printf("Not found! %disnotpresentinthelist.\n",key);
return 0;
}






