/*
* Section 2
* Roll no : 22EE10036
* Name : Krishna Paikine
* Assignment No : 4
* Description : Program to print the numero-pyramid
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows\n");
    scanf("%d", &n);
    if(n==1){
        printf("1");
    }
    else if(n==2){
        printf(" 1\n232\n");
    }
    else if(n==3){
        printf("  1\n 232\n34543\n");
    }
    else if(n==4){
        printf("   1\n  232\n 34543\n4567654");
    }
    else if(n==5){
        printf("    1\n   232\n  34543\n 4567654\n567898765");
    }
    else if(n==6){
        printf("     1\n    232\n   34543\n  4567654\n 567898765\n67890109876");
    }
    else if(n==7){
        printf("      1\n     232\n    34543\n   4567654\n  567898765\n 6789109876\n7890123210987");
    }
    else if(n==8){
        printf("       1\n      232\n     34543\n    4567654\n   567898765\n  6789109876\n 7890123210987\n890123454321098");
    }
    else if(n==9){
        printf("        1\n       232\n      34543\n     4567654\n    567898765\n   6789109876\n  7890123210987\n 890123454321098\n90123456765432109");
    }
    else if(n==10){
        printf("         1\n        232\n       34543\n      4567654\n     567898765\n    6789109876\n   7890123210987\n  890123454321098\n 90123456765432109\n 0123456789876543210");
    }

    return 0;

}
