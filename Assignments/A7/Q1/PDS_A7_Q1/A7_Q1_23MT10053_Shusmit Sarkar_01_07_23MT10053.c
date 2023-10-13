#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void findMax(int data[][20], int m, int n){
    int max = -1;
    int sum;
    int x,y;
    for(int i=0; i<m-2; i++){
        for(int j=0; j<n-2; j++){
            sum =0;
            for(int k=0; k<3; k++){
                for(int l=0; l<3; l++) {
                    sum += data[i+k][j+l];
                }
            }
            if(sum>max)
            {
                max= sum;
                x=i;
                y=j;
            }
        }

    }
    for(int i=x; i<x+3; i++)
    {
        for(int j=y; j<y+3;j++)
            printf("%d ",data[i][j]);
        printf("\n");
    }
    printf("\nSum is %d",max);
    return;
}
void findMin(int data[][20], int m, int n){
    int min = 100000;
    int sum;
    int x,y;
    for(int i=0; i<m-2; i++){
        for(int j=0; j<n-2; j++){
            sum =0;
            for(int k=0; k<3; k++){
                for(int l=0; l<3; l++) {
                    sum += data[i+k][j+l];
                }
            }
            if(sum<min)
            {
                min= sum;
                x=i;
                y=j;
            }
        }

    }
    for(int i=x; i<x+3; i++)
    {
        for(int j=y; j<y+3;j++)
            printf("%d ",data[i][j]);
        printf("\n");
    }
    printf("\nSum is %d",min);
    return;
}
void findMinMax(int data[][20], int m, int n){
    int sum;
    int max =-1;
    int x;
    int y;
    int p, q;
    int min=11;
    for(int i=0; i<m;i++)
        {
            max = 0;
            for(int j=0; j<n; j++) {
                    if(max<data[i][j])
                    {
                        max =  data[i][j];
                        x = i;
                        y = j;
                    }
            }
            if (max<min)
            {
                min = max;
                p = x;
                q = y;
            }
        }
    printf("minMax = %d, present in row %d, column %d ",min,p,q);
}
void findMaxMin(int data[][20], int m, int n){
    int sum;
    int max =-1;
    int x;
    int y;
    int p, q;
    int min=11;
    for(int i=0; i<m;i++)
        {
            min = 11;
            for(int j=0; j<n; j++) {
                    if(min>data[i][j])
                    {
                        min =  data[i][j];
                        x = i;
                        y = j;
                    }
            }
            if (min>max)
            {
                max = min;
                p = x;
                q = y;
            }
        }
    printf("maxMin = %d, present in row %d, column %d ",max,p,q);
}
int main(){
    int data[20][20];
    int m,n;
    printf("Enter rows and columns ");
    scanf("%d",&m);
    scanf("%d",&n);
    data[m][n]; 
    if(m<2 || m>20 || n<2 || n>20) return 0;
        for(int i=0; i<m;i++)
        {
            for(int j=0; j<n; j++)
            {
                data[i][j] = (rand()%11);
            }
        }
  for(int i=0; i<m;i++)
        {
            for(int j=0; j<n; j++) printf("%d ", data[i][j]);
        printf("\n");
        }
  printf("\nMax Submatrix is \n");
  findMax(data,m,n);
  printf("\nMin Submatrix is \n");
  findMin(data,m,n);
  printf("\n");
  findMinMax(data,m,n);
  printf("\n");
  findMaxMin(data,m,n);

  return 0;
}
