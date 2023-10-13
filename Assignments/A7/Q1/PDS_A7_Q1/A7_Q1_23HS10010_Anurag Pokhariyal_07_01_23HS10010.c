// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
//Main 
int main(){
  int data[20][20],m,n;
  printf("Enter the number of rows and columns:\n");
  scanf("%d %d",&m,&n);
  printf("The Matrix:\n");
  for (int i = 0;i<m;i++){
    for(int j=0;j<n;j++){
      data[i][j] = rand()%11;
      printf("%d ",data[i][j]);
      if (data[i][j]<10)printf(" ");
    }printf("\n");
  }


  // FindMax
  int findMax(int m,int n){
    int sum=0,maxsum=0,refrow,refcol;
    for(int i =0;i<m-2;i++){
      for(int j=0;j<n-2;j++){
	sum = 0;
	for(int k=0;k<3;k++){
	  for(int l=0;l<3;l++){
	    int p = i+k;
	    int q = j+l;
	    sum += data[p][q];
	  }
	}if (sum > maxsum){
	  maxsum = sum;
	  refrow = i;
	  refcol = j;
	}
	
	}
    }
    printf("The maximum sum present is %d\n",maxsum);
    printf("The submatrix having max sum is\n");
    for(int i = 0;i<3;i++){
      for(int j = 0;j<3;j++){
	int a = refrow + i;
	int b = refcol + j;
	printf("%d ",data[a][b]);
      }printf("\n");
    }
  }
  findMax(m,n); //function call

  //findMin
  int findMin(int m,int n){
    int sum=0,minsum=10000000,refrow,refcol;
    for(int i =0;i<m-2;i++){
      for(int j=0;j<n-2;j++){
	sum = 0;
	for(int k=0;k<3;k++){
	  for(int l=0;l<3;l++){
	    int p = i+k;
	    int q = j+l;
	    sum += data[p][q];
	  }
	}if (sum < minsum){
	  minsum = sum;
	  refrow = i;
	  refcol = j;
	}
	
	}
    }
    printf("The minimum sum present is %d\n",minsum);
    printf("The submatrix having min sum is\n");
    for(int i = 0;i<3;i++){
      for(int j = 0;j<3;j++){
	int a = refrow + i;
	int b = refcol + j;
	printf("%d ",data[a][b]);
      }printf("\n");
    }
  }
  findMin(m,n); //function call

  //FindMinMax
    int findMinMax(int m,int n){
      
      int min=100000,max,refrow[m],refcol[n],ref2;
      int maxarr[m];
      for(int i =0;i<m;i++){
	max = 0;
	for(int j=0;j<n;j++){
	  if (data[i][j] > max){
	    max = data[i][j];
	    maxarr[i]= max;
	    refrow[i]= i;
	    refcol[i]= j;
	  }
	}
      }
      for (int i =0;i<m;i++){
	if (maxarr[i] < min){
	  min = maxarr[i];
	  ref2 = i;
	
	}
      }
      printf("The minMax is %d\n",min);
      printf("It is present in row %d, column %d\n",refrow[ref2],refcol[ref2]);
    }
    findMinMax(m,n); //function call

      //FindMaxMin
    int findMaxMin(int m,int n){
      
      int min,max=0,refrow[m],refcol[n],ref2;
      int minarr[m];
      for(int i =0;i<m;i++){
	min =100000;
	for(int j=0;j<n;j++){
	  if (data[i][j] < min){
	    min = data[i][j];
	    minarr[i]= min;
	    refrow[i]= i;
	    refcol[i]= j;
	  }
	}
      }
      for (int i =0;i<m;i++){
	if (minarr[i] > max){
	  max = minarr[i];
	  ref2 = i;
	
	}
      }
      printf("The maxMin is %d\n",max);
      printf("It is present in row %d, column %d\n",refrow[ref2],refcol[ref2]);
    }
    findMaxMin(m,n);//function call

  return 0;
}
