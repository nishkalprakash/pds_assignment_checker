#include<stdio.h>
#include<math.h>
/*NAME - NAIN ADITYA
ROLL 22AG10029 | sec 2
LAB -9 QUESTION 1*/
int main(){
    int n;int t1=0,t2=1;
    scanf("%d",&n);
    if (n<0)printf("value of n : %d\nplease give a positive number",n);
    else {int diff=0;int k;
    do{int d=diff;
      int c=t2;
      t2+=t1;
      t1=c;
      diff=abs(n-t2);
      if (t2==n){printf("value of n : %d\n%d is a fibonacci number",t2,n);break;}
      else if (diff<d) k=t2;
      }while (n>=t2);
    printf("value of n : %d\n%the nearest fibonacci number is %d",n,k);}

return 0;
}
