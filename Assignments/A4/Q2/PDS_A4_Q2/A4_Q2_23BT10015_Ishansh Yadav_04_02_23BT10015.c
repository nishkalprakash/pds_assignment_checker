//Name - Ishansh Yadav
//Roll No. - 23BT10015

#include<stdio.h>
#include<stdlib.h>

int main()
{ int i, num, max=0;
  for(i=1;i<=20; i++)
  {printf("%d\n", num=rand() % 100);
  if(num > max) max = num;
  i++;}
  printf("max=%d\n", max);
return 0;
}