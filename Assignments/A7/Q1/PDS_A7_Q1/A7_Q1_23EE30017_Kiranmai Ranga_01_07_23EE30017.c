//Name:Ranga Kiranmai
//Roll No:23EE30017
#include <stdio.h>
#include <stdlib.h>
int m,n;
void find_max(int sub[m][n]){
  int i,j,x,y,sum,maxsum=0;
  for(i=0;i<=m-3;i++) {
    for(j=0;j<=n-3;j++) {
      sum=sub[i][j]+sub[i][j+1]+sub[i][j+2]+sub[i+1][j]+sub[i+1][j+1]+sub[i+1][j+2]+sub[i+2][j]+sub[i+2][j+1]+sub[i+2][j+2];
      if(sum>maxsum) {
	maxsum=sum;
	x=i;
	y=j;
      }
    }
  }
  printf("The 3*3 matrix  having max sum of elements %d:\n",maxsum);
  printf("%d %d %d\n",sub[x][y],sub[x][y+1],sub[x][y+2]);
  printf("%d %d %d\n",sub[x+1][y],sub[x+1][y+1],sub[x+1][y+2]);
  printf("%d %d %d\n",sub[x+2][y],sub[x+2][y+1],sub[x+2][y+2]);
}
void find_min(int sub[m][n]){
  int i,j,x,y,sum,minsum=90;
  for(i=0;i<=m-3;i++) {
    for(j=0;j<=n-3;j++) {
      sum=sub[i][j]+sub[i][j+1]+sub[i][j+2]+sub[i+1][j]+sub[i+1][j+1]+sub[i+1][j+2]+sub[i+2][j]+sub[i+2][j+1]+sub[i+2][j+2];
      if(sum<minsum) {
	minsum=sum;
	x=i;
	y=j;
      }
    }
  }
  printf("The 3*3 matrix  having min sum of elements %d:\n",minsum);
  printf("%d %d %d\n",sub[x][y],sub[x][y+1],sub[x][y+2]);
  printf("%d %d %d\n",sub[x+1][y],sub[x+1][y+1],sub[x+1][y+2]);
  printf("%d %d %d\n",sub[x+2][y],sub[x+2][y+1],sub[x+2][y+2]);
}
void find_max_min(int sub[m][n]) {
  int i,j,min=11,max_min=0;
  int a[m];
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      if(sub[i][j]<min) {
	min=sub[i][j];
      }
    }
    a[i]=min;
    min=11;
  }
  printf("Min for the rows:\n");
  for(i=0;i<m;i++) {
    printf("%d ",a[i]);
  }
  for(i=0;i<m;i++) {
    if(a[i]>max_min) max_min=a[i];
  }
  printf("\nmax_min=%d\n",max_min);
}
void find_min_max(int sub[m][n]) {
  int i,j,max=0,min_max=11;
  int a[m];
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      if(sub[i][j]>max) {
	max=sub[i][j];
      }
    }
    a[i]=max;
    max=0;
  }
  printf("Max for the rows:\n");
  for(i=0;i<m;i++) {
    printf("%d ",a[i]);
  }
  for(i=0;i<m;i++) {
    if(a[i]<min_max) min_max=a[i];
  }
  printf("\nmin_max=%d\n",min_max);
}
int main()
{
  int i,j,data[20][20];
  while(1){
  printf("Enter the number of rows and columns respectively:\n");
  scanf("%d %d",&m,&n);
  if(m>2 && m<20 && n>2 && n<20) break;
  else {printf("The number of rows and columns should be in between 2 and 20\n");
    continue;}
  }
  int sub[m][n];
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      sub[i][j]=rand()%11;
    }
  }
  printf("The submatrix is:\n");
  for(i=0;i<m;i++) {
    for(j=0;j<n;j++) {
      printf("%d ",sub[i][j]);
    }
    printf("\n");
  }
  find_max(sub);
  find_min(sub);
  find_min_max(sub);
  find_max_min(sub);
}
  
  
