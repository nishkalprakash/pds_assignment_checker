//Roll No: 23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,a,max=0;
  for(i=0;i<20;i++){
    a=rand()%100;
    printf("%d\n",a);
    if(a>max)max=a;
  }
  printf("The maximum number is %d\n",max);
  return 0;
}
