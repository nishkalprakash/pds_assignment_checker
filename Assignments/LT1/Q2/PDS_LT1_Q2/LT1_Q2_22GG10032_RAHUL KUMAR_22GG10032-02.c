#include<stdio.h>

int main()
{
    int n;
    printf("Enter the the integer : ");
    scanf("%d",&n);
    if(n%2!=0){
        if((n>=1)&&(n<=9)){
            printf("%d\n",n);
            Printf("Reverse number = %d\n",n);
            printf("Difference between reverse and original number = 0\n");
        }
        else if((n>=10)&&(n<=99)){
            printf("%d %d\n",n,n%10);
            Reverse no.=((n%10)*10)+n/10
            Printf("Reverse number = %d%d\n",n%d,n/10);
            printf("Difference between reverse and original number =%d\n",Reverse number);

        }
    }
    return 0;
}
