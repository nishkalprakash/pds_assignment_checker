//Roll No.:23CE10045
//Name:PRIYANSHU VERMA

#include <stdio.h>
#include<stdlib.h>

int arr[100], size, i, j, temp ,size, find;

void fill ()      // function to fill the array
  
{
  printf("Enter size of the array: ");
  scanf("%d", &size);
  while (( size < 1) || (size > 100))
    {
      scanf("%d", &size);
    }
  
  printf("\nOriginal array: ");
  for(i=0;i<size;i++)
    {
      arr[i] = rand () % 900 + 100;
      printf("arr[%d] = %d, ", i, arr[i]);
    }

  printf("\n\n");
}


void exchange ()        // function to exchange elements of array
  
{
  printf("\nOriginal array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }

  if (size%2 == 0)
    {
      for(i=0,j= size/2; i < (size/2) ;i++,j++)
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;     
         }
    }

  else if (size%2 != 0)
    {
         for(i=0 , j=(size/2 + 1); i < size/2 ; i++,j++)
         {
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;     
         }
    }

  printf("\nExchanged array: ");
   for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }
   printf("\n\n");
}


void rotate_right()      // function to right rotate the array
  
{
  printf("\nOriginal array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }
  
      temp = arr[size-1];
  for(i=size-1 ; i>0 ; i--)
    {
        arr[i] = arr[i-1];        
    }
        arr[0] = temp;

  printf("\nRotated array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }
  printf("\n\n");
}


void rotate_left()       // function to left rotate the array
  
{
  int x[size];
  printf("\nOriginal array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }

    temp = arr[0];
  for(i=0 ; i<size ; i++)
    {
        arr[i] = arr[i+1];        
    }
        arr[size-1] = temp;

  printf("\nRotated array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }
  printf("\n\n");
}


void segregate()      // function to segregate the array
  
{
  
}


void search()      // function to search an element in the array
  
{
  printf("\nOriginal array: ");
  for(i=0;i<size;i++)
    {
      printf("arr[%d] = %d, ", i, arr[i]);     
    }

  printf("\nEnter integer value to be searched: ");
  scanf("%d", &find);

  for(i=0;i<size;i++)
    {
      if(arr[i] == find)
	{
	  printf("The element %d is located at index %d\n",find, i);
	  break;
	}
    }
  if(i > size)
    {
      printf("\nNot found.");
    }
  printf("\n\n");
}


void fold()   // function to fold the array and add corresponding elements
  
{
  
}


void analyze()  // function to analyze larger increasing sequence
{
  
}


int main ()
  
{
  while(1)
    {
      int choice;
      printf("Menu Choices:\n\n");
      printf("i.     1----  Fill\n");
      printf("ii.    2----  Exchange\n");
      printf("iii.   3----  Rotate right\n");
      printf("iv.    4----  Rotate left\n");
      printf("v.     5----  Segregate\n");
      printf("vi.    6----  Search\n");
      printf("vii.   7----  Fold\n");
      printf("viii.  8----  Analyze\n");
      printf("ix.    0,9 or any higher number ----  Exit\n");
      
      scanf("%d",&choice);

      if((choice == 0) || (choice >=9))
	{
	  return 0;
	}

      switch (choice)
	{
        case 1: {
	  fill();
	  break;
	}
        case 2: {
	  exchange();
	  break;
	}
	case 3: {
	  rotate_right ();
	  break;
	}
	case 4: {
	  rotate_left ();
	  break;
	}
	case 5: {
	  segregate ();
	  break;
	}
	case 6: {
	  search();
	  break;
	}
	case 7: {
	  fold();
	  break;
	}
	case 8: {
	  analyze();
	  break;
	}
	  
	}
      int main();
    }
  return 0;
}
