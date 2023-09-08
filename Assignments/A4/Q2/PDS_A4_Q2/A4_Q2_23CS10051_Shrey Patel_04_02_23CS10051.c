//Shrey G Patel

//23CS10051

#include <stdio.h>
#include <stdlib.h>

int main()

{

int n=20,i=0,max=0,x;

for(;i<n;i++)

{ x=rand()%99+1;

printf("%d \n",x);

if(x>max)

{

max=x;}

}

printf("The max of the all is %d\n",max);

return 0;}
