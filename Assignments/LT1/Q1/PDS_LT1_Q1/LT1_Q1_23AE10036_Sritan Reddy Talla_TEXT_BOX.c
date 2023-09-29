//23AE10036
//T.sritan

#include<stdio.h>
int main(){
  int n,i,sum=0;
 int x = n;
 int y= n;
  printf("enter a number\n");
 scanf("%d",&n);

 printf("the entered no is %d \n",n);
  printf("encoded");
 
  i=n;
 while( i>0){
   i=n;
   i=n%10;
   i+=1;
   sum+=i;
                     //will print encoded no
   printf("%d",i);
   n=n/10;
   i=n;

 }
 printf("\n ");
  printf("with check sum  ");

  i=x;
  while( i>0){
   i=x;
   i=x%10;
   i+=1;
   
                    //print encoded +sum
   printf("%d",i);
   x=x/10;
   i=x;

 }
  if(sum<10){printf("0%d",sum);}
  else{printf("%d",sum);}

  printf("\n ");
  printf("double encoded");



 i=y;
  while( i>0){
   i=y;
   i=y%10;
    i+=1;
 
                    //part c
   printf("%d",i);
    printf("0");
   
   y=y/10;
   i=y; }

  i=sum;
  while( i>0){
   i=sum;
   i=sum%10;
   
 
                    //part c
   printf("%d",i);
    printf("0");
   
   sum=sum/10;
   i=sum;

 }
 


 
  return 0;
}