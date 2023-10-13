//ROLL NO.: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void findmax(int m,int n, int data[20][20]){
  int rowi ,columni,  maxsum=0 , rowsum=0, subsum=0;    //Declaring variables

  //Finding maximumsum submatrix
  
  for(int i=0;i<=m-3;i++){
    for(int j=0;j<=n-3;j++){
      for(int k=0;k<3;k++){
	for(int v=0;v<3;v++){
	  rowsum+=data[i+k][j+v];
	}
	subsum+=rowsum;
	rowsum=0;
      }
      if(subsum>maxsum){
	maxsum=subsum;
	rowi=i;
	columni=j;
      }
      subsum=0;
    }
  }

  //Displaying the submatrix
  printf("Displaying the submatrix with maximum sum:\n\n");
  for(int i=rowi;i<rowi+3;i++){
    for(int j=columni;j<columni+3;j++){
      printf("%d  ",data[i][j]);
    }printf("\n\n");
  }printf("\n\n\n");
}

void findmin(int m, int n, int data[20][20]){
  int rowi, columni,minsum=100,rowsum=0,subsum=0;
  //Finding minimum sum submatrix
  for(int i=0;i<=m-3;i++){
    for(int j=0;j<=n-3;j++){
      for(int k=0;k<3;k++){
	for(int v=0;v<3;v++){
	  rowsum+=data[i+k][j+v];
	}
	subsum+=rowsum;
	rowsum=0;
      }
      if(subsum<minsum){
	minsum=subsum;
	rowi=i;
	columni=j;
      }
      subsum=0;
    }
  }

  //displaying the submatrix with minsum
  printf("The submatrix with minimum sum: \n\n");
  for(int i=rowi;i<rowi+3;i++){
    for(int j=columni;j<columni+3;j++){
      printf("%d  ",data[i][j]);
    }printf("\n\n");
  }
  printf("\n\n\n");
}

void findminmax(int m,int n, int data[20][20]){

  int maxrow[20], minele, maxi=0,row,column; // declaration of variables

  //Finding maximum elements in each row
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(data[i][j]>maxi){
	maxi=data[i][j];
	maxrow[i]=maxi;
      }
    }maxi=0;
  }
  //Finding minmum element among the maximum rows
  minele=maxrow[0];
  for(int i=0;i<m;i++){
    if(maxrow[i]<minele){
      minele=maxrow[i];
      row=i;
    }
  }
  for(int j=0;j<n;j++){
    if(data[row][j]==minele){
      column=j;
      break;
    }
  }
  //Displaying the answers
  
  printf("The maximum elements in each row are:  ");
  for(int i=0;i<m;i++){
    printf("%d  ",maxrow[i]);
  }printf("\n\n");
  printf("Minimum of these is: %d \n\n",minele);

  printf("minmax=%d. Found in row %d and column %d\n\n\n",minele,row,column);
  
}

void findmaxmin(int m, int n, int data[20][20]){

  int maxele, minrow[20], mini=11,row,column;

  //Finding the minimum element from each row
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(data[i][j]<mini){
	mini=data[i][j];
	minrow[i]=mini;
      }
    }mini=11;
  }
  //Finding maximum element among the given numbers of array
  maxele=minrow[0];
  for(int i=0;i<m;i++){
    if(maxele<minrow[i]){
      maxele=minrow[i];
      row=i;
    }
  }
  for(int j=0;j<n;j++){
    if(data[row][j]==maxele){
      column=j;
      break;
    }
  }
  //Displaying the answers
  printf("The minimum elements in each row:  ");
  for(int i=0;i<m;i++){
    printf("%d  ",minrow[i]);
  }printf("\n\n");
  printf("The maximum among these is: %d \n\n",maxele);
  printf("Minmax is %d. Found in row %d column %d\n\n\n", maxele,row,column);
  
}


int main(){

  srand(time(NULL));
  int data[20][20];                 //Declarng a 20x20 matrix
  int x;
  
  printf("Enter the number of rows in the range (2,10):\n");     //Getting input for number of rows
  int m;
  scanf("%d",&m);

  printf("Enter the number of columns in the range (2,10):\n");      //Getting input for number of columns
  int n;
  scanf("%d",&n);

  //filling the array
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      x=rand()%11;
      data[i][j]=x;
    }
  }

  //Displaying the array
  printf("The content of the matrix is: \n\n");
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("data[%d][%d]=%d  ",i,j,data[i][j]);
    }printf("\n\n");
  }printf("\n\n\n");

  findmax(m,n,data);

  findmin(m,n,data);

  findminmax(m,n,data);

  findmaxmin(m,n,data);
  
  return 0;
}
