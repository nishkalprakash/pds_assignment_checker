#include<stdio.h>
#include<math.h>
int main(){
    int n,d,r=0,m=0;
    printf("enter the integer:");
    scanf("%d",&n);
    int a=n;
    if(a%2==0) printf("\n most significant digits to least significant digits:");
    else printf("\n least significant digits to most significant digits:%d ",a);
    while(n!=0){
        d=n%10;
        r=r*10+d;
        n=n/10;

    }
    int x=a;
    for (int i=d;x!=0;i++){
        x=x/10;
        m=(m*x)+(pow(10,i));
        if (x!=0 && a%2==0) printf("%d ",r);
        else printf("%d ",m);

    }


    printf(" \n reverse number=%d ",r);
    printf("\n difference between reverse and original number:%d",r-a);

return 0;
}
