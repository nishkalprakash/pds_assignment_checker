// Program to 
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main()

{ int x,j;// defining integers
  float s1,s2,s3,s4,y; //defining float variables
 srand(10);//defining random integer
for (int i=0; i<N; i++){

				int randomnumber = rand() % 100 + 1;
				printf("random number: %d\n", randomnumber);
  				x=randomnumber;}



     int filter[N];// defining filter array
      for (int k=1; k<=x; k++) { 	
      					float s1=0;  
  	  				float s2=(k*k)/(2*k-1);//computing sigma
  	  				s1=s1+s2;
  	  					
  	  				float s3=0;
  	  				if (k%2!=0) {float s4=(-1)*k;}
  	  				else s4=k;
  	  				s3=s3+s4;// computing s3
  	  				 y=s1-s3+sin(x/3); 
  	  									
         for (int j=1; j<=N; j++)     printf("y[%d]=%lf \n",  j,y);}// generating y
          srand(10);//defining random integer
     for (int i=0; i<N; i++){

				int randomnumber = rand() % 100 + 1;
				printf("random number: %d\n", randomnumber);
  				x=randomnumber;}
  	int BIN_A[5];
  				
  	  							
  	  							
return 0;
}

