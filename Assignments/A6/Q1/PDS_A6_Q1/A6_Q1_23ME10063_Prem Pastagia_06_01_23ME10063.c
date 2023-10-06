// Prem Pastagia
// 23ME10063

#include <stdio.h>
#include <stdlib.h>

int arr[100];
int size;

void printarray(int arr[],int size)
{
  int i;
  for(i=0;i<size;i++){printf("%d ",arr[i]);}printf("\n");
}

int fill(int arr[])
{
  int a;
  
  while(1)
  {
    printf("Please enter the size of array:\n");
    scanf("%d",&a);
    if(a>=1 && a<=100){size=a;
      for(int i=0;i<a;i++)
	{arr[i]=(rand()%900)+100;}
      printarray(arr,a);
      return 0;}
  }
}

void exchange(int arr[])
{
  int i,j;
  int b=size;
  if (size%2==0) {
    for(i=0;i<(size/2);i++)
      {j=arr[i]; arr[i]=arr[i+(size/2)];arr[i+(size/2)]=j;}}
 else{ 
      for(i=0;i<((size-1)/2);i++)
	{j=arr[i]; arr[i]=arr[i+((size+1)/2)];arr[i+((1+size)/2)]=j; }}
  printarray(arr,size);
}

void rotateright(int arr[])
{
  int i,j,b;
  b=size-1;
  j=arr[b];
  for(i=b;i>0;i--)
    {
      arr[i]=arr[i-1];
    }
  arr[0]=j;
  printarray(arr,size);

}

void rotateleft(int arr[])
{
  int i,j;

  j=arr[0];
  for(i=0;i<size-1;i++)
    {
      arr[i]=arr[i+1];
    }
  arr[size-1]=j;
  printarray(arr,size);

}

int search(int arr[])
{

  int n,i,flag=0;
  printarray(arr,size);
  printf("Enter the number to search:\n");
  scanf("%d",&n);

  for(i=0;i<size;i++){
    if(arr[i]==n){printf("Numeber found and index is %d\n",i);flag=1;return 0;
  }

    if (flag==0){printf("No number is found\n");
  return 0;
}









int main()
{
  int n;
  while(1)
    {
      printf("Menu choice\n1 Fill\n2  Exchange\n3  rotate right\n4 Rotate left\n5  Segregate\n6  Search\n7  Fold\n8  Analyze\n0,9 or greater than 9 to exit\nPlease enter your choice\n");
      scanf("%d",&n);
      if(n==0 || n>=9){printf("Exiting...\n");return 0 ;}
      switch(n)
	{
	case 1:fill(arr);break;
	case 2:exchange(arr);break;
	case 3:rotateright(arr);break;
	case 4:rotateleft(arr);break;
	case 5:break;
	case 6:          break;
	case 7:break;
	case 8:break;
     
	}}
    
  return 0;}
