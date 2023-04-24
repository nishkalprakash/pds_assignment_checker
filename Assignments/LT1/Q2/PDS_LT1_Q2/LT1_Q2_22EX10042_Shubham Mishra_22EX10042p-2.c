#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,rev=0,q,a,b,x,y;
    printf("the integer n is");
    scanf("%d",&n);
    q=n;
    while (q!=0)
    {
       rem=q%10;
       rev=rev*10+rem;
       q=q/10;
       a=a+1;
    }

    q=n;
    if(n%2==1)
    {

        printf("least significant digit to most significant digit :");
         y=pow(10,a);
        while(q!=0)
        {


            b=n%y;
            a--;
            y=pow(10,a);

            n=n%y;
            printf(", %d",b);
            q=q/10;




        }
    }

    }
    int d;
    d=rev-n;
    if(d<0)
    {
        d=d*(-1);
    }
    printf("reverse no is %d",rev);
    printf("the absolute difference between integer and reverse of integer is : %d",d);
}
