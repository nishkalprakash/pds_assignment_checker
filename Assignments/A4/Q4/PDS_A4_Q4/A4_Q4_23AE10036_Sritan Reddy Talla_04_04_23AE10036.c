#include<stdio.h>
#include<stdlib.h>
int main(){
  int i=1;
  int a,b,c,d;
  int x;

  
  do{

    printf("enter a number\n");
    scanf("%d",&x);
    if (x==5){
      a=x;
      printf("enter a number\n");
      scanf("%d",&b);
         if(b==1){
                  printf("enter a number\n");
                   scanf("%d",&c);

                  printf("enter a number\n");
                   scanf("%d",&d);
                   
                   if (d==7){
                       printf("pattern found");
                       break;}
                    }
              }





  }while(i>0);



  
    
    return 0;
}
