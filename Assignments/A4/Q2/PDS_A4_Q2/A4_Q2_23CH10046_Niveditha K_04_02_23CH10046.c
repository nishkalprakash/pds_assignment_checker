#include <stdio.h>
#include <stdlib.h>

int main(){

  for(int i=1;i<=20;i++)
    printf("number %d : %d\n",i,rand() % 100);
return(0);
}
