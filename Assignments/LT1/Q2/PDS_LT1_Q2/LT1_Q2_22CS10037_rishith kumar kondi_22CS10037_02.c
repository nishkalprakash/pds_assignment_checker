#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,s=0,k,m=0,q=0,t,g,b=0;
    printf("enter the number");
    scanf("%d",&i);
    m=i;
    if(i%2!=0){
            printf("most significant digits to leasts significant digits:");
        while(i>0){
            i=i/10;
             q=q+1;}
         for(q;q>0;q--){
        g=m/(pow(10,q-1));
        printf("%d,",g);}
    }
    if(i%2==0){
        printf("least significant digits to most significant digits:");
        while(i>0){
            i=i/10;
             b=b+1;}
              printf("%d,",m);
         for(b;b>0;b--){
               g=m/(pow(10,b-1));
            t=m-g*(pow(10,b-1));
         if(t>0){printf("%d,",t);}
         }}
       i=m;
     while(i>0){
       a=i%10;
       i=i/10;
       s=s*10+a;
    }
    k=s-m;
    if(k<0){k=k*(-1);}
    printf("\n");
    printf("the reverse is= %d and the absolute difference is =%d",s,k);
}