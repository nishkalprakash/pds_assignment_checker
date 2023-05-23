/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 7
Question :: 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int perfect(int n){
    int sum=0;
    for (int j=1;j<n;j++){
        if (n%j==0) sum+=j;
    }
    if (sum==n) return 1;
    else return 0;
}
int main(){
   int *a;
   int flag=0;
   int n;
   int p=2;
   int q=1000;
   scanf("%d",&n);
   a = (int*)malloc(n*sizeof(int));
   time_t t;
   srand(time(t));
   printf("%d-random number array: ",n);
   for (int i=0;i<n;i++){
       a[i] = p+rand()%q;
       printf("%d ",a[i]);
   }
   printf("\n");
   for (int k=0;k<n;k++){
       if (perfect(a[k])==1) {
            printf("%d ",a[k]);
            flag++;
       }
   }
   if (flag==0) printf("No perfect number found");
   else if (flag==1) printf("is a perfect number");
   else printf("are perfect numbers");
}
