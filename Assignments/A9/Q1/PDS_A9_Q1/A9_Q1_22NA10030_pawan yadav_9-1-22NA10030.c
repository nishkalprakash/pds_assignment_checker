/* name : Pawan yadav
   Roll no: 22NA10030
   Question no : 1*/

#include<stdio.h>
void check_fab(int n){
    int sum2,sum1,d1,d2,count=0;
    sum1=1;
    sum2=0;
  while(sum1<=n){
    sum1+=sum2;
    sum2=sum1-sum2;
  }
if(sum2==n) printf("%d is a fibonacci number\n",sum2),count++;
//printf("%d %d\n",sum1,sum2);
 d1=sum1-n;
 d2=n-sum2;
 if(d1<d2&&count==0) printf("Nearest fibonacci number : %d\n",sum1),count++;
 if(d1>d2&&count==0) printf("Nearest fibonacci number : %d\n",sum2),count++;
 if(d1==d2&&count==0) printf("Nearest fibonacci number : %d\n",sum2);
}

int main(){
int n=-1;
while (n<0){
scanf("%d",&n);
if(n<0)printf("please give positive number\n");
}
printf("Value of n : %d\n",n);
check_fab(n);
return 0;
}
