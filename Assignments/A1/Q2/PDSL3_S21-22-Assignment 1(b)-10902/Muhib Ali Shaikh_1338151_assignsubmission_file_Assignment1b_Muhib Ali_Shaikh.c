/* Shaikh Muhib Ali(21EE10064), Electrical department, platform used:Code blocks*/
#include<stdio.h>
int main(){

    int num,N1,N2,N3,reversedNum;
    printf("Enter a 3digit number\n");
    scanf("%d",&num);

    N1=num/100;
    N2=(num%100)/10;
    N3=num%10;

    reversedNum= N3*100 + N2*10 + N1;

    printf("The reversed number id %d\n",reversedNum);

    return 0;
    }
