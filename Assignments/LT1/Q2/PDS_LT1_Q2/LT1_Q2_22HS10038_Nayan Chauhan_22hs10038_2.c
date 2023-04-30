/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : LAB TEST 1
* Description : QUESTION 2
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, digit,num_even = 0,num_odd, d = 0, num, rev, dif;
    printf("Enter the integer:");
    scanf("%d", &n);
    if(n>0)
    {
    digit = (int) (log10(n)+1);
    }
    else{
        digit = (int) (log10(-n)+1);
    }
    if(digit>=1){
        if((n%2)==0){
            printf("Most Significant digits to least significant digits:\n");
            for(int i=0; i<digit; i++)
            {
                num_even = n/(pow(10, digit-i-1));
                if(num_even<0){
                 num_even = -num_even;
                 } //SO THAT IT MATCHED THE TEST CASES
                printf("%d, ", num_even);
            }
        }
        else{
            num_odd = 0;
            printf("Least Significant digits to most significant digits:\n");
            for(int j=0; j<digit; j++)
            {
                num_odd = n % (int) (pow(10, digit-j));
                if(num_odd<0) num_odd = -num_odd;//SO THAT IT MATCHED THE TEST CASES
                printf("%d, ", num_odd);
            }
        }
        num = n, rev=0;
        for(int k=0;k<digit;k++)
        {
            rev = rev + (num%10)*(pow(10, digit-k-1));
            num=num/10;
        }
        printf("\nReverse number = %d", rev);
        if((n-rev)<0){
            dif = rev-n;
        }
        else{
            dif =n-rev;
        }

        printf("\nDifference between Reverse and original number = %d",dif);
    }
}
