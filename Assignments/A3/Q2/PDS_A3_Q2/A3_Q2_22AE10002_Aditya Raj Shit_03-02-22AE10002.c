//22AE10002


#include<stdio.h>

void main(){
    int a,b;            //a and b are two numbers to be inputted
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>=-999 && a<=999 && b>=-999 && b<=999){     //checking if the given number is in the specified range

    int digit1,digit2;      //digit here signifies the number of digit in the number

    if(a<9 && a>-9){        //calculating number of digits in a
        digit1=1;
    }
    else if(a/100==0){
        digit1=2;
    }
    else{
        digit1=3;
    }

    if(b<9 && b>-9){        //calculating number of digits in b
        digit2=1;
    }
    else if(b/100==0){
        digit2=2;
    }
    else{
        digit2=3;
    }



    if(digit1==digit2 && digit1==3){     //checking if the number of digits in both the number is same otherwise declaring them Wrong input
        if((a-b)%11==0){
            printf("Perfect Pair");  // if we subtract reversed number from original number then the resultant is a multiple of 11.
        }
        else{
            printf("Not a perfect number");
        }
    }

    else if(digit1==digit2 && digit1==2){     //checking if the number of digits in both the number is same otherwise declaring them Wrong input
        if((a-b)==9){
            printf("Perfect Pair");  // if we subtract reversed number from original number then the resultant is a multiple of 11.
        }
        else{
            printf("Not a perfect number");
        }
    }

    else{
        printf("Wrong Input");
    }
    }
    else{
        printf("Wrong input");
    }
}
