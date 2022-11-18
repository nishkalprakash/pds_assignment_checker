/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>

int rowmax(int **a,int row,int col,int ele){//to find if max in row
    //ele is the element to check, row is the row no along which we check
 int max=a[row][0];
  for(int i=0;i<col;i++){//traversing along the same row
    if(a[row][i]>max)max=a[row][i];
 }
 if(max!=ele)return 0;//it is max
 else return 1;//false statement
}

int colmin(int **a,int row,int col,int ele){//to find if min in column
 int min=a[0][col];
 for(int i=0;i<row;i++){//traversing along the same column
   if(a[i][col]<min)min=a[i][col];

 }
 if(min!=ele)return 0;//it is min
 else return 1;//false statement
}

int rowmin(int **a,int row,int col,int ele){//to find if max in row
 int min=a[row][0];
 for(int i=0;i<col;i++){//traversing along the same column
   if(a[row][i]<min)min=a[row][i];
 }
 if(min==ele)return 1;//it is min
 return 0;//false statement
 }

int colmax(int **a,int row,int col,int ele){//to find if max in column
 int max=a[0][col];
 for(int i=0;i<row;i++){//traversing along the same column
   if(a[i][col]>max)max=a[i][col];

 }
 if(max==ele)return 1;//it is max,true statement
 return 0;//false statement
}


int uniquerow(int **a,int row,int col,int ele){//unique in the row
 int count=0;
 for(int i=0;i<col;i++){//traversing along the same column
      if(a[row][i]==ele)count++;}
 if(count >1)return 0;//unique is false
 return 1;//it is unique
}


int uniquecol(int **a,int row,int col,int ele){//unique in the column
 int count=0;
 for(int i=0;i<row;i++){//traversing along the same column
   if(a[i][col]==ele)count++;}//count no of occurances
 if(count >1)return 0;//unique is false
 return 1;//it is unique
}



int main(){
 int r,c,flag=0;//row and column
 printf("enter no of row and column");
 scanf("%d%d",&r,&c);
 int **arr=(int **)malloc(r*sizeof(int *));//dynamically creating the array
 for(int i=0;i<r;i++)arr[i]=(int *)malloc(c*sizeof(int));
 fflush(stdin);
 printf("enter values to fill the %dx%d array:\n",r,c);
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
 }
 printf("the array entered is\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d\t",arr[i][j]);
    }printf("\n");
 }
 printf("\n Saddle points:\n");
 //to check maxrow,min col condition
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(rowmax(arr,i,c,arr[i][j])&&(colmin(arr,r,j,arr[i][j])==1)&&uniquecol(arr,r,j,arr[i][j])&&uniquerow(arr,i,c,arr[i][j])){
            printf("a[%d][%d]=%d\t",i,j,arr[i][j]);
            flag=1;
        }
    }
 }
 //to check min row, max col condition

 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if((rowmin(arr,i,c,arr[i][j])==1)&&(colmax(arr,r,j,arr[i][j])==1)&&uniquecol(arr,r,j,arr[i][j])&&uniquerow(arr,i,c,arr[i][j])){
            printf("a[%d][%d]=%d\t",i,j,arr[i][j]);
            flag=1;
        }
    }
 }
 if (flag==0)printf("\nNo saddle point");
 return 0;
}
