#include <stdio.h>
#include <stdlib.h>
int arr[100],size;

int fill(int a[])
{
  for(int i=0;i<size;i++)
    {
      arr[i]=rand()%900 + 100;
      printf("arr[%d] = %d\n",i,arr[i]);
    }
  return 0;
}

int exchange(int a[])
{
  int n,b;
   for(int i=0;i<size;i++)
    {
      printf("arr[%d] = %d\n",i,arr[i]);
    }
   printf("resultant array :\n");
   if(size%2 == 0){
     n=size/2;
     
     for(int i=0;i<n;i++)
       {
     b=a[i];
     a[i]=a[n+i];
     a[n+i]=b;
     }
     for(int i=0;i<size;i++)
       {
	 printf("a[%d] = %d\n",i,a[i]);
       }
     return 0;
   }
   
   else if(size%2 == 1){
    n= (int)(size/2);
     
     for(int i=0;i<n;i++){
       if(i==n)
	 {
	   continue;
	 }
     b=a[i];
     a[i]=a[n+i+1];
     a[n+i+1]=b;
     }
     for(int i=0;i<size;i++)
       {
	 printf("a[%d] = %d\n",i,a[i]);
       }
     return 0;
   }
}


int rotate_right(int a[])
{
   int d = a[0];
  for(int i=size-1;i>0;i--)
    {
     
      if(i==size-1)
	{
	  a[0]=a[size-1];
	}
      else {a[i]=a[i-1];}
      
    }
   
  for(int i=0;i<size;i++)
       {
	 if(i==1){printf("a[%d] = %d\n",1,d);}
	else printf("a[%d] = %d\n",i,a[i]);
	 }
  return 0;
}


int rotate_left(int a[])
{
   int d = a[0];
  for(int i=0;i<size;i++)
    {
     
      if(i==0)
	{
	  a[size-1]=a[0];
	}
      else {a[i]=a[i+1];}
      
    }
   
  for(int i=0;i<size;i++)
       {
	 if(i==1){printf("a[%d] = %d\n",1,d);}
	else printf("a[%d] = %d\n",i,a[i]);
	 }
  return 0;
}

int main()
{
  
  printf("Enter size");
  scanf("%d",&size);
   while(size<1 || size>100)
    {
      printf("Wrong input\n");
      printf("Enter Choice:\n");
      scanf("%d",&size);
    }

  while(1){
    int n;
  printf("Enter Choice:\n");
  scanf("%d",&n);

  while(n<=0 || n>=9)
    {
      printf("Wrong input\n");
      printf("Enter Choice:\n");
      scanf("%d",&n);
    }
  switch(n){
  case 1:
    fill(arr);
    break;
  case 2:
    exchange(arr);
    break;
  case 3:
    rotate_right(arr);
    break;
  case 4:
    rotate_left(arr);
    break;
    
  default :
    return 0;
  }
  }
  
	
     
    
}
	  
