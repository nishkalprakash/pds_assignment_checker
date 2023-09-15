//Raju kumar
//23EC30036
#include<stdio.h>
#include<stdlib.h>

int main (){
  int i,nol,ld,sum=0,mim=0;
  for(i=0;i<20;i++){
    no=rand()%1001+5000;
    printf("%d\n",no);
  }
  while(no>0){
    ld=no%10;
    sum=sum+ld;
    no=no%10;
    // printf("%d",no);
  }
  if(no<mim)
    mim=no;
  printf("%d",mim);
  return 0;
}
    
