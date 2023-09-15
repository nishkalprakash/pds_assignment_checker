#include<stdio.h>
#include<stdlib.h>
int main()
{

int i,no,max=0;

for (i=0;i<20;i++) {
  no=rand ()%100 +1;
  printf("Number: %d\n",no);

  if (max<no)
    max=no;

}
printf("Enter the maximum no. : %d", max);
return 0;

}
