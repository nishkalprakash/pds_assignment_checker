#include<stdio.h>

int main(){
    int a,b;                    //defining variables
    printf("Enter any two numbers:\t");
    scanf("%d %d",&a,&b);      //taking in the input


    //condition to check if both the numbers are 3 digit number
    if(a/100!=0 && b/100!=0){
        if(a/100==b%10 && (a%100)/10==(b%100)/10 && b/100==a%10){
        printf("Perfect Pair");
    }
        else{printf("Not a perfect pair");}
    }

    //condition to check if both the number are 2 digit number
    else if(a/100==0 & b/100==0 && a/10!=0 && b/10!=0){
            if(a/10==b%10 && b/10==a%10){
            printf("Perfect Pair");
    }
            else{printf("Not a perfect pair");}


    }

    //condition to check if the numbers are single digit
     else if(a/100==0 & b/100==0 && a/10==0 && b/10==0){
            if(a=b){
            printf("Perfect Pair");
    }
            else{printf("Not a perfect pair");}


    }


    //other conditions are for wrong inputs
    else{
        printf("Wrong Input");
    }



    return 0;



}
