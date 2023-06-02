#include<stdio.h>

int main(){
    int n;
    printf("enter any positive integer:");
   scanf("%d", &n);
   printf("value of n: %d\n",n);
   if(n<0)
   {printf("please give positive number");

   }
     long long int f[101];
     int i;
     f[0]=0;
     f[1]=1;
     for(i=2;i<101;i++){
      f[i] =  f[i - 1] + f[i - 2]; // fibonacci series
     }
    i=0;
    while(n>=f[i]){
        if(n==f[i]){                         //check for every element till the same not found
            printf("fibonacci number");
            break;}
         else
                i++;
    }

     if(n!=f[i]){
        if(n<0) return 0;
        printf("nearest fibonacci is %d", f[i-1]);    // nearest is exactly the previous element;
     }


return 0;

}
