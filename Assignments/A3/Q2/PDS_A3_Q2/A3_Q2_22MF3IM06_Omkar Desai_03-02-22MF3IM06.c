#include<stdio.h>

int main(){
int a,b,c,e,f,g,h,i,j,k,l,m,n,p;
printf("Enter the numbers\n");
scanf("%d,%d",&a,&b);
if (a >=-999 && a=<999 || b>=-999 && b<=999)
    {
    printf("enter valid input");


/*if((((a>99&& a<1000) ||(a<-99&& a>-1000)))&&(((b>99&&b<1000)||(b<-99 && b>-1000))) ){
    c=a/100;
    printf("it is 3 digit number");*/
e=c%100;
f=e/10;
g=e%10;

 h=b/100;
 i=b%100;
 j=i/10;
 k=i%10;
 if(((c-h)+(g-k)==0) && ((f-j)==0)){
    printf("the numbers are perfect\n");
 }
 else{
    printf("the numbers are not perfect\n");
 }
/*if(a<100 &&a>9&&b<100&&b>9){
    l=a/10;
    m=a%10;

    n=b/10;
    p=b%10;
    if((l-n)+(m-p)==0){
        printf("the number are perfect");

    }
    else {
        printf("The numbers are not perfect");
    }

}

else{
    printf("invalid input\n");
}*/


}

return 0;

};


