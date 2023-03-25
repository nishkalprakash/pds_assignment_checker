#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a and b respectively such that both a and b are in the range[-999,999]\n");
    scanf("%d%d",&a, &b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

 if( a/100==0 && a/10!=0 && b/100==0 && b/10!=0 && a%10==b/10 && a/10 == b%10){
    printf("a and b are perfect pair");
 }
 else if(a/100!=0 && b/100!=0 && a/1000==0 && b/1000==0 && a/100==b%10 && a%10==b/100 && (a%100)/10==(b%100)/10 ){
    printf("a and b are perfect pair");
 }
 else if(a/100==0 && a/10!=0 && b/10!=0 b/100==0 && a%10!=b/10 && a/10!=b%10){
    printf("a and b are not perfect pair");
 }
 else if(a/100!=0 && b/100!=0 && a/1000==0 && b/1000==0 && a/100!=b%10 && a%10!=b/100 && (a%100)/10!=(b%100)/10 ){
    printf("a and b are not perfect pair");
 }
 else if(a/10==0 && b/10==0 && a==b){
    printf("a and b are perfect pair");
 }
 else if(a/10==0 && b/10==0 && a!=b){
    printf("a and b are not perfect pair");
 }
 else{
    printf("wrong input");
 }

return 0;
}
