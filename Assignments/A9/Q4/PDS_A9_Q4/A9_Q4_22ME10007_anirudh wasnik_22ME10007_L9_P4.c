#include<stdio.h>
#include<math.h>
struct employees{
      char A[36];
      float w;
      int days,numemp;
      
      };

void netpay(struct employees e1){               
      float bp,hra,ta,total;
      bp=e1.days*e1.w;
      if(bp<1000){
      hra=(12/100)*bp;}
      else{
      hra=(0.2*bp);}
      if(e1.days>19){
      ta=0.1*bp;}
      else{
      ta=0;}
      total=bp+ta+hra;
      printf("name %s\nnetpay=%f",e1.A,total);
}





int main()
{


int count;
int k,g;
printf("enter number of employeees: ");
scanf("%d",&g);
struct employees e1,e2,e3,e4,e5;
for(count=1;count<=g;count++){
      printf("enter name of employee%d:",count);                
      scanf("%s",e1.A);
      printf("enter wage per day of employee%d:",count);
      scanf("%f",&e1.w);
      printf("enter attendance employee%d:",count);
      scanf("%d",&e1.days);      
      if(count=2){
                   printf("enter name of employee%d:",count);                
      scanf("%s",e2.A);
      printf("enter wage per day of employee%d:",count);
      scanf("%f",&e2.w);
      printf("enter attendance employee%d:",count);
      scanf("%d",&e2.days); 
            }
      }

netpay(e1);
netpay(e2);                                         
return 0;

}
