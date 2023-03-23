#include<stdio.h>  //header file
int main()  //declaring main() function
{
    int n,S1=0,S2=0,S3=0,c=0,d=0,e=0;  //declaring variables
    printf("Enter an integer from 100 to 999\n");  //message to enter a number
    scanf("%d",&n);  //accepting input from keyboard
    S1=(n*(n+1))/2;    //computing value of S1
    S2=(n*(n+1)*(2*n+1))/6;  //computing value of S2
    c=n/100; //extracting first digit
    d=(n%100)/10;  //extracting second digit
    e=(n%100)%10;  //extracting third digit
    S3=c+d+e;  //computing value of S3
    printf("The value of sum S1=%d\n",S1); //printing the values
    printf("The value of sum S2=%d\n",S2);
    printf("The value of sum S3=%d\n",S3);
    return 0;
}
