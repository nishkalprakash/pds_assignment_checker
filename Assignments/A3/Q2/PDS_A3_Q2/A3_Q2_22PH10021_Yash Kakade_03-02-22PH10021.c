#include <stdio.h>

int main()

{
    int a,b;

    printf("Enter any two numbers between -999 and 999\n");
    scanf("%d %d",&a,&b);

    if (a/100!=0 && b/100!=0){
       if (a/100==b%10 && (a%100)/10==(b%100)/10 && a%10==b/100){
        printf("Perfect Pair");
    }
       else (printf("Not a Perfect Pair"));

       }

    else if (a/100==0 && b/100==0 && a/10!=0 && b/10!=0){
        if (a/10==b%10 && a%10==b/10){
            printf("Perfect Pair");
    }
       else {printf("Not a Perfect Pair");}
        }


     else if (a/100==0 && b/100==0 && a/10==0 && b/10==0){
         if (a==b){
            printf("Perfect Pair");
    }
       else (printf("Not a Perfect Pair"));
         }

    else {printf("Wrong input");}


    return 0;
}
