#include<stdio.h>


int main
()
{
    int i=0,j,n,a, flag;
    int f[1000];


    f[0]=0;
    f[1]=1;
    printf("Value of n: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("please enter positive number");
    }



    for(int a=2;a<300;a++){
    f[a] = f[a-1] + f[a-2];
    }
    for(int a=0; a<300; a++)
    if(f[a]==n){
        printf("%d is a fibonacci number ", n);
    }


}
