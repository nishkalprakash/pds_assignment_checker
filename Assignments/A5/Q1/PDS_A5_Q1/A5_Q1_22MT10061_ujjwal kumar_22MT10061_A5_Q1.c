#include<stdio.h>
#include <math.h>
int power(int x,int n);
int fact();

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    int i=0;
    float sum;
     while(i<=n)
     {float k;
    
     k=pow(x,i)/fact(i);
     sum=sum+k;
     i++;
     




     }
       printf("the sum of series is %f\n",sum);
    
    return 0;
}
int fact(int n)
    {
        int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
    }
   