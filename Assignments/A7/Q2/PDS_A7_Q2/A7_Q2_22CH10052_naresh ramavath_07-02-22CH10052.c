#include<stdio.h>
#include<math.h>
void swap(int *x,int *y){

int temp;
temp=*x;
*y=*x;
*y=temp;
return;

}
int main(){
    int *ptr;
    int **A,**B,**C,m,n,p,h,l;
    scanf("%d %d %d",&m,&n,&p);
    ptr=(int **)calloc(m, sizeof(int*));
  for(int i=0;i<m;i++){
    ptr[i]=(int *) calloc(n,sizeof(int*));
    scanf("%d",&ptr[i][j]);

  }

  int A[m][n],B[n][p],C[m][p];
  swap(&A[m][n],&B[n][p]);
  //temp=*A[][];
  //*B[][]=A[][];
  //*B[][]=temp;

}
