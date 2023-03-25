//22EE30015
#include<stdio.h>
#include<math.h>

int main()
{
    int num1, num2;
    printf("Enter two numbers from -999 to 999 : \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(-999<=num1<=999 && -999<=num2<=999){

        // To check if number of digits are equal or not
        int num1_positive, num2_positive;
        if(num1<0){
            num1_positive = num1*(-1);
        }
        else{
            num1_positive = num1;
        }
        if(num2<0){
            num2_positive = num2*(-1);
        }
        else{
            num2_positive = num2;
        }

        // Below if statement is defined to check if no of digits are same or not
        int no_of_digits1, no_of_digits2;
        no_of_digits1 = (log10(num1_positive)) + 1;
        no_of_digits2 = (log10(num2_positive)) + 1;

        int a1,b1,c1,d1,oppo_num,a2,b2;

        if( no_of_digits1 == no_of_digits2){
            if(no_of_digits1==3){
                a1 = num1%100;
                b1 = num1/100;
                c1 = a1/10;
                d1 = a1%10;
                oppo_num = d1*100 + c1*10 + b1;
                if(oppo_num == num2)
                    printf("\nPerfect Pair");
                else
                    printf("\nNot a perfect pair");

            }
            else if(no_of_digits1==2){
                a2 = num1/10;
                b2 = num1%10;
                oppo_num = a2 + b2*10;
                if(oppo_num == num2)
                    printf("\nPerfect Pair");
                else
                    printf("\nNot a perfect pair");
            }
            else if(num1==num2){
                printf("Perfect Pair");
            }
        }

        else
            printf("Wrong Input");
       }

    else
        printf("Wrong Input");

    return 0;
}
