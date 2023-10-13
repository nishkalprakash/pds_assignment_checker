// Name - Anshuman Acharya
// Roll no. : 23ch10006

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void findmax(int arr[][20], int srow,int scol)
{

  int sum = 0, maxsum = 0, store, i, j;
  for(i = 0;i < srow;i++){
    sum = 0;
    for(j = 0;j < scol;j++){
      sum += arr[i][j];
    }
    if(sum > maxsum){
      maxsum = sum;
      store = i;
      //break;
    }
  }

  for(j = 0;j < scol;j++){
    printf("%d\t", arr[store][j]);
  }
}

void findmin(int arr[][20], int srow, int scol)
{

  int min, sum = 0, minsum = 50, i, j, store;               // minsum = 50 as max it can be 40.

  for(i = 0;i < srow;i++){
    sum = 0;
    for(int j = 0;j < scol;j++){
      sum += arr[i][j];
    }
    if(sum <= minsum){
      minsum = sum;
      store = i;
    }
  }

  for(j = 0;j < scol;j++){
    printf("%d\t", arr[store][j]);
  }
  
}

void findminmax(int arr[][20], int srow, int scol){

  int min, sum = 0, maxsum = 0, i, j, store, mini = 11, store2;              

  for(i = 0;i < srow;i++){
    sum = 0;
    for(int j = 0;j < scol;j++){
      sum += arr[i][j];
    }
    if(sum >= maxsum){
      maxsum = sum;
      store = i;
    }
  }

  for(j = 0;j < scol;j++){
    if(arr[store][j] < mini){
      mini = arr[store][j];
      store2 = j;
    }
  }

  printf("Maxmin is %d, row = %d, col = %d\n", mini, store + 1, store2 + 1);

}

void findmaxmin(int arr[][20], int srow, int scol)
{
  int min, sum = 0, minsum = 50, i, j, store, maxi = -1, store2;               // minsum = 50 as max it can be 40.

  for(i = 0;i < srow;i++){
    sum = 0;
    for(int j = 0;j < scol;j++){
      sum += arr[i][j];
    }
    if(sum <= minsum){
      minsum = sum;
      store = i;
    }
  }

  for(j = 0;j < scol;j++){
    if(arr[store][j] > maxi){
      maxi = arr[store][j];
      store2 = j;
    }
  }

  printf("Maxmin is %d, row = %d, col = %d\n", maxi, store + 1, store2 + 1);


}

int main()
{

  int arr[20][20], srow, scol;

  printf("Enter no. of rows :");
  scanf("%d", &srow);

  printf("Enter no. of cols :");
  scanf("%d", &scol);

  for(int i = 0;i < srow;i++){
    for(int j = 0;j < scol;j++){
      arr[i][j] = 1 + rand()%10;
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
 printf("\n\n");

 printf("The row with maximum sum : ");

 findmax(arr, srow, scol);

 printf("\n\n");

 printf("The row with minimum sum : ");
 
 findmin(arr, srow, scol);

 printf("\n\n");

 printf("The smallst element of the row with maximum sum : ");

 findminmax(arr, srow, scol);

 printf("The largest element of the row with minimum sum : ");

 findmaxmin(arr, srow, scol);

  return 0;
}
