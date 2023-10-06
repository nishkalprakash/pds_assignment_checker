//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
void fill();
void exchange();
void rotate_right();
void rotate_left();
void segregate();
void search();
void fold();
void analyze();

int arr[100], size = 0;

int main()
{
  int ch;
  while(1)    // Giving user options to choose
    {
      printf(" Menu Choices:\n1-Fill\n2-Exchange\n3-Rotate right\n4-Rotate left\n5-Segregate\n6-Search\n7-Fold\n8-Analyze\n0,9 or any higher number-Exit\n");
      scanf("%d",&ch);
      switch(ch){
      case 1:{fill();break;}
      case 2:{exchange();break;}
      case 3:{rotate_right();break;}
      case 4:{rotate_left();break;}
      case 5:{segregate();break;}
      case 6:{search();break;}
      case 7:{fold();break;}
      case 8:{analyze();break;}
      default: break;
      }
      if ( ch > 8 || ch == 0) break;
    }
  return 0;
}

void fill()    // Function to fill the array
{
  while(1)
    {
      printf("Enter the size of the array: ");
      scanf("%d", &size);
      if( size > 0 && size < 101) break;
    }
  for(int i = 0; i < size; i++)
    {
      arr[i] = rand()%900 + 100;
    }
  for(int i = 0; i < size; i++)
    {
      printf("%d  ", arr[i]);
    }
  printf("\n");
 }

void exchange()     // Function to exchange two halves of array
{
  fill();
  if(size%2==0)
    {
      for(int i = 0; i < size/2; i++)
	{
	  int exc = 0;
	  exc = arr[i];
	  arr[i] = arr[i+size/2];
	  arr[i+size/2] = exc;
	}
    }
  else
    {
      for(int i = 0; i < size/2; i++)
	{
	  int exc = 0;
	  exc = arr[i];
	  arr[i] = arr[i+size/2+1];
	  arr[i+size/2+1] = exc;
	}
    }
   for(int i = 0; i < size; i++)
    {
      printf("%d  ", arr[i]);
    }
   printf("\n");
 }

void rotate_right()   // Function to rotate right
{
  fill();
  int last = arr[size-1];
  for(int i = size-1; i >= 0; i--)
    {
      arr[i] = arr[i-1];
    }
  arr[0] = last;
   for(int i = 0; i < size; i++)
    {
      printf("%d  ", arr[i]);
    }
  printf("\n");
 }

void rotate_left()    // Function to rotate left
{
  fill();
  int first = arr[0];
  for(int i = 0; i < size; i++)
    {
      arr[i] = arr[i+1];
    }
  arr[size-1] = first;
   for(int i = 0; i < size; i++)
    {
      printf("%d  ", arr[i]);
    }
  printf("\n");
 }
  
void segregate()   // Function to segregate the array
{
  fill();
  for(int i = 0, j = 0; i<size; i++)
    {
      if(arr[i]%2==0){
	int exc = arr[j];
	arr[j] = arr[i];
	arr[i] = exc;
	j++;
      }
    }
   for(int i = 0; i < size; i++)
    {
      printf("%d  ", arr[i]);
    }
  printf("\n");
 }

void search()     // Function to search the array
{
  fill();
  int num, cnt =0;
  printf("Enter the number to be searched : ");
  scanf("%d",&num);
  for(int i =0; i< size; i++)
    {
      if(arr[i] == num)
	{
	  printf("Found at %d\n",i);
	  cnt++;
	}
    }
  if(cnt == 0) printf("Not Found\n");
}

void fold()   // Function to fold the array
{
  fill();
      for(int i = 0; i < size/2; i++)
	{
	  arr[i] = arr[i] + arr[size-i-1];
	}
      if(size%2==0)
	{
	  for(int i = 0; i < size/2; i++)
	    {
	      printf("%d  ", arr[i]);
	    }
	}
      else
	{
	  for(int i = 0; i <= size/2; i++)
	    {
	      printf("%d  ", arr[i]);
	    }
	}
	  
   printf("\n");
 }

void analyze()   // Function to analyze the array 
{
  fill();
  int pos = 0,isize = 1, mpos = 0, msize = 1;
  printf("Increasing sequences are: ");
  for(int i = 1; i<size; i++)
    {
      if( arr[i] > arr[i-1])
	{
	  printf("%d  ",arr[i-1]);
	  pos = i-1;
	  isize++;
	}
      else
	{
	  printf("%d\n",arr[i-1]);
	  if(isize > msize)
	    {
	      msize = isize;
	      mpos = pos;
	      isize = 1;
	      pos = 0;
	    }
	}
    }
  if(msize == 1) printf("No increasing sequence is present");
  else
    {
      printf("Largest increasing sequence: ");
      for(int i = mpos; i < mpos+msize-1; i++)
	{
	  printf("%d  ",arr[i-1]);
	}
    }
  printf("\n");
}
	
      
	 
	  
  
	
  
           
	
  
      
  
  
