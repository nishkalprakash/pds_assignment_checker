#include<stdio.h>
int primecheck(int n){
    int i,t=0;
    for(i=2;i*i>=n;i++){
        if(n%i==0){
            t++;
        }
        if(t==0) return 1;
        else return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=primecheck(n);
    if(p==1){
    printf("prime no.");
    }
    if(n%2==1 || n<4)
    {

        printf("%d",-1);
       return ;
    }

    for (int i=1;i<=n;i++){
        int q=primecheck(i);
        int w=primecheck(n-i);
        if(q==1 && w==1){
            printf("%d,%d",i,n-i);

            }
        }

    return 0;

}
