/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:5
topic:2d array and string 
*/
#include<stdio.h>
void swap(int *a,int *b){

int temp=*a;
 *a=*b;
 *b=temp;
}


int main(){
 int r,i,j;
 
 printf("enter the number of elements in row\n");
scanf("%d",&r);

int A[r][r];
for(i=0;i<r;i++){
      for(j=0;j<r;j++){
     scanf("%d",&A[i][j]);
}
}



for(i=0;i<r;i++){
      for(j=i;j<r;j++){
    swap(&A[i][j],&A[j][i]);
}
}
  
printf("the column major order is\n");
for(i=0;i<r;i++){
      for(j=0;j<r;j++){
     printf("%d\t",A[i][j]);
}
}

return 0;
}
