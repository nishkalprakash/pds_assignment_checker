//Name:Gargi Mukherjee
//Roll no.:23ME10025
#include<stdio.h>
int size;
int arr[100];

void fill()
{
  printf("Enter the size of array");
  scanf("%d",&size);
  if (size>100)
    fill();
  int x;
  for (int i=0;i<size;i++)
    {
      x=rand()%900+100;
      arr[i]=x;
    }
  for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
}
void exchange()
{
  int h;
  for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d,\n\n ",i,arr[i]);
    }
  if(size%2==0)
    {
      for(int i=0;i<size/2;i++)
	{
	  h=arr[i];
	  arr[i]=arr[i+i/2];
	  arr[i+i/2]=h;
	}
    }
  else
    {
      for(int i=0;i<(size-1)/2;i++)
	{
	  h=arr[i];
	  arr[i]=arr[i+i/2];
	  arr[i+i/2]=h;
	}
    }
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
}
void rotateright()
{
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
   int h=arr[size-1];
   for(int i=size-1;i>0;i--)
     {
       arr[i]=arr[i-1];
     }
   arr[0]=h;
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
	 
}
void rotateleft()
{
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
   int h=arr[0];
    for(int i=0;i<size-1;i++)
     {
       arr[i]=arr[i+1];
     }
    arr[size-1]=h;
    for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);

    }
}
void segregate()
{
  int a[size];
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
   int h=0;
   for(int i=0;i<size;i++)
     {
       if(arr[i]%2==0)
	 {
	   a[h]=arr[i];
	   h++;
	  
	 }
     }
   for(int i=0;i<size;i++)
     {
       if(arr[i]%2!=0)
	 {
	   a[h]=arr[i];
	   h++;
	 }
     }
    for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,a[i]);
    }
   
}
void search()
{
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
   int a,f=0;
   printf("Enter an integer value to be searched");
   scanf("%d",&a);
   for(int i=0;i<size;i++)
     {
       if (arr[i]==a)
	 {
	 printf("element %d is located at %dth position",a,i);
	 f=1;
	 }
     }
   if(f==0)
     printf("Not Found");
}
void fold()
{
  int a[size],h=0;
  if(size%2==0)
    {
      for(int i=0;i<size/2;i++)
	{
	  a[h]=arr[i];
	    }
    }
}
void analyze()
{
   for(int i=0;i<size;i++)
    {
      printf("arr[%d]=%d, ",i,arr[i]);
    }
   
}
void main()
{
  int choice;
  while(1)
    {
      printf("\nChoices:\n");              
      printf("i.1---Fill\n");
      printf("ii.2---Exchange\n");
      printf("iii.3---Rotate right\n");
      printf("iv.4---Rotate left\n");
      printf("v.5---Segregate\n");
      printf("vi.6---Search\n");
      printf("vii.7---Fold\n");
      printf("viii.8---Analyze\n");
      printf("ix.9---0,9 or any higher number---exit");
      printf("Enter a choice");
      scanf("%d",&choice);
  if (choice==1)
    fill();
   if (choice==2)
    exchange();
   if (choice==3)
     rotateright();
   if (choice==4)
     rotateleft();
   if (choice==5)
     segregate();
   if (choice==6)
     search();
   if (choice==7)
     fold();
   if (choice==8)
     analyze();
   if(choice==0 || choice>8)
     break;
    }
    
}
    
      
  

   
   
	   
	 
     
   
	 
	   
    
   
   
  
	  

      
     
  
  



  
  
