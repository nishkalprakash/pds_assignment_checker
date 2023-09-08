// Roll No. - 23IM10028
// Name - Rishabh Dehariya

#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,a, max=1;
  for (i=1;i<20;i++){
    a=rand()%100;
    printf("%d\n",a);

    if(a>max){
      max=a;
    }
  }
  printf("Maximum number is %d\n", max);

  return 0;
}
