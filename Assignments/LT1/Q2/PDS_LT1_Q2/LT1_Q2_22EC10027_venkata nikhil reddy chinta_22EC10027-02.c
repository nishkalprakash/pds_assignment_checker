#include<stdio.h>
int main(){
int n,s=0,diff,a,p,b,s1,q=10;
printf("\ngive a number which has no of digits greater or equal to 1 : ");
scanf("%d" , &n);
a=n;
while(n>0){
    s=(s*10)+n%10;
    n=n/10;
}
printf("\nthe reverse number is :%d\n" , s);

diff=s-a;
if(diff<0){
    diff=(-1)*diff;
}

printf("\nthe difference between the numbers is %d\n" , diff);
n=a;
p=10;
if(n%2==1){
    while(n>0&&(a*10)/p>0){

    n=n%p;
    printf("\t%d" , n);
    p=p*10;
    n=a;

    }

}
n=a;
 while(n>0){
    s1=(s1*10)+n%10;
    n=n/10;
}
b=s1;
if(n%2==0){
    while(s1>0&&((a*10)/q)>0){

    s1=s1%q;
    printf("\t%d" , s1);
    q=q*10;
    s1=b;
}
}

   return 0;
}
