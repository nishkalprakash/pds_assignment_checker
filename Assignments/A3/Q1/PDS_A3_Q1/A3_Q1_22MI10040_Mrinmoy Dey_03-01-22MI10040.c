
#include <stdio.h>
int main(){
    long int num1,num2,num3,num4,num5,count_odd=0,count_even=0;
    printf("Enter five numbers: ");
    scanf("%ld%ld%ld%ld%ld",&num1,&num2,&num3,&num4,&num5);
    if (num1%2==0){
        count_even+=1;
    }
    else{
        count_odd+=1;
    }
    if (num2%2==0){
        count_even+=1;
    }
    else{
        count_odd+=1;
    }
    if (num3%2==0){
        count_even+=1;
    }
    else{
        count_odd+=1;
    }
    if (num4%2==0){
        count_even+=1;
    }
    else{
        count_odd+=1;
    }
    if (num5%2==0){
        count_even+=1;

    }
    else{
        count_odd+=1;

    }
    if (count_even==3){
        if (num1>num2 && num1>num3 && num1>num4 && num1>num5){
            printf("Largest Number: %ld",num1);
        }
        if (num2>num1 && num2>num3 && num2>num4 && num2>num5){
            printf("Largest Number: %ld",num2);
        }
        if (num3>num1 && num3>num2 && num3>num4 && num3>num5){
            printf("Largest Number: %ld",num3);
        }
        if (num4>num1 && num4>num2 && num4>num3 && num4>num5){
            printf("Largest Number: %ld",num4);
        }
        if (num5>num1 && num5>num2 && num5>num3 && num5>num4){
            printf("Largest Number: %ld",num5);
        }

    }
    if (count_odd==3){
        printf("Odd Numbers :: \n");
        if (num1%2!=0 && num2%2!=0 && num3%2!=0){
            if (num1>num2 && num1>num3){
                if (num2>num3){
                    printf("%ld %ld %ld",num3,num2,num1);
                }
                else {
                    printf("%ld %ld %ld",num2,num3,num1);
                }
            }
            if (num2>num1 && num2>num3){
                if (num1>num3){
                    printf("%ld %ld %ld",num3,num1,num2);
                }
                else {
                    printf("%ld %ld %ld",num1,num3,num2);
                }
            }
            if (num3>num2 && num3>num1){
                if (num2>num1){
                    printf("%ld %ld %ld",num1,num2,num3);
                }
                else {
                    printf("%ld %ld %ld",num2,num1,num3);
                }

            }
        }
        else if (num2%2!=0 && num3%2!=0 && num4%2!=0){
            if (num2>num3 && num2>num4){
                if (num3>num4){
                    printf("%ld %ld %ld",num4,num3,num2);
                }
                else {
                    printf("%ld %ld %ld",num3,num4,num2);
                }
            }
            if (num3>num4 && num3>num2){
                if (num2>num4){
                    printf("%ld %ld %ld",num4,num2,num3);
                }
                else {
                    printf("%ld %ld %ld",num2,num4,num3);
                }
            }
            if (num4>num3 && num4>num2){
                if (num3>num2){
                    printf("%ld %ld %ld",num2,num3,num4);
                }
                else {
                    printf("%ld %ld %ld",num3,num2,num4);
                }

            }
        }
        else if (num2%2!=0 && num3%2!=0 && num5%2!=0){
            if (num2>num3 && num2>num5){
                if (num3>num5){
                    printf("%ld %ld %ld",num5,num3,num2);
                }
                else {
                    printf("%ld %ld %ld",num3,num5,num2);
                }
            }
            if (num3>num4 && num3>num2){
                if (num2>num4){
                    printf("%ld %ld %ld",num5,num2,num3);
                }
                else {
                    printf("%ld %ld %ld",num2,num5,num3);
                }
            }
            if (num4>num3 && num4>num2){
                if (num3>num2){
                    printf("%ld %ld %ld",num2,num3,num5);
                }
                else {
                    printf("%ld %ld %ld",num3,num2,num5);
                }

            }
        }
        else if (num1%2!=0 && num3%2!=0 && num4%2!=0){
            if (num1>num3 && num1>num4){
                if (num3>num4){
                    printf("%ld %ld %ld",num4,num3,num1);
                }
                else {
                    printf("%ld %ld %ld",num3,num4,num1);
                }
            }
            if (num3>num4 && num3>num1){
                if (num2>num4){
                    printf("%ld %ld %ld",num4,num1,num3);
                }
                else {
                    printf("%ld %ld %ld",num1,num4,num3);
                }
            }
            if (num4>num3 && num4>num1){
                if (num3>num2){
                    printf("%ld %ld %ld",num1,num3,num4);
                }
                else {
                    printf("%ld %ld %ld",num3,num1,num4);
                }

            }
        }
        else if (num1%2!=0 && num2%2!=0 && num4%2!=0){
            if (num1>num2 && num1>num4){
                if (num2>num4){
                    printf("%ld %ld %ld",num4,num2,num1);
                }
                else {
                    printf("%ld %ld %ld",num2,num4,num1);
                }
            }
            if (num2>num4 && num2>num1){
                if (num1>num4){
                    printf("%ld %ld %ld",num4,num1,num2);
                }
                else {
                    printf("%ld %ld %ld",num1,num4,num2);
                }
            }
            if (num4>num1 && num4>num2){
                if (num2>num1){
                    printf("%ld %ld %ld",num1,num2,num4);
                }
                else {
                    printf("%ld %ld %ld",num2,num1,num4);
                }

            }
        }
        else if (num1%2!=0 && num2%2!=0 && num5%2!=0){
            if (num1>num2 && num1>num5){
                if (num2>num5){
                    printf("%ld %ld %ld",num5,num2,num1);
                }
                else {
                    printf("%ld %ld %ld",num2,num5,num1);
                }
            }
            if (num2>num5 && num2>num1){
                if (num1>num5){
                    printf("%ld %ld %ld",num5,num1,num2);
                }
                else {
                    printf("%ld %ld %ld",num1,num5,num2);
                }
            }
            if (num5>num2 && num5>num1){
                if (num2>num1){
                    printf("%ld %ld %ld",num1,num2,num5);
                }
                else {
                    printf("%ld %ld %ld",num2,num1,num5);
                }

            }
        }
        if (num1%2!=0 && num3%2!=0 && num5%2!=0){
            if (num1>num3 && num1>num5){
                if (num3>num5){
                    printf("%ld %ld %ld",num5,num3,num1);
                }
                else {
                    printf("%ld %ld %ld",num3,num5,num1);
                }
            }
            if (num3>num5 && num3>num1){
                if (num1>num5){
                    printf("%ld %ld %ld",num5,num1,num3);
                }
                else {
                    printf("%ld %ld %ld",num1,num5,num3);
                }
            }
            if (num5>num3 && num5>num1){
                if (num3>num1){
                    printf("%ld %ld %ld",num1,num3,num5);
                }
                else {
                    printf("%ld %ld %ld",num3,num1,num5);
                }

            }
        }
        else if (num1%2!=0 && num4%2!=0 && num5%2!=0){
            if (num1>num4 && num1>num5){
                if (num4>num5){
                    printf("%ld %ld %ld",num5,num4,num1);
                }
                else {
                    printf("%ld %ld %ld",num4,num5,num1);
                }
            }
            if (num4>num5 && num4>num1){
                if (num1>num5){
                    printf("%ld %ld %ld",num5,num1,num4);
                }
                else {
                    printf("%ld %ld %ld",num1,num5,num4);
                }
            }
            if (num5>num4 && num5>num1){
                if (num4>num1){
                    printf("%ld %ld %ld",num1,num4,num5);
                }
                else {
                    printf("%ld %ld %ld",num4,num1,num5);
                }

            }
        }
        else if (num2%2!=0 && num4%2!=0 && num5%2!=0){
            if (num2>num4 && num2>num5){
                if (num4>num5){
                    printf("%ld %ld %ld",num5,num4,num2);
                }
                else {
                    printf("%ld %ld %ld",num4,num5,num2);
                }
            }
            if (num4>num5 && num4>num2){
                if (num2>num5){
                    printf("%ld %ld %ld",num5,num2,num4);
                }
                else {
                    printf("%ld %ld %ld",num2,num5,num4);
                }
            }
            if (num5>num4 && num5>num2){
                if (num4>num2){
                    printf("%ld %ld %ld",num2,num4,num5);
                }
                else {
                    printf("%ld %ld %d",num4,num2,num5);
                }

            }
        }
        else if (num3%2!=0 && num4%2!=0 && num5%2!=0){
            if (num3>num4 && num3>num5){
                if (num4>num5){
                    printf("%ld %ld %ld",num5,num4,num3);
                }
                else {
                    printf("%ld %ld %ld",num4,num5,num3);
                }
            }
            if (num4>num5 && num4>num3){
                if (num3>num5){
                    printf("%ld %ld %ld",num5,num3,num4);
                }
                else {
                    printf("%ld %ld %ld",num3,num5,num4);
                }
            }
            if (num5>num4 && num5>num3){
                if (num4>num3){
                    printf("%ld %ld %ld",num3,num4,num5);
                }
                else {
                    printf("%ld %ld %ld",num4,num3,num5);
                }

            }
        }
        }


    }

