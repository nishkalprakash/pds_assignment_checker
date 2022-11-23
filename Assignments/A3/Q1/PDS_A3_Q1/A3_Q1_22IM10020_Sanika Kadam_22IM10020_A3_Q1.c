#include<stdio.h>
int main()
{
  int HH, MM, SS;
  scanf("%d %d %d",&HH,&MM,&SS);
  if((HH<=23) && (MM<=59) && (SS<=59))
     {
        printf("Valid time\n");
        printf("%d:%d:%d\n",HH,MM,SS);
     }
  else
     printf("Invalid Time");
  return 0;
}

