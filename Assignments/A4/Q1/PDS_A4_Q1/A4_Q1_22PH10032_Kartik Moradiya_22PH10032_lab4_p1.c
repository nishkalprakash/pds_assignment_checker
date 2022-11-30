#include<stdio.h>
#include<math.h>

int main()
{
  int i,f;
  printf("enter integer number:");
  scanf("%d",&i);
  if(i>0){
  for(f=1;f>!i;f++){
  if(i%f==0){
  printf("%2d",i/f);}
  }
  }
else if (i<0){i=i*-1;
 for(f=1;f>!i;f++){
  if(i%f==0){
  printf("%2d",i/f);}
  }
}else if(i==0){printf("0");
};
return 0;
}






