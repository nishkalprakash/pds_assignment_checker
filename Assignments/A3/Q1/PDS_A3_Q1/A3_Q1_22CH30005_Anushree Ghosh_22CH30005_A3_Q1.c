#include<stdio.h>

int main(){
     
    int ss,mm,hh;
    printf("enter ss,mm,hh");
    scanf("%d %d %d",&ss,&mm,&hh);

    if(ss<60 && mm<60 && hh<24){
      printf("valid time");
      printf("%d %d %d ",hh,mm,ss);
}
 else{
      printf("invalid time \n");
}

  return 0;
}
