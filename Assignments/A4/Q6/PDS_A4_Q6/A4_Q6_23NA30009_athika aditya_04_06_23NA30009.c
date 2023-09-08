//roll no- 23NA30009
//athika

#include<stdio.h>
#include<stdlib.h>

int main (){

  int sum=0;

  printf("20 random integers between 5000 and 6000:\n");
  int min =32;
  for (int i=1;i<=20;i++){
     int var;
     int sum=0;
     

     var=rand()%1000+ 5000;
     printf("%d\n",var);

     while(var>0){
       sum=sum*10+var%10;
       var=var/10;
     }
     printf("sum of digits of this number is :%d\n",sum);

     if (sum<min){
       min=sum;
     }
 }
  printf("minimum of all sum is: %d",min);
return 0;
}
  
