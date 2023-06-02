#include<stdio.h>
int main()
{
    int n,k=1,s=0;
    int fab[400];//array to store fibbonaci series of n number
    printf("enter the number\n");
    scanf("%d",&n);//to check if it is fibannaci number
    if(n<0)printf("please give positive number\n");
    if(n>0)
    {
        fab[0]=0;
        fab[1]=1;
        for(int i=2;i<400;i++)
        {
            fab[i]=fab[i-1]+fab[i-2];
            if(fab[i]==n)
            {
                printf("%d is a fibonacci number\n",n);
                break;
            }
            else if(fab[i]>n){
                int d1= n - fab[i - 1];
                int d2 = fab[i] - n;
                if(d1>d2)
                    printf("nearest fibonnaci number is %d",fab[i]);
                else{
                    printf("nearest fibonaaci number is %d",fab[i-1]);
                }
                break;
            }

}
}
return 0;
}
