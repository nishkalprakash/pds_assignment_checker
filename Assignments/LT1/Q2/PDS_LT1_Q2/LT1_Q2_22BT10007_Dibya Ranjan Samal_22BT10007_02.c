#include<stdio.h>
int main(){
    int n ,c, reverse = 0 ;
    printf("Enter the value of n: ");
    scanf("&d",&n);
    int q =1;
    if(n<0){
        q=-1;
        n=n*(-1);
    }
    if(n%2==1){
        printf("the most significant digits to the least significant digits");
        int temp1=n,temp2=n,c=0,t=1,t1=1,d,ld;
        while(temp1>0){
            c++;
            temp1=temp1/10;
            t=t*10;
        }
        t=t/10;
        while (c>0)
        {
            d=temp2/t;
            printf("%d",d);
            ld=temp1%10;
            temp1= temp1/10;
            reverse=ld*t+reverse;
            t=t/10;
            c--;
        }
    }
    else{
            while(temp1>0){
            c++;
            temp1=temp1/10;
             int t=t*10;
        }
           while(c>0){
          int d=temp%t;
        printf("%d",d);
         int ld=temp%10;
         int temp3/=10;
         int reverse=ld*t/10+reverse;
         int=t/10;
         int c--;
    }
    }
    printf("\n");
    reverse = reverse*q;
    printf("reverse number = %d\n",reverse);
    reverse*=q;
    int difference = 0;
    difference= reverse -n;
    if(differnce<0)
        differnce=differnce*(-1);
    printf("difference= %d",differnce);
    return 0;}




return 0;}
