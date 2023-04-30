#include<stdio.h>
int primecheck(int i){
    int j,count=0;
  for(j=1;j<=i;j++){
   if (i%j==0)count++;
  }return count;}
 int main(){
     int p,n,s,l,q,w,N,f=0;
     printf ("Enter a number you want to check:\n");
     scanf("%d",&n);
     N=n;
     p=primecheck(n);
    // if (p==2)printf ("Entered no %d is a prime no:\n",n);
    // if (p!=2)printf ("Entered no %d is not a prime no:\n",n);
     //printf("%d",n);
    if(n%2==0&&n>=4){
        for(s=1;s<=n;s++){
         for(l=1;l<=n;l++){
        q=primecheck(s);
        w=primecheck(l);
        if(f<1){
          if(q==2&&w==2&&(N==s+l)&&s<=l){printf("%d,%d\n",s,l);
          f++;}}
         }
        }
        if(n%2!=0||n==2) printf("-1");
     }return 0;}
