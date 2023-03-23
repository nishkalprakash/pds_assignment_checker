#include <stdio.h>

int main ()
{
    int n, S1, S2, S3;

    printf("Enter the number between 100 and 999: "); //function to take input from user
    scanf("%d", &n);

    S1=n*(n+1)/2; //Based on formula Algebraic sum of first n integers

    S2=(n*(n+1)*((n+n)+1)/6);  //Based on formula Algebraic sum of square of first n integers

    S3= (n/100) + ((n-((n/100)*100))/10) + (n-(n/10)*10);
    //n has been declared as an integer and gives out integer value when divided(here by 10,100) by truncating the answer which gives whole numbers

    //function to print value of S1,S2 and S3
    printf("Value of S1 is %d\n", S1);
    printf("value of S2 is %d\n", S2);
    printf("Value of S3 is %d\n", S3);
    return 0;
}
