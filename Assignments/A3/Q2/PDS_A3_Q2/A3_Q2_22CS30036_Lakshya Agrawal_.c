#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers in the range [-999,999] :  ");
    scanf("%d%d",&a,&b);
    if((a/100 == 0 && b/100 != 0) || (a/100 != 0 && b/100 == 0)|| (a/10 == 0 && b/10 != 0) || (a/10 != 0 && b/10 == 0) || (a<-999) || (a>999) || (b<-999) || (b>999)){
        printf("Wrong Input");
    }else{
       if(a/100!=0){
         if(a%10== b/100 && (a%100)/10 == (b%100)/10 && a/100 == b%10){
            printf("Perfect Pair");
         }else{
         printf("Not a Perfect Pair");
       }
       }else if(a/10 != 0){
          if(a%10==b/10 && a/10==b%10){
            printf("Perfect Pair");
         }else{
         printf("Not a Perfect Pair");
       }
       }else{
         if(a==b){
            printf("Perfect Pair");
         }else{
         printf("Not a Perfect Pair");
       }
       }
    }


    return 0;
}