/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Visual Studio Code
   OS			: MS Windows 11
   */

  #include<stdio.h>

  int main(void){
      //assuming 10 data points
      int x[10];
      int y[10];
      //taking input
      int i;
      printf("x -coordinates:");  
      for(i = 0; i < 10; i++){
          scanf("%d",&x[i]);
      }
      printf("\ny -coordinates:");
      for(i = 0; i < 10; i++){
          scanf("%d",&y[i]);
      }
      //main program
      float x_,y_,m,b,sum,sum1;
      
      //calculating mean
      
      sum = 0.0;
      for(i=0 ; i < 10; i++){
          sum = sum + x[i];
      }
      x_ = sum/10.0;
      sum = 0;
      for(i=0 ; i < 10; i++){
          sum = sum + y[i];
      }
      y_ = sum/10.0;
      //calculating slope
      sum = 0;
      sum1 = 0;
      for(i=0 ; i < 10; i++){
          sum = sum + (x[i]-x_)*(y[i]-y_);
      }
      for(i=0 ; i < 10; i++){
          sum1 = sum1 + (x[i]-x_)*(x[i]-x_);
      }
      m = sum/sum1;
      //calculating intercept
      b = y_ - m*x_;
      //output
      printf("\nm = %.1f, b = %.1f, line equation y = %.1fx + %.1f",m,b,m,b);

return 0;
  }