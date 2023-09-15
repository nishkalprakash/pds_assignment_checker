#include <stdio.h>
#include <stdlib.h>

int main()
{
  int Rn[19], Ra[19], Ma[19], i, a, b, c;

  for(i=0; i<20; i++){
    Rn[i]=rand()%1000+1000;
  }

  for(i=0; i<20; i++){
    Ra[i]=rand()%10+15;
  }

  for(i=0; i<20; i++){
    Ma[i]=rand()%100;
  }

  for(i=0; i<20; i++){
    printf("Roll:%d Age:%d Marks:%d\n", Rn[i], Ra[i], Ma[i]);
  }
  printf("Same Marks:\n");

  for(a=0; a<20; a++){
    for(b=a+1; b<20; b++){
      if(Rn[a]==Rn[b] ||Ra[a]==Ra[b]||Ra[a]==Ma[b]){
	printf("Roll:%d Age:%d Marks:%d\n", Rn[a], Ra[a], Ma[a]);
	printf("Roll:%d Age:%d Marks:%d\n", Rn[b], Ra[b], Ma[b]);
      }
    }
  }
	

  return 0;
}
    

  
  
