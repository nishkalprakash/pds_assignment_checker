#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  for(i=1;i<=20;i++){
    printf("%d\n", 5000+rand()%1001);
  }
return(0);
}
