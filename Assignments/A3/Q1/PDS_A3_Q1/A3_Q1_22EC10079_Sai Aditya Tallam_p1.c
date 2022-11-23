#include<stdio.h>

int main(){

int SS,MM,HH;
scanf("%d %d %d",&SS,&MM,&HH);
if(SS>0 && SS<60&&MM<60 && MM>0&& HH<24 && HH>0){
printf("Valid time");
printf("-%d:%d:%d",HH,MM,SS);
}else printf("invalid time");
return 0;
}
