//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int n;int r;int p=2; int q=1000;int s=0;int c=0;
   printf("Enter the value of n:");
   scanf("%d", &n);
   int *a=(int*)malloc(n*sizeof (int));
   time_t t;
   srand(time(0));

   for(int i=0; i<n; i++){
     *(a+i)=p+rand()%q;
     printf("%d\t", *(a+i));
   }


   for(int i=0; i<n; i++){

      for(int j=1; j<*(a+i); j++){
        if(*(a+i)%j==0){
            s+=j;
        }
      }
   if(s==*(a+i)){
    printf("%d is a perfect number\n", *(a+i));
    c++;
   }
      }
      if(c==0){
        printf("No perfect number found");
      }


return 0;
}

















