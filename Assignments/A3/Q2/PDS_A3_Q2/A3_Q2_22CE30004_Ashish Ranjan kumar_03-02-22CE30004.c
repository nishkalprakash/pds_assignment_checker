#include<stdio.h>
#include<math.h>
int main() {
int x,y,a,b,c,d,e,f;
scanf("%d%d", &x,&y);
if(x>-999&&x<999&&y<-999&&y<999);
a=x%10; c=(x/10)%10; d=(x/100);
b= y%10; e=(y/10)%10; f=(y/100);
if(x>-100&&x<100&&y>-100&&y<100) {
    if(x%10==y%10 && x/10==y/10) {
        printf("The two number are a perfect pair");
    }
    else if(x==a&&c==d&&b==d) {
        printf("The two number are perfect pair\n");
        else{
            printf("The two number are not a perfect number\n");
        }
        else if(x/100==0&&y/100!=00||x/100!=0&&y/100==0) {
            printf("Wrong inpute");
        }
    }
    return o;
}
