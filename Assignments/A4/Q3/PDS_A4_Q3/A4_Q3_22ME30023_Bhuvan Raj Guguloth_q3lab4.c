#include<stdio.h>
int main()
{
    int n,b;
    printf("Enter the number: \n");
    scanf("%d",&n);
    while (n>0){
        b = n%10;
        n=n/10;
        if(b==0) printf("Zero ");
        if(b==1) printf("One ");
        if(b==2)printf("Two ");
        if(b==3) printf("Three ");
        if(b==4) printf("Four ");
        if(b==5)printf("Five ");
        if(b==6)printf("Six ");
        if(b==7)printf("Seven ");
        if(b==8)printf("Eight ");
        if(b==9)printf("Nine ");

    }
    return 0;
}
