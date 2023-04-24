//sec 2
//Assignment no-5
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-2
#include<stdio.h>
#include<math.h>
int main(){
   int n, count1=0, count2=0;int s=0;
   printf("Enter a number:");
   scanf("%d", &n);

   if(n>0){
    n=n;
   }
   else{
    n=-n;
   }
   int p=n;
     if(n%2==0){
        while(n>0){
            count1++;
            n=n/10;
        }
        n=p;
        printf("Most significant digits to least significant digits:");
        for(int i=count1; i>0; i--){
            int digit=n/pow(10, i-1);
            printf("%d\t", digit);

        }
        while(n>0){
            int d=n%10;
            s=s*10+d;
            n=n/10;
        }
        n=p;
        printf("\n");
        printf("Reverse number:%d\n", s);
        if(n>s){
            printf("Difference between reverse and original number:%d", n-s);
        }
        else{
            printf("Difference between reverse and original number:%d", s-n);
        }
     }
     else{
       while(n>0){
            count2++;
            n=n/10;
       }
       n=p;
       printf("Least significant digits to most significant digits:");
       for(int i=count2; i>0; i--){
            int q=pow(10, i);
            int digit=n%q;
            printf("%d\t", digit);

        }
        while(n>0){
            int d=n%10;
            s=s*10+d;
            n=n/10;
        }
        n=p;
        printf("\n");
        printf("Reverse number:%d\n", s);
        if(n>s){
            printf("Difference between reverse and original number:%d", n-s);
        }
        else{
            printf("Difference between reverse and original number:%d", s-n);
        }

     }
  return 0;








   }

















