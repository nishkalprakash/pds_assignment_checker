#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("ENTER 4 NUMBERS");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b || a==c || a==d|| b==c || b==d || c==d){
    printf("YES");}
    else{printf("NO");}
}
