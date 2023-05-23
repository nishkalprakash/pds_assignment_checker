#include<stdio.h>
#include<stdlib.h>
#include<time.h>

  int main(){

  int *a,n;
  int sum=0,count=0;
  printf ("Enter the limit:\n");
   srand(time(0));
  scanf("%d",&n);

  time_t t;
 for(int i=0;i<n;i++){
  a[i] = 2+ rand()%1000;
 }


  printf("%d-random number array:",n);
 for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}


 for(int i=0;i<n;i++){
   for(int j=1;j<a[i];j++){
    if(a[i]%j==0) sum=sum+j;

 if(a[i]==sum)  {  count++;
        printf("%d,",sum);}

   } }
 if(count==1) printf("is the perfect number.");
 if(count==0) printf("no perfect number found.");
 if(count>1) printf("are the perfect numbers.");



return 0;



  }
