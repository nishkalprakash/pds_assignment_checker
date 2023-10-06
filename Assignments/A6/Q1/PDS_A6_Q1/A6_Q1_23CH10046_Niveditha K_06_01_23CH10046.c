#include <stdio.h>
#include <stdlib.h>
int arr[100];
int size;

void fill(int k){
  printf("Array elements: ");
  for(int i=0; i<k; i++){
    arr[i] = rand()%(899) + 100;
    printf("%d ",arr[i]);
  }
}

void exchange(int k){
  for(int i=0; i<k; i++)  printf("%d\t",arr[i]);
  printf("\n");
  for(int i=0; i<k; i++)  {
    int temp = arr[i];
    arr[i] = arr[k-1-i];
    printf("%d\t",arr[i]);
    temp = arr[k-1-i];
  }
}

void rotate_right(int k){
  for(int i=0; i<k; i+2){
    if(i==(k-1)) arr[k-1]=arr[0];
    int tmp,temp;
    temp = arr[i];
    tmp= arr[i+1];
    arr[i] = arr[i+1];
}
  for(int i=0; i<k; i++) printf("%d\t",arr[i]);
}

void rotate_left(int k){
  for(int i=0; i<k-1; i++){
    if(i==(k-1)) arr[k-1]=arr[0];
    int tmp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1]=tmp;
}
  for(int i=0; i<k; i++) printf("%d\t",arr[i]);
}

int main()
{
  int n;
  printf(" 1-Fill\n 2-Exchange\n 3-Rotate right\n 4-Rotate left\n 5-Segrete\n 6-Search\n 7-Fold\n 8-Analyze\n\n");
  
for(int i=0; i<9; ){
  printf("Enter a number ");
  scanf("%d",&n);
 if(n>=1 && n<=8) {
      if(n==1){
	printf("Enter size: ");
	scanf("%d",&size);
	fill(size);
	printf("\n\n");
      }

      else if(n==2){
	exchange(size);
	printf("\n\n");
      }
      else if(n==3){
	rotate_right(size);
	printf("\n\n");
      }
      else if(n==4){
	rotate_left(size);
	printf("\n\n");
      }

 }
 
 else if(n==0 ||n>8||n<0) return 0;
 }
  return 0;
}
