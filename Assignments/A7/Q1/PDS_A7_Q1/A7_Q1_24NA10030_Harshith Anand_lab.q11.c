#include<stdio.h>
int main() {
    float x, term,sum;
    int n,count;
    scanf("%f",&x);
    scanf("%d",&n);
    term = 1.0; sum = 0;
    for (count = 1; count <=n;  ++count){
         sum += term;
         term *= x/count;
       }
       printf("%f\n",sum);
       return 0;
       }  
   
