/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int num_int, no_of_digits, rev_num = 0, difference_no;

    printf("Enter the Integer : ");
    scanf("%d", &num_int);

    if(num_int>0)
    {
        //To find number of digits in given integer
        no_of_digits = (log10(num_int)) + 1;

        if(num_int%2==0)
        {
            printf("Most significant digits to least significant digits : \n");
            int i = no_of_digits;

            while(i > 0)
            {
                int power_of_10 = pow(10,i-1);
                printf("%d", num_int/power_of_10);
                if(i>1)
                    printf(", ");
                i--;
            }

        }

        else
        {
            printf("Least significant digits to most significant digits : \n");
            int i = no_of_digits;

            while(i > 0)
            {
                int power_of_10 = pow(10,i);
                printf("%d", num_int%power_of_10);
                if(i>1)
                {
                    printf(", ");
                }
                i--;
            }
        }

        //To reverse a given number
        int value = num_int;
        for(int i = no_of_digits, j = 0; i > 0, j<no_of_digits; i--, j++)
        {
            int pow_of_10_1, pow_of_10_2;
            pow_of_10_1 = pow(10, i-1);
            pow_of_10_2 = pow(10, j);
            rev_num += (value/pow_of_10_1)*pow_of_10_2;
            value = value%(pow_of_10_1);
        }
        printf("\nReverse number is = %d", rev_num);

        //To find difference between reverse and original number
        difference_no = rev_num - num_int;
        if(difference_no>0)
            printf("\nDifference between reverse and original number = %d", difference_no);
        else
            printf("\nDifference between reverse and original number = %d", difference_no*(-1));

    }

    else
    {
        //To find number of digits in given integer
        num_int = num_int*(-1);
        no_of_digits = (log10(num_int)) + 1;

        if(num_int%2==0)
        {
            printf("Most significant digits to least significant digits : \n");
            int i = no_of_digits;

            while(i > 0)
            {
                int power_of_10 = pow(10,i-1);
                printf("%d", num_int/power_of_10);
                if(i>1)
                    printf(", ");
                i--;
            }

        }

        else
        {
            printf("Least significant digits to most significant digits : \n");
            int i = no_of_digits;

            while(i > 0)
            {
                int power_of_10 = pow(10,i);
                printf("%d", num_int%power_of_10);
                if(i>1)
                {
                    printf(", ");
                }
                i--;
            }
        }

        //To reverse a given number
        int value = num_int;
        for(int i = no_of_digits, j = 0; i > 0, j<no_of_digits; i--, j++)
        {
            int pow_of_10_1, pow_of_10_2;
            pow_of_10_1 = pow(10, i-1);
            pow_of_10_2 = pow(10, j);
            rev_num += (value/pow_of_10_1)*pow_of_10_2;
            value = value%(pow_of_10_1);
        }
        rev_num = rev_num*(-1);
        printf("\nReverse number is = %d", rev_num);

        num_int = num_int*(-1);

        //To find difference between reverse and original number
        difference_no = (rev_num - num_int);
        if(difference_no>0)
            printf("\nDifference between reverse and original number = %d", difference_no);
        else
            printf("\nDifference between reverse and original number = %d", difference_no*(-1));

    }

    return 0;
}
