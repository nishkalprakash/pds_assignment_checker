//Roll No:<23Na10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>
#include <stdlib.h>

int main()
{int x[49], i, count, copy;

  printf("Input number of integral values required:\n");
  scanf("%d", &count);

  for(i=0;i<count;i++)
    {x[i]=rand()%90 + 10;
      printf("%d\n", x[i]);}

  i=0;

  while(i<=(count-1)){
    if(i%2==0 && x[i+2]!=0){
      copy=x[i];
      x[i]=x[i+2];
      x[i+2]=copy;
      i+=4;}
    else if(x[i+2]==0){
    x[i]=x[i];
    i++;}
  }

  i=1;

  while(i<=(count-1)){
    if(i%2!=0 && x[i+2]!=0){
      copy=x[i];
      x[i]=x[i+2];
      x[i+2]=copy;
      i+=4;
    }
    else if(x[i+2]==0){
      x[i]=x[i];
      i++;}
         }

  for(i=0;i<count;i++){
    printf("input=%d\n",x[i]);
  }

  return 0;
  
}
  
