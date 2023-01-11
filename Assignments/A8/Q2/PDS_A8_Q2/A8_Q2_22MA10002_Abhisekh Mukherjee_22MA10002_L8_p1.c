/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:1
topic:2d array and string 
*/
#include<stdio.h>
int c,r;
int check(int A[r][c],int a,int r, int b){
int max,j,count;
     
max=a;
            for(j=0;j<r;j++){
      if(A[j][b]>=max){
               count++;
           }
   }
    if(count==1){
    return 1;
}
else return 0;
            
}







int main()
{
int i,j,a,b;
printf("enter the numberof rows\n");
scanf("%d",&r);
printf("enter the numberof columns\n");
scanf("%d",&c);
int A[r][c];
int min;
for(i=0;i<r;i++){
      for(j=0;j<c;j++){
     scanf("%d",&A[i][j]);
}
}
for(i=0;i<r;i++){
  min=A[i][0];
     for(j=0;j<c;j++){
    if(A[i][j]<min){
        
         min=A[i][j];
         b=j;
    }
}
printf("%d\n",check(A,min,r,b));
   if(check(A,min,r,b)==1){
            
            
   printf("the saddle point is %d\n",A[i][b]);
       }


}












return 0;
}
