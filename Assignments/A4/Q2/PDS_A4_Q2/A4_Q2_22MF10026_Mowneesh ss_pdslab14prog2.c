#include <stdio.h>
int main()
{
    int n,f,b;
    printf("Enter the number: \n");
    scanf("%d",&n);
    f = 10;
    b = 0;
    if(n>0){
        while(n>0){
        b+=(n%f);
        n=n/10;
    }
    printf("%d",b);
    }
    else{
        while(n<0){
        b+=(n%f);
        n=n/10;
    }
    printf("%d",b);
    }
    return 0;
}
