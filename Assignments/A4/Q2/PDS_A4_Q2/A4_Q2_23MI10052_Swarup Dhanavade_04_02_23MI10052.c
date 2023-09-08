// swarup jayaram dhanavade
// 23MI10052

#include<stdio.h>
#include<stdlib.h>

int main()
{ int x=1 , max=0;

  for(int i=0;i<20;i++){ x = rand()%100 +1 ;//chosing random number from 1 to 100
    printf("%d\n", x);
    if ( x >= max && x>=1) max=x;
  }
  printf("maximum is:%d\n",max);
  return 0 ;

}
