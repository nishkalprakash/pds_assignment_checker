#include<stdio.h>
int fibo(int n){
    if(n==1)
    return 1;
    if(n==0)
    return 1;
    int fibona=fibo(n-1)+fibo(n-2);
    return fibona;

}

int main(){
    int n,cou=0,bo,co,l,g;
    printf("Enter a positive integer");
    scanf("%d",&n);

if(n<0)
printf("enter a positive intger");

else{
    printf("value of n:%d\n",n);
    
            for(int i=1;i<=n;i++){
                if(fibo(i)==n){
                    cou++;
                }
                else if(fibo(i)>n)
                {
                    bo=fibo(i);
                    co=fibo(i-1);
                    break;
                }
                 }     
                      l=n-co;
            g=bo-n;       
             if(cou==1)
            printf("%d is a Fibonacci number\n",n);
        else{
            if(l<g)
                printf("the nearest fibonacci number is %d",co);
                else if(l>g)
                printf(" the nearest fibonacci number is %d",bo);
            else
printf("the nearest fibonacci number %d",co);
        }

        
}
    return 0;
}
