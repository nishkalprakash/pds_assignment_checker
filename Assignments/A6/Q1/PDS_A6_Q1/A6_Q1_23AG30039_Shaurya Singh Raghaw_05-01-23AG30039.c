#include<stdio.h>
#include<stdlib.h>
int size;
int arr[100];

//b
  void fill()
{
  while(size<1 || size>100)
    {
  printf("enter the size of array: \n");
    scanf("%d",&size);
    }
 
    

  for(int i=0;i<size;i++)
    {
      arr[i] = (rand()%900) + 100;

      printf("%d\n",arr[i]);
    }
  return;

}



//f
void segregate()
{ printf("original:");
  for(int g=0;g<size;g++)
    {
      printf("%d\n",arr[g]);
   
    }
  printf("even segregate:");
  for(int s=0;s<size;s++)
    if(arr[s]%2==0)
      {
	printf("%d ",arr[s]);
      }
  return;
}

//g
void search()
{
  int r,p;
  int p=0
  for(int k=0;k<size;k++)
    {
      printf("%d\n",arr[k]);
    }
  printf("enter the number: ");
  scanf("%d",&r);

  for(int f=0;f<size;f++)
    {
      if(arr[f]==r)
	p=1
	  printf("%d is the index",f);
     }
  if(p==0)
    printf("no match found");
  return;
}
//h
void fold()
{
  for(int r=0;r<size;r++)
    printf("%d ",arr[r]+arr[size-r]);
}

int main()
{
  int n;

  //a

  printf("choose one of the following: \n");
  printf("1---- fill\n");
  printf("2---- exchange\n");
  printf("3---- rotate_right\n");
  printf("4---- rotate_left\n");
  printf("5---- segregate\n");
  printf("6---- search\n");
  printf("7---- fold\n");
  printf("8---- analyze\n");
  printf("0,9 or any higher number----exit \n");

  do{
  printf("enter your choice: ");
  scanf("%d",&n);

  if(n==1) fill();
  // else if(n==2) exchange();
  // else if(n==3) rotate_right();
  // if(n==4) rotate_left () ;
  else if(n==5) segregate() ;
  else if(n==6) search() ;
  else if(n==7) fold();
  // if(n==8) analyze();
  //  if(n>=9 || n==0) exit(0);
  }
  while(n!=0 || n>= 9);

  

  return 0;
}
  
