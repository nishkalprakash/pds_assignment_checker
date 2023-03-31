/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 4
Description : Program to find whether the password is valid or invalid.
*/

#include<stdio.h>

int main()
{
    int h,count;
    printf("Enter the number of rows: ");
    scanf("%d",&h);
    for(int i=1; i<= h ; i++)
    {
        count = h-i;
        while(count--){
            printf(" ");
        }
        for(int j=1 ; j<=i; j++){
            if((i+j-1) >= 10){
                printf("%d",(i+j-1)%10);
            }else{
                printf("%d",(i+j-1));
            }
        }
        for(int k=i-1 ; k>0 ; k--){
            if((i+k-1) >= 10){
                printf("%d",(i+k-1)%10);
            }else{
                printf("%d",(i+k-1));
            }
        }
        printf("\n");
    }
    return 0;
}

