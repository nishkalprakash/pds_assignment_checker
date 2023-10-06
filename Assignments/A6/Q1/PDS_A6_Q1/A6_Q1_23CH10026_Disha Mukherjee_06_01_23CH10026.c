//Roll no:23CH10026
//Name: Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int arr[100],size;
void fill();
void exchange();
void rotate_right();
void rotate_left();
void segregate();
void search();
void fold();
void analyze();

int main()
{
  int n;
  while(1)
    {
       printf("Enter the following choices:\n1.Fill\n2.Exchange\n3.Rotate Right\n4.Rotate left\n5.Segregate\n6.Search\n7.Fold\n8.Analyze\nAny other number to exit");
       scanf("%d",&n);
       if(n==1)
	 fill();
       if(n==2)
	 exchange();
       if(n==3)
	 rotate_right();
       if(n==4)
	 rotate_left();
       if(n==5)
	 segregate();
       if(n==6)
	 search();
       if(n==7)
	 fold();
       if(n==8)
	 analyze();
       if(n>8 || n==0)
	 return 0;
    }
 
}

void fill()
{
  int i;
  printf("\n Enter size of array between 1 to 100");
  while(1)   //getting correct size of array
    {
      scanf("%d",&size);
      if(size>100 || size<1)
	printf("\nSorry please enter size again");
      else
	break;
    }
  printf("\n");
  for(i=0;i<size;i++)
    {
      arr[i]=rand()%900+100; //filling of array
      printf("arr[%d]=%d\t",i,arr[i]);  //displaying the input array element
    }
  
}


void exchange()
{
  int i,t;
  int c=size/2;
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
  for(i=0;i<c;i++)
    {
      t=arr[i];
      if(size%2==0)
	{
	  arr[i]=arr[i+c];   //swapping
	  arr[i+c]=t;
	}
      else
	{
	  arr[i]=arr[i+c+1]; //swapping
	  arr[i+c+1]=t;
	}
    }
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
}


void rotate_right()
{
  int i,t;
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
  t=arr[size-1];   //storing last element for exchanging
  for(i=size-1;i>=1;i--)
    arr[i]=arr[i-1];
  arr[0]=t;//replacing first element with last element
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
}


void rotate_left()
{
  int i,t;
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
  t=arr[0];   //storing first element for exchanging
  for(i=0;i<size-1;i++)
    arr[i]=arr[i+1];
  arr[size-1]=t;        //replacing last element with first element
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
}

void segregate()
{
  int i,j,t,even=-1;
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
  for(i=0;i<size;i++)
    {
      if(arr[i]%2==0)
	{
          t=arr[i];
	  even++;
	  for(j=even;j<i;j++)
	    arr[j+1]=arr[j];
	  arr[even]=t;
	}
    }
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
}

void search()
{
  int el,i,c=0;
  printf("\nenter element");
  scanf("%d",&el);
  for(i=0;i<size;i++)
    {
      if(arr[i]==el)
	{
	  printf("\nElement found at index %d",i);
	  c=1;
	  break;
	}
    }
  if(c==0)
    printf("\nElement not found");
}

void fold()
{
  int i,x=0;
  int c=size/2;
  for(i=0;i<c;i++)
    {
      arr[x]=arr[i]+arr[size-i-1];
      x++;
    }
  if(size%2==0)
    {
      printf("\n");
      for(i=0;i<c;i++)
	printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
    }
  else
    {
      printf("\n");
      for(i=0;i<c+1;i++)
	printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
    }
}

void analyze()
{
  int i,pos,isize,mpos=0,msize=0;
  printf("\n");
  for(i=0;i<size;i++)
    printf("arr[%d]=%d\t",i,arr[i]);  //displaying the respective array element
  for(i=0;i<size-1;i++)
    {
      pos=i;
      if(arr[i]<arr[i+1])
	isize++;
      else
	{
	  if(msize<isize)
	    {
	      msize=isize;
	      mpos=pos-isize;
	    }
	  printf("\n(");
	  for(i=pos-isize;i<pos;i++)
	    printf("%d,",arr[i]);  //displaying the respective array element
	  printf(")\n");
	  isize=0;
	}
    }
  printf("largest sequence");
  printf("\n(");
  for(i=mpos;i<mpos+msize;i++)
    printf("%d,",arr[i]);  //displaying the respective array element
  printf(")\n");
}
      


	  
      
