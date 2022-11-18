/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<stdlib.h>
/*stores in bins*/
void allocatebin(int *a,int **ptr,int bin,int max,int n){
int i=0,k=0;
while (i<bin){
    /*checks for all elements in a for a particular bin number i*/
      for (int j=0;j<n;j++){
          /*element of required range entered in ith bin*/
           if ((*(a+j)>((max/bin)*i+1)&&(*(a+j)<((max/bin)*(j+1))))){
               ptr[i][k]=a[j];
               /*incrementing i th bins kth element*/
               k++;
           }
      }
      /*incresing bin number*/
      i++;
}
return;
}
int main(){
int n,bin,max;
int *a;
int **ptr;
printf("Enter number of elements\n");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
for (int i=0;i<n;i++){
     scanf("%d",&a[i]);
     if (i==0){
        /*finds upper limit of range or maximum element of array*/
         max=a[i];
     }
     else if (a[i]>max){
           max=a[i];
     }
}
printf("Enter the number of bins\n");
scanf("%d",&bin);
ptr=(int **)malloc(bin*sizeof(int *));
for (int i=0;i<bin;i++){
     ptr[i]=(int *)malloc((max/bin)*sizeof(int));
}
allocatebin(a,ptr,bin,max,n);
/*prints the bins*/
for (int l=0;l<bin;l++){
      printf("bin %d",l);
     for (int m=0;m<(max/bin);m++){
          printf("%d",ptr[l][m]);
     }
     printf("\n");
}
return 0;
}
