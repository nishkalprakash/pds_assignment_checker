#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i,z;
  printf("Enter the number of random number you have to generate =");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    z=rand()%99+0;
    printf("%d /n",z);
  }
   if(z>=0&&z<=9){
     printf("%f",(i/n)*100);
   }
   else if(z>=10&&z<=19){
     printf("%f",(i/n)*100);
   }
   else if(z>=20&&z<=29){
     printf("%f",(i/n)*100);
   }
   else if(z>=30&&z<=39){
     printf("%f",(i/n)*100);
   }
   else if(z>=40&&z<=49){
     printf("%f",(i/n)*100);
   }
   else if(z>=50&&z<=59){
     printf("%f",(i/n)*100);
   }
   else if(z>=60&&z<=69){
     printf("%f",(i/n)*100);
   }
   else if(z>=70&&z<79){
     printf("%f",(i/n)*100);
   }
   else if(z>=80&&z<=89){
     printf("%f",(i/n)*100);
   }
   else if(z>=90&&z<=99){
     printf("%f",(i/n)*100);
   }
}
  
  
