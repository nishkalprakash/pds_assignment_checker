#include<stdio.h>
 
 typedef struct employee{
   char name[100];
   float wages;
   float presentday;
  
 } employee;
 

 int main()
 {
  int n;
  printf("enter the number of employee:");
  scanf("%d",&n);
  
  employee emp[n];
  float BP,HRA,TA;
  for(int i=0;i<n;i++){
  printf("enter name:");
  scanf("%s",emp[i].name);
  printf("enter wages per day:");
  scanf("%f",&emp[i].wages);
  printf("enter present day:");
  scanf("%f",&emp[i].presentday);
  }
    for(int i=0;i<n;i++){  
     float BP,HRA,TA;
   BP=(emp[i].wages)*(emp[i].presentday);
   if(BP<1000){
   HRA = 0.12*BP;
   }
   else{
   HRA = 0.20*BP;
   }
  
   if(emp[i].presentday>19){
   TA=0.10*BP;
   }
   else{
   TA=0;
   }
     float n=BP + HRA +TA;
    printf("%s\n",emp[i].name);
    printf("net pay= %f\n",n);
    
   }
   return 0;
 }
 
 
