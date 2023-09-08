//Roll no:<23MT10034>
//Name:<N.Chandra Siddharth>

#include<stdio.h>
#include<math.h>
int main (){
  int i,x,y;
  int sum=0;
  int low=5000;
  int high=6000;
  printf("Random Numbers are;\n");
  for(i=0;i<20;i++){
    x=rand()%(high-low+1)+low;
    for(int j=0;j<=i;j++){
    printf("number=%d\n",x);  
    y=x%10;
    sum=sum+x;
    x =x/10;
    printf("Sum=%d",sum);
    }
  }
  return 0;
}
   
    
     
    
  
