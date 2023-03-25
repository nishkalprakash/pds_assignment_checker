#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers in the range -999 to 999\n");
    scanf("%d%d",&a,&b);
    //number out of range
    if ((a>999)||(a<-999)||(b>999)||(b<-999)){
        printf("Wrong input\n");
    }
    //if number of digits in the two numbers don't match just print WRONG INPUT
    else if (((a/10)==0&&(b/10!=0))||((a/100)==0&&(b/100!=0))||((b/10)==0&&(a/10!=0))||((b/100)==0&&(a/100!=0))){
        printf("Wrong input\n");
    }
    //note no. of digits case is checked before so now no. of digits is same so if now one of the numbers is positive and one is negative print"Not a Perfect Pair"
    else if (((a>0)&&(b<0))||((a<0)&&(b>0)))
        printf("Not a Perfect Pair\n");
    //for single digit number IF BOTH THE NUMBERS ARE EQUAL they are  perfect pair
    if ((a>=-9)&&(a<=9)&&(b>=-9)&&(b<=9)){
        if(a==b)
            printf("Perfect Pair");
    }
    //checking for double digit positive numbers
    //check if first digit and last digit of the other numbers are equal or not
    else if((a>=10)&&(a<=99)&&(b>=10)&&(b<=99))
    {
        if(((a%10)==(b/10))&&((b%10)==(a/10)))
            printf("Perfect pair\n");
        else
            printf("Not a Perfect pair");
    }
    //checking for triple digit positive numbers
    else if((a>=100)&&(a<=999)&&(b>=100)&&(b<=999)){
        if(((a%10)==(b/100))&&((a/100)==(b%10))&&(((a%100)/10)==((b%100)/10)))
            printf("Perfect pair\n");
        else
            printf("Not a Perfect pair");
    }
    //checking for double digit negative numbers
    else if((a<=-10)&&(a>=-99)&&(b<=-10)&&(b>=-99))
    {
        if(((a%10)==(b/10))&&((b%10)==(a/10)))
            printf("Perfect pair\n");
        else
            printf("Not a Perfect pair");
    }
    //checking for triple digit negative number
    else if((a<=-100)&&(a<=999)&&(b<=-100)&&(b>=-999)){
        if(((a%10)==(b/100))&&((a/100)==(b%10))&&(((a%100)/10)==((b%100)/10)))
            printf("Perfect pair\n");
        else
            printf("Not a Perfect pair");
    }


    return 0;


}
