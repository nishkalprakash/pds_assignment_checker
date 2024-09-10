#include <stdio.h>
#include <math.h>      //TO INCLUDE SIN FUNCTION
#include <stdlib.h>    //to include rand function
#include <time.h> 
int main(){      
//Random number generator with a fixed speed (23) to check the test cases
srand(23);
int N =10,A=5,B=5;   //array size of FILTER BIN A and BIN B respectively
float FILTER[N];
int y ;
int temp[50];
int BIN_A[A] ;
int BIN_B[B];
for(int i =0;i<N;i++)
{
int x=rand()%100+1; //generating random nos. and displaying on the terminal screen in range 1 to 100
temp[i]=x;              //A temporary array to store the random values of x
}
for(int i=0;i<N;i++){
y=0;                  //y is initialized 0 again so as to calculate new y everytime
for(int k=1;k<=temp[i];k++)
{
  y=y+(pow(k,2)/2*k+1)-(pow(-1,k)*k);  //calculating y to store in filter
  }
  y=y+sin(temp[i]/3);
  FILTER[i]=y;          //storing value of y in filter
}
printf("FILTER[]:\n");  //prints the array filter in terminal screen
for(int z =0;z<N;z++)
{
printf("%f\t",FILTER[z]);
}
int k=0 ,l=0;          //counter variables to count no. of terms in bin A and B respectively
  for(int z=0;z<N;z++)
  {
   
   for(int j=0;j<N;j++)
   {
   if(k<A && l<B){     //condition so that bin a and bin b do not exceed their size limit
   if(temp[z]<FILTER[j]){  //comparing if y is smaller than any value in filter 
   BIN_A[k]=temp[z];       //storing corresponding value of x in bin a whose y is smaller than any value in filter
   k++;
   break;        //come out of the loop if once the value is find
   }
   if(temp[z]>FILTER[j])
   {
   BIN_B[l]=temp[z];      //storing corresponding value of x in bin a whose y is greater than any value in filter
   l++;
   break;
   }
   }
   }
   }
   printf("BIN_A[]:");
   for(int i =0;i<k ;i++)   //storing the values of x in bin a whose values of y is smaller than any value of filter
   {
   printf("%d\t",BIN_A[i]);
   }
   printf("BIN_B[]:");
   for(int j =0;j<l;j++)     //storing the values of x in bin a whose values of y is greater than any value of filter
   {
   printf("%d\t",BIN_B[j]);
   }
   return 0;
   }
   
   
   
   
   
  

