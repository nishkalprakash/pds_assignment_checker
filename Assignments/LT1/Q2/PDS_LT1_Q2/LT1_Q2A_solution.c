//Code creator: Alka Ranjan
/*
LT1_Q2A:
	a) Read an integer of any number of digits.
    b) If the integer is ODD, then print all the sub-integers from the least significant digits to the most significant digits; if the integer is EVEN, then print all the sub-integers from the most significant digits to the least significant digits.
        For example:
           For the integer 2657,  The sub-integers are
               From least significant digits to most significant digits, there are 2657, 657, 57, and 7.

           For the integer 2348, The sub-integers are

                From most significant digits to least significant digits, there are 2, 23, 234, 2348

    c) Reverse the digits of the integers and print the absolute difference between them.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, is_odd, digit_count, reversed_num=0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int original_num = num;
    int rev = num;

      if (num < 0) {
        num = abs(num);
    }
    int count = 0;
    int r_curr;

    //Reverse number
    while(rev!=0){
        r_curr = rev%10;
        rev = rev/10;
        reversed_num = reversed_num*10 + r_curr;
        count++;
    }

    is_odd = num % 2 != 0;
    digit_count = count;

    if (is_odd) {
        for (int i = 0; i < digit_count; i++) {
            int sub_integer = num % (int)pow(10, digit_count - i);
            printf("%d ", sub_integer);
        }
    } else {
        for (int i = digit_count - 1; i >= 0; i--) {
            int sub_integer = num / (int)pow(10, i);
            printf("%d ", sub_integer);
        }
    }

     printf("\n Reverse Number %d\n",reversed_num);

    printf("\nThe absolute differences between the original and reversed integers are: %d\n",abs(original_num-reversed_num));



    return 0;
}