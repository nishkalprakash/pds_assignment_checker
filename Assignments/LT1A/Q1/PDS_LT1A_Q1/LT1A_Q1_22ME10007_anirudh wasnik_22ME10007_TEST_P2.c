#include<stdio.h>

int main()
 {
int a;
int b;
int n;
int sum;
printf("enter a number");
scanf("%d",&a);
for(b=1;b<a;b++){
   if(a%b==0){
   for(n=1,sum=0;n<b;n++){
      if(b%n==0){
      sum=sum+n;
      if(sum==b){
      printf("%d",sum);}
   
        }
      } 
   }
 
 
  
   
   
   
   
  
}



if(a<2){
printf("invalid input");}

return 0;    
}
