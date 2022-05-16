/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #include<time.h>
  #include<math.h>
  #include<stdlib.h>

  int main(void){
      srand(time(NULL)); 
      int n,k,p,i,j,d;
      d = 0; 
      float D = 0;
      float De = 0;
      
      printf("n = ");
      scanf("%d",&n);
      printf("\nk = ");
      scanf("%d",&k);
      for(i = 0; i < k ; i++){
          for(j = 0; j < n; j++){
              p = rand() & 1 ? -1 : 1;
              d = d + p;
          }
          D = D + (d*d);
          d = 0;
      }
      De = D/((float)k);
      printf("\n%f",sqrt(De));
      return 0;
  }