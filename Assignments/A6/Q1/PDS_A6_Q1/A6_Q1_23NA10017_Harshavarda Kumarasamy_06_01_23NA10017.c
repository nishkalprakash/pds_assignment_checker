//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>
#include <stdio.h>
#include <stdlib.h>

int arr[9999];
int size;
void fill();
void exchange();
void rotate_right();
void rotate_left();
void segregate();
void search();
void fold();
void analyze();
int main()
{int n;
  printf("1----Fill");
  printf("\n");
  printf("2----Exchange");
  printf("\n");
  printf("3----Rotate right");
  printf("\n");
  printf("4----Rotate left ");
  printf("\n");
  printf("5----Segregate");
  printf("\n");
  printf("6----Search");
  printf("\n");
  printf("7----Fold");
  printf("\n");
  printf("8----Analyze");
  printf("\n");
  printf("0,9 or any higher number----Exit");
  printf("\n");
 while(n>=0){
  scanf("%d", &n);
  switch(n){
  case 1  : fill();
    break;
  case  2 : exchange();
    break;
  case  3 : rotate_right();
    break;
  case  4 : rotate_left();
    break;
  case 5: segregate();
    break;
  case 6: search();
    break;
  case 7: fold();
    break;
  case 8: analyze();
    break;
  default : return 0;
  }
  }
}

  void fill()
  {int i;
      printf("Enter size of array\n");
      scanf("%d", &size);
      for(i=0;i<size; i++){
	arr[i]=rand()%900+100;
	printf("%d\n", arr[i]);
    }
      return;
    }

void exchange(){
  int l=0,r, i, temp;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("Output:\n");
  r=size-1;
  do{
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    l++;
    r--;
  }while(l<r);
  
    for(i=0;i<size;i++){
    printf("%d\n", arr[i]);
  }
    return;  }

void rotate_right(){
  int i, temp, prox;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("Output:\n");
  temp=arr[0];
  printf("%d\n", arr[size-1]);
  for(i=1;i<size; i++){
    prox=arr[i];
    arr[i]=temp;
    temp=prox;
    printf("%d\n", arr[i]);
      }
  return;
}
  
void rotate_left(){
  int i, temp;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("Output:\n");
  arr[size-1]=arr[0];
  for(i=0;i<size-1;i++){
    arr[i]=arr[i+1];
    printf("%d\n", arr[i]);
      }
  printf("%d\n", arr[size-1]);
  return;
}
  
void segregate(){
  int odd[999], even[999], i, j=0, k=0;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  for(i=0;i<size; i++){
    if(arr[i]%2==0){
      even[j]=arr[i];
      j++;
    }
    else{
      odd[k]=arr[i];
      k++;
    }
  }
  printf("Odd array:\n");
  for(i=0;i<k;i++){
    printf("%d\n", odd[i]);
  }
  printf("Even array:\n");
  for(i=0;i<j;i++){
    printf("%d\n", even[i]);
  }
  return;
}

void search()
{
  int i, n, j=0;
  printf("Original array:\n");
  for(i=0;i<size; i++)
  {
    printf("%d\n", arr[i]);
  }
  printf("Enter any value\n");
  scanf("%d", &n);
  //printf("n:%d\n", n);
  for(i=0; i<size; i++){
    if(n==arr[i]){
      printf("The given number is equal to %dth number in array\n", i+1);
      j++;
      break;
    }
  }
  if(j==0){
  printf("Not Found\n");
  }
  return;
}

void fold(){
  int l=0,r, i;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("Output:\n");
  r=size-1-l;
  do{
    arr[l]=arr[l]+arr[r];
      l++;
      r--;
  }while(l<r);
    for(i=0;i<=l;i++){
    printf("%d\n", arr[i]);
  }
  return;
}

void analyze()
{int i, n;
  printf("Original array:\n");
  for(i=0;i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("Output:\n");
  printf("the increasing sequences are:");
  for(i=0;i<size;i++){
    n=1;
    printf("(");
    if(arr[i]< arr[i+1]){
      printf(" %d, ", arr[i]);
	n++;
	  }
    printf("%d)", arr[i+1]);

     }
  return;
}
   
      
