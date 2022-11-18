/*Name- Pushkaraj Jagtap
  Roll- 21MF3IM12
  Codeblock*/

#include<stdio.h>
int main(){
  int a[25][25],i,j;
  printf("Enter the image matrix element");
  for(i=0;i<25;i++){
    for(j=0;j<25;j++){
      scanf("%d",a[i][j]);
    }
   }
    for(i=0;i<25;i++){
      for(j=0;j<25;j++){
        if((a[i][j]==a[i-1][j-1] || a[i][j]==a[i-1][j] || a[i][j]==a[i][j-1] || a[i][j]==a[i+1][j+1] || a[i][j]==a[i+1][j] || a[i][j]==a[i][j+1] || a[i][j]==a[i-1][j+1] || a[i][j]==a[i+1][j-1])) {
        a[i][j]=a[i-1][j-1]=a[i-1][j]=a[i][j-1]=a[i+1][j+1]=a[i+1][j]=a[i][j+1]=a[i-1][j+1]=a[i+1][j-1]=i;
     }
    }

     for(i=0;i<25;i++){
      for(j=0;j<25;j++){
         printf("The new matrix is \n %d",a[i][j]);
      }
     }
}
}
