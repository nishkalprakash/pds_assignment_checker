#include<stdio.h>
int main(){
int a,b,c,x1,x2,x3,y1,y2,y3;
printf("give any 2 numbers between (-999,999) : ");
scanf("%d%d" , &a, &b);
 x1=a/100;
 x2=(a/10)%10;
 x3=(a%100)%10;
 y1=b/100;
 y2=(b/10)%10;
 y3=(b%100)%10;
 if((x1==y3)&&(x2==y2)&&(x3==y1))
 {
     printf("it is perfect");
 }
 else if((x1=a/10)&&(x2=a%10)&&(y1=b/10)&&(y2=b%10)&&(x1==y2)&&(x2==y1)){
    printf("it is perfect");

 }
 else if(a==b){
    printf("it is perfect");
 }
 else if((a>=1000)||(a<=-1000)||(b>=1000)||(b<=-1000))
 {
     printf("give correct input");
 }
else {
    printf("it is not perfect");
}
return 0;
}
