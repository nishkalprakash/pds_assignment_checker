//Name: Swaraj Dian
//Roll : 23EC30056


#include<stdio.h>
#include<stdlib.h>
int arr[100]; //declaring global array
int size;

void fill()//fill function
{
  int i;
  while(1)
    {
      printf("Enter size in range[1,100]: ");
      scanf("%d",&size);
      if ((size>=1)&&(size<=100))
	{
	  for(i=0;i<size;i++)
	      arr[i]=100+rand()%900;
	  for(i=0;i<size;i++)
	    printf("arr[%d]= %d, ",i,arr[i]);
	  break;
	}
      else
	continue;
    }
}

void exchange()//echange function
{
  int i, temp;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  printf("\n");
  if (size%2==0)
    {
      for (i=0;i<size/2;i++)
	{
	  temp=arr[i];
	  arr[i]=arr[size/2+i];
	  arr[size/2+i]=temp;
	}
    }
  else if (size%2!=0)
    {
      for(i=0;i<((size-1)/2);i++)
	{
	  temp=arr[i];
	  arr[i]=arr[((size+1)/2)+i];
	  arr[((size+1)/2)+i]=temp;
	}
    }
   for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
}

void rotate_right()//rotate right function
{
  int i,elem, temp;
  elem=arr[size-1];
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  printf("\n");
  for(i=0;i<size-1;i++)
    arr[size-1-i]=arr[size-2-i];
  arr[0]=elem;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
}

void rotate_left()//rotate left function
{
  int i,elem, temp;
  elem=arr[0];
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  printf("\n");
  for(i=0;i<size-1;i++)
      arr[i]=arr[i+1];
  arr[size-1]=elem;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
}

void segregate()//segregate function
{
  int even[100],odd[100];
  int i,j=0,k=0;
  for(i=0;i<size;i++)
    {
      if(arr[i]%2==0)
	{
	  even[j]=arr[i];
	  j++;
	}
      else if(arr[i]%2!=0)
	{
	  odd[k]=arr[i];
	  k++:
	}
    }
  for(i=0;i<j;i++)
    a[i]=even[i];
  for(i=0;i<k;i++)
    a[i+j]=odd[i];
}

void search()//search function
{
  int s,i,f=0;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  printf("\n");
  printf("Enter Integer value to be searched: ");
  scanf("%d",&s);
  for(i=0;i<size;i++)
    {
      if (arr[i]==s)
	{
	  printf("Element Found at index %d",i);
	  f++;
	}
    }
  if (f==0)
    printf("Not Found");
}


void fold()//fold function
{
  int i;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  if (size%2==0)
    {
      for(i=0;i<size/2;i++)
	  arr[i]=arr[i]+arr[size-1-i];
      size=size/2;
      for(i=0;i<size;i++)
	printf("arr[%d]= %d, ",i,arr[i]);
    }
  else if(size%2!=0)
    {
      for (i=0;i<(size-1)/2;i++)
	arr[i]=arr[i]+arr[size-1-i];
      size=(size+1)/2;
      for(i=0;i<size;i++)
	printf("arr[%d]= %d, ",i,arr[i]);
    }
}

void analyze()//analyze function
{
  int i,pos,isize,mpos,msize;
  for(i=0;i<size;i++)
    printf("arr[%d]= %d, ",i,arr[i]);
  
}
  
int main()//main function
{
  int ch;
  while (1)
    {//menu 
      printf("\nEnter your choice\n1-> Fill\n2-> Exchange\n3-> Rotate right\n4-> Rotate left\n5-> Segregate\n6-> Search\n7-> Fold\n8-> Analyze\n0,9 or any higher number-> Exit: ");
      scanf("%d",&ch);
      if ((ch>0)&&(ch<9))
	{
	  if (ch==1)
	    fill();
	  if (ch==2)
	    exchange();
	  if (ch==3)
	    rotate_right();
	  if (ch==4)
	    rotate_left();
	  if (ch==5)
	    segregate();
	  if (ch==6)
	    search();
	  if (ch==7)
	    fold;
	  if (ch==8)
	    analyze();
	}
      else
	break;//breaking if not incorrect input
    }
}
