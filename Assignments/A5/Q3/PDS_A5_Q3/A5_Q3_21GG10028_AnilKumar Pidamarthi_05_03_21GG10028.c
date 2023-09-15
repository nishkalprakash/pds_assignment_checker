#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,roll[10];
  float y,cg[10],cgsum;

  printf("enter no of students/ ");
  scanf("%d",&n);

  printf("enter their roll no and cgpa\n");

  for(int i=0;i<n;i++){
    scanf("%d %f",&roll[i],&cg[i]);
  }


  for(int i=0;i<n;i++){            
    printf("roll:%d,CGPA: %f \n",roll[i],cg[i]);
  }

   for(int i=0;i<n;i++){           
     cgsum+=cg[i];
  }
 
   printf("their average cgpa is %f \n",cgsum/n);

    for(int i=0;i<n;i++){            //rounding cgpa//
      cg[i]*=100;
      x=cg[i];
      cg[i]=x/100;
      
  }


    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
    if(cg[i]==cg[j]){
      printf("roll:%d CGPA:%.2f \n",roll[j],cg[j]);}
      }
    }





   return 0;
 }
