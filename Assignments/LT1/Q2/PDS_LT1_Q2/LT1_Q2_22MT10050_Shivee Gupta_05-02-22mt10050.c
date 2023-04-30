#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    if(n%2==1){

    }
    if(n%2==0){
        int temp=n;
        while(temp>0) {
            printf("%d\n",temp);
            temp = temp/10;

        }
    }
    int rev=0,tem=n,b;
    while (tem>0){
       b=tem%10;
       rev = rev*10 + b;
       tem = tem/10;
    }
    printf("Reverse number = %d\n",rev);
    int d = n-rev;
    if(d<0) d = -d;
    printf("Difference between reverse and original number is %d",d);
    return 0;
}
