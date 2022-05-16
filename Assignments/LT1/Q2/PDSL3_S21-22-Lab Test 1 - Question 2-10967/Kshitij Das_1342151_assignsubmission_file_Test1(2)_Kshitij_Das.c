/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Visual Studio Code
   OS			: MS Windows 11
   */

  #include<stdio.h>

  int main(void){
      float x0,e,x1,error;
      int k ,i; //k = iteration no.

      //taking input
      printf("x0 = ");
      scanf("%f", &x0);
      printf("\ne = ");
      scanf("%f", &e);
      printf("\nmax Iteration = ");
      scanf("%d", &k);
      printf("\nIteration\tx0\t\t\tx1\t\t\tError");

      for(i = 1;i <= k; i++){
          x1 = x0 -(x0*x0*x0 - 25)/(3*x0*x0);
          if(x1-x0 < 0){
              error = x0 - x1;
          }
          else{
              error = x1 - x0;
          }
          printf("\n%d\t\t%f\t\t%f\t\t%f",i,x0,x1,error);
          if(error < e){
              break;
          }
          x0 = x1;
      }
      printf("\n\nThe square root is %f", x1);
      return 0;
  }