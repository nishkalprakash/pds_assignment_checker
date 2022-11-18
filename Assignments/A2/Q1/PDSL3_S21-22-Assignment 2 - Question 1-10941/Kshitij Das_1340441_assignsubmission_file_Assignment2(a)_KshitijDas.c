/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: VS Code
   OS			: MS Windows 11
   */

  #include <stdio.h>
  #include <math.h>

  int main(void){
      //asking user for input
      float z,s,x;
      int k,i;
      x = 0;
      printf("z = ");
      scanf("%f", &z);
      printf("\nk = ");
      scanf("%d",&k);
      s = sqrt(z);

      //performing the loop
      for(i = 1; i <= k; i++){
          z = z - s;
          if(z<0){
              z = -z;
          }
          
            
        printf("(%f,%d)",z,i);
        if(x == z){
            s = s - 1/(float)i;
        }
        else{
            s = sqrt(z);
        }
        x = z;

        //breaking out of loop if z == 0
        if(z == 0){
        break;
        }
        
    }
    return 0;
  }