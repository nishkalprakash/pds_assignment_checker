#include<stdio.h>

int main(){
//thi is fibonacci sequence with each even term negetive.
    int a = 1;
    int b = 1;
    int i = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n<1){
        printf("N is invalid.");
        }
    else{
        if(n%2 == 0){
            while(i < n){
        //i am printing the odd terms (a) and adding them with the even terms.
                if(i%2 == 0){
                   printf("%d, " ,a);
                   a = a + b;
                   i++;
                   }
                if(i%2 == 1){
                   int k;
                   //same here, printing (b) just multiplied with -1.
                  k = (-1)*b;
                  printf("%d, " ,k);
                  b = a + b;
                  i++;
               }
               }
               }
           else{
               while(i < n){
        //i am printing the odd terms (a) and adding them with the even terms.
                if(i != n-1){
                if(i%2 == 0){
                   printf("%d, " ,a);
                   a = a + b;
                   i++;
                   }
                if(i%2 == 1){
                   int k;
                   //same here, printing (b) just multiplied with -1.
                  k = (-1)*b;
                  printf("%d, " ,k);
                  b = a + b;
                  i++;
               }
               }
               if(i == n - 1){
               printf("%d", a);
               break;
               }    
           }
           }
    return 0;
    }
}
