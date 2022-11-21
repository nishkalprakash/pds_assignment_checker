#include<stdio.h>
#include<math.h>
int main()
{
      float Y,n;
      float s,g;    
      scanf("%d %d",&Y,&n);    //to input height y and n.
      printf("%d %d",Y,n);
      g=9.78;
      float temp=pow(0.25,n);
      s=Y+(1-Y*0.5*temp )/0.75;
      printf("the soln is %f",s) ;

     return 0;



}
