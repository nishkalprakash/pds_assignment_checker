/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
int main(){
    float x,e,x1;
    int maxiteration;
    printf("value of function x:");
    scanf("%f",&x);
    printf("value of e:");
    scanf("%f",&e);
    printf("value of maxiteration:");
    scanf("%d",&maxiteration);
    for(int i=0;i<maxiteration;i++){
        x1=x*x*x-25;
        e=x1-x;
        printf("iteration\t x0\t x1\t Error\n");
        scanf("%d%f%f%f",&i,&x,&x1,&e);
    }
    return 0;

}
