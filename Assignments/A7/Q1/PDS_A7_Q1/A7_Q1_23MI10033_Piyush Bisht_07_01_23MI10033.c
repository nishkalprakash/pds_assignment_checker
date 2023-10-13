//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>

void findMax(int ar[][20],int r,int c);
void findMin(int ar[][20],int r,int c);
void findMinMax(int ar[][20], int r, int c);
void findMaxMin(int ar[][20], int r, int c);

int main()
{
  int data[20][20], m, n;
  
  printf("Enter no. of rows: ");                //gives prompt to enter no. of rows of matrix and if rows not between 2 to 20, asks user to enter again 
  scanf("%d",&m);
  while ((m>20)||(m<3)){
     printf("\nEnter again: ");
     scanf("%d",&m);
  }
  printf("\nEnter no. of columns: ");             //gives prompt to enter no. of columns of matrix and if rows not between 2 to 20, asks user to enter again 
  scanf("%d",&n);
  while ((n>20)||(n<3)){
     printf("\nEnter again: ");
     scanf("%d",&n);
  }
  printf("\nMatrix:");
  for (int i=0;i<n;i++){                        //fills the matrix with random no's between 0 to 10 and also prints them 
    printf("\n[");
    for (int j=0;j<n;j++){
      data[i][j]=rand()%11;
      printf("%d  ",data[i][j]);
    }
    printf("]");
  }
  findMax(data,m,n);
  findMin(data,m,n);
  findMaxMin(data,m,n);
  findMinMax(data,m,n);
  return 0;
}

void findMax(int ar[][20],int r,int c){                 //finds the maximum sum of 3x3 matrix in the given matrix and prints it 
  int sum, maxsum=0, a, b;
  for (int i=0;i<r-2;i++){                              //iterates and finds the sum of every 3x3 matrix that can be formed using the given matrix
    for (int j=0;j<c-2;j++){
      sum=0;
      for (int k=0;k<3;k++){
	for (int l=0;l<3;l++){
	  sum+=ar[i+k][j+l];
	}
      }
      if (sum>maxsum){                                 //compares the maxsum retained till execution to the new sum and saves the greater of the two and also saves the coordinates of the first element 0,0 of the 3x3 matrix
	maxsum=sum;
	a=i;
	b=j;
      }
    }
  }
  printf("\n\nMax Submatrix: ");                      //prints the 3x3 matrix with maximum sum 
  for (int k=0;k<3;k++){
    printf("\n[ ");
    for (int l=0;l<3;l++){
      printf("%d  ",ar[a+k][b+l]);
    }
    printf("]");
  }
  printf("\n Sum = %d", maxsum);                      //prints the maxsum
  return;
}
void findMin(int ar[][20],int r,int c){               //finds the maximum sum of 3x3 matrix in the given matrix and prints it
  int sum=0, minsum=100, a, b;
  for (int i=0;i<r-2;i++){
    for (int j=0;j<c-2;j++){
      sum=0;
      for (int k=0;k<3;k++){                          //iterates and finds the sum of every 3x3 matrix that can be formed using the given matrix
	for (int l=0;l<3;l++){
	  sum+=ar[i+k][j+l];
	}
      }
      if (sum<minsum){                                //compares the minsum retained till execution to the new sum and saves the lesser of the two and also saves the coordinates of the first element 0,0 of the 3x3 matrix 
	minsum=sum;
	a=i;
	b=j;
      }
    }
  }
  printf("\n\nMin Submatrix: ");                      //prints the 3x3 matrix with minimum sum 
  for (int k=0;k<3;k++){
    printf("\n[ ");
    for (int l=0;l<3;l++){
      printf("%d  ",ar[a+k][b+l]);
    }
    printf("]");
  }
  printf("\n Sum = %d", minsum);                      //prints the minsum
  return;
}
void findMaxMin(int ar[][20], int r, int c){
  int max[r],col[r],minmax=11,a,b;
  for (int i=0;i<r;i++){                              
    int temp=0;
    for (int j=0;j<c;j++){                            //saves the maximum no. encountered in execution in an array and saves its column in another array
      if (ar[i][j]>temp) {
	temp=ar[i][j];
	a=j;
      }
    }
    max[i]=temp;
    col[i]=a;
  }
  for (int i=0;i<r;i++){                              //finds minimum of the maximum no's of each rows and saves its row no. in a variable
    if (max[i]<minmax){
      minmax=max[i];
      b=i;
    }
  }
  printf("\n\nminMax=%d, present in row %d,column %d",minmax,b,col[b]);
  return;
}
void findMinMax(int ar[][20], int r, int c){
  int min[r],col[r],maxmin=-1,a,b;
  for (int i=0;i<r;i++){
    int temp=11;
    for (int j=0;j<c;j++){                             //saves the minimum no. encountered in execution in an array and saves its column in another array
      if (ar[i][j]<temp) {
	temp=ar[i][j];
	a=j;
      }
    }
    min[i]=temp;
    col[i]=a;
  }
  for (int i=0;i<r;i++){                               //finds maximum of the minimum no's of each rows and saves its row no. in a variable
    if (maxmin<min[i]){
      maxmin=min[i];
      b=i;
    }
  }
  printf("\n\nmaxMin=%d, present in row %d,column %d",maxmin,b,col[b]);
  return;
}
 
 
    
  
    
      
  

  
  
  
	  
	  
    
  
      
  
  
  
