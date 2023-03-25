#include<stdio.h>
int main(){
      int a,b,c,d,e;
      printf("enter five integers a, b, c, d and e respectively \n");  //taking values of integers from user
      scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);

    int Even = 0;          //even number is divisible by 2,therefore even%2 = 0
    if(a%2 == 0){
       
    }

    if(b%2 == 0){
        Even++;
    }

    if(c%2 == 0){
        Even++; Even++;
    }

    if(d%2 == 0){
        Even++;
    }

    if(e%2 == 0){
        Even++;
    }

    if(Even ==3){



    if(a>=b && a>=c && a>=d && a>=e){
        printf("largest number is %d",a);}
    else if(b>=a && b>=c && b>=d && b>=e){
        printf("largest number is %d",b);}
    else if(c>=a && c>=b && c>=d && c>=e){
        printf("largest number is %d",c);}
    else if(d>=b && d>=c && d>=a && d>=e){
        printf("largest number is %d",d);}
    else if(e>=b && e>=c && e>=d && e>=a){
        printf("largest number is %d",e);}
    }

    else if(Even==2){
        if(a%2!=0)
    }














return 0;
}
