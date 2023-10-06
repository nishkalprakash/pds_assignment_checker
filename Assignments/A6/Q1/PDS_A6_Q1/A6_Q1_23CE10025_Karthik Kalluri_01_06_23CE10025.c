#include <stdio.h>
#include <stdlib.h>
int arr[100],size;
int fill();
int exchange();
int rotateright();
int rotateleft();
int segregate();
int search();
int fold();
int main()
{
  int x;
do
  {
    printf("1 ----  Fill\n");
    printf("2 ----  Exchange\n");
    printf("3 ----  Rotate right\n");
    printf("4 ----  Rotate left\n");
    printf("5 ----  Segregate\n");
    printf("6 ----  Search\n");
    printf("7 ----  Fold\n");
    printf("8 ----  Analyze\n");
    printf("0,9 or any higher number ----  Exit\n");
    scanf("%d",&x);
    if((x==0)||(x>=9))
      {
	break;
      }
    if(x==1)
      {
	fill();
      }
    if(x==2)
      {
	exchange();
      }
    if(x==3)
      {
	rotateright();
      }
    if(x==4)
      {
	rotateleft();
      }
    if(x==5)
      {
	segregate();
      }
    if(x==6)
      {
	search();
      }
    if(x==7)
      {
	fold();
	}
  }while(1);
  
  
}
int fill()
{int k=0, i,j;
  do{
  printf("Enter the size of array\n");
  scanf("%d",&size);
  if((size>=1)&&(size<=100))
    {
      break;
    }
  
  }while(1);
    for( i=0;i<size;i++)
      {
	arr[i]=rand()%900+100;
      }
  for( i=0;i<size;i++)
    {
	
	  printf("%d  ",arr[i]);
	 
    }
  printf("\n");
}
int exchange()
{
  int k;
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  if(size%2==0)
    {
      for(int i=0,j=size-1;i<=(size/2),j>=size/2;i++,j--)
	{
	  k=arr[i];
	  arr[i]=arr[j];
	  arr[j]=k;
	}
	}
  if(size%2==1)
    {
      for(int i=0,j=size-1;i<=size/2,j>(size/2);i++,j--)
	{
	  k=arr[i];
	  arr[i]=arr[j];
	  arr[j]=k;
	}
    }
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  
}
int rotateright()
{
  int k;
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  for(int i=size-1;i>0;i--)
    {
      k=arr[i];
      arr[i]=arr[i-1];
      arr[i-1]=k;
    }
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
      
    }
  printf("\n");
}
int rotateleft()
{
  int k;
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  for(int i=0;i<size-1;i++)
    {
      k=arr[i+1];
      arr[i+1]=arr[i];
      arr[i]=k;
    }
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
}
int segregate()
{
  int arro[100],arre[100],x=0,y=0;
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  for(int i=0;i<size;i++)
    {
      if(arr[i]%2==0)
	{
	  arre[x]=arr[i];
	  x++;
	}
      else
	{
	  arro[y]=arr[i];
	  y++;
	}
      
    }
  if(arr[0]%2==1)
    {
     
  for(int i=0;i<y;i++)
    {
      printf("%d  ",arro[i]);
    }
  for(int i=0;i<x;i++)
    {
      printf("%d  ",arre[i]);
    }
    }
  else{
    for(int i=0;i<x;i++)
    {
      printf("%d  ",arre[i]);
    }
     for(int i=0;i<y;i++)
    {
      printf("%d  ",arro[i]);
    }
  }
  printf("\n");
}
int search()
{ int n,count=0;
  for(int i=0;i<size;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  printf("Enter a number\n");
  scanf("%d",&n);
  for(int i=0;i<size;i++)
    {
      if(arr[i]==n)
	{
	  printf("%d\n",i);
	  count++;
	}
      
    }
  if(count==0)
    {
      printf("Not found\n");
    }
  
}
int fold()
{ int arrx[100];
  if(size%2==0)
    {
      for(int i=0,j=size-1,k=0;i<=size/2,j>size/2,k<=size/2;i++,j--,k++ )
	{
	  arrx[k]=arr[i]+arr[j];
	  
	}
      for(int l=0;l<size/2;l++)
	{
	  printf("%d  ",arrx[l]);
	}
    }
  else
    for(int i=0,j=size-1,k=0;i<=size/2,j>size-(size/2),k<=(size/2);i++,j--,k++)
      {
        arrx[k]=arr[i]+arr[j];
	arrx[(int)(size/2)+1]=arr[(int)(size/2)+1];
	
      }
  for(int l=0;l<(int)size/2+1;l++)
    {
      printf("%d  ",arrx[l]);
    }
 
    }


