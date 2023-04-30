#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j, p, result_1=0, result_2=0, q, r,t, s;
    int counter=0, result=0;

    scanf("%d", &n);
    p=n;

    while(p>0)
    {
        p=p/10;
        counter++;
    }

    if(n%2==1)             //code part 2 starts
    {
        for(i=1; i<=counter ; i++)
        {
            q=p/(pow(10,(counter-i)));
            printf("%d ", q);
            p=n;
        }
    }
    else
    {
        for(j=0; 0<counter-j ; j++)
        {
            t=(pow(10,(counter-j)));
            r = p%t ;
            printf("%d ", r);
            p=n;
        }

    } //code part 2 ends

    printf("\n");

    while(p!=0)
    {
        s=p%10;
        result= 10*result+ s;
        p=p/10;
    }
    printf("Reverse Number=%d\n", result);
    printf("Difference between orignal and reverse number is:%d", abs(n-result));
}

