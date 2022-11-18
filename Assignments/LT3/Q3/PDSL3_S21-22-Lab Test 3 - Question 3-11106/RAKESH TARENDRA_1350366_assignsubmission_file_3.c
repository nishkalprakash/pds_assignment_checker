/*
RAKESH TARENDRA
21MT30031
*/
#include<stdio.h>

void combinations(int a, int c, int d, int n)
{
int m,sum=0,i=0;
m=n;
if(a==0){
    while(m>0){
        sum=sum+m%10;
        m=m/10;
        i++;
    }
    if(n%sum!=0){
        printf("%d ",n);
    }
return;
}
 n=n*10;
 n=c+n;
 combinations(a-1,c,d,n);
 n=n-c+d;
 combinations(a-1,c,d,n);
 return;
}

 int main() {
 int c,d;
 printf("Enter c:");
 scanf("%d",&c);

 printf("Enter d:");
 scanf("%d",&d);

 printf("Numbers:\n");
 combinations(5,c,d,0);
 return 0;
}
