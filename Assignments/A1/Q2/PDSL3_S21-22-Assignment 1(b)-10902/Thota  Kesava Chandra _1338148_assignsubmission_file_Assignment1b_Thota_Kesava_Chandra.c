/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

int main()
{
    int num,rev_num;
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    rev_num = (num%1000)/100;
    rev_num += ((num%100)/10)*10 ;
    rev_num += (num%10)*100;
    printf("Reverse number = %d",rev_num);
    return 0;
}
