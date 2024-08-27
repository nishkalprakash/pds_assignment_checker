#include<stdio.h>
int main()
{
  int max1=0,max2=0,a=0,b,c;
  while(a>=0){
     b=max2;
     c=max1;
     max2=max1;
     printf("Enter a number");
     scanf("%d",&a);
     max1=a;
     if (a<0) break;
     else {
       if (max1>max2){
          if (max2==0){
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: Not yet entered");}
          else{
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: %d",max2);}
       } 
       else if ((max1<max2) && (max1<b)){
          max1=max2;
          max2=b;
          if (max2==0){
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: Not yet entered");}
          else{
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: %d",max2);}}
       else if ((max1<max2) && (max1>b)){
          max2=max1;
          max1=c;
          if (max2==0){
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: Not yet entered");}
          else{
             printf("\n Largest number: %d",max1);
             printf("\n Second larggest numbber: %d",max2);}}}
   }          
  return 0;           
}           
     
     
  
