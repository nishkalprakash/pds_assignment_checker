// Name : Shantanu
// Roll no. 23Ma10056



#include<stdio.h>
#include <stdlib.h>

int arr[100];
int size;

// Part B

void fill()
{ int u1=999,l1=100,i,n;
  scanf("%d",&n);
while(n<=1 && n>=100)
  printf("Enter the correct value of size");

      size= n ;
 for(i=0;i<size;i++)
   arr[i]=rand()%(u1-l1+1)+l1;

  for(i=0;i<size;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
}
// Part C
void exchange(int arr[],int size)
{
  int k=size%2,l=size/2,i,temp;


  for(i=0;i<size;i++)
     printf("arr[%d]=%d\n",i,arr[i]);

  if(k!=0)
    {
      for(i=0;i<l+1;i++)
      {
	temp= arr[i];
  arr[i]= arr[size-1-i];
  arr[size-1-i]= temp;
      }
    }

  if (k==0)
    { for(i=0;i<l;i++)
      {
	temp= arr[i];
  arr[i]= arr[size-1-i];
  arr[size-1-i]= temp;}
    }

  printf("NEW ARRAY:");
  for(i=0;i<size;i++)
     printf("arr[%d]=%d\n",i,arr[i]);
}
//Part D

void rotateright(int arr[],int size)
{
  int i=1,temp;
  temp=arr[size-1];
  for (i=1;i<size-1;i++)
    arr[i+1]=arr[i];

  arr[1]=arr[0];
  arr[0]=temp;

printf("NEW ARRAY:");
  for (i=0;i<size;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
}
//Part E
void rotateleft(int arr[],int size)

{
  int i,temp;
   temp=arr[0];
for(i=0;i<size-1;i++)
 arr[i]=arr[i+1];

arr[size-1]=temp;
printf("NEW ARRAY:");
 for (i=0;i<size;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
}
// Part G

void search(int arr[],int size)
{
  int m;
  scanf("%d",&m);

  for(int i =0;i<size;i++)
    {
      if (arr[i]==m)
      {
	printf("FOUND");
	printf("The array index of the element is %d",i);

      }

  if (arr[i]!=m)
    {
      printf("NOT FOUND");
    }
    }
}
// Part H
void fold(int arr[],int size)
{
  int k=size%2,i,l=size/2,temp ;

  if(k!=0)
    {
      for (i=0;i<l;i++)
	{	temp=arr[i];
      arr[i]= temp + arr[size-1-i];
	}
printf("NEW ARRAY:");
      for(i=0;i<l+1;i++)
	printf("arr[%d]=%d\n",i,arr[i]);
    }

      if (k==0)
	
      {
      for (i=0;i<l;i++)
	{	temp=arr[i];
      arr[i]= temp + arr[size-1-i];
	}
printf("NEW ARRAY:");
      for(i=0;i<l;i++)
	printf("arr[%d]=%d\n",i,arr[i]);

      }

    }



      
  
  
  
int main()
{
  int choice;
  fill();
  while(1)
    {
       scanf("%d",&choice);
       
       

       if(choice==2);
	exchange(arr,size);
	break;
	if(choice==3);
        rotateright(arr,size);
	break;
	if(choice==4);
          rotateleft(arr,size);

	break  ;

       if(choice==6);
	search( arr,size);
	break;
	if(choice==7);
         fold(arr,size);
	 break;

	  

	  if(choice==0|| choice==9)
	    break;

    }

  return 0;

}

   
  
 
   
   
