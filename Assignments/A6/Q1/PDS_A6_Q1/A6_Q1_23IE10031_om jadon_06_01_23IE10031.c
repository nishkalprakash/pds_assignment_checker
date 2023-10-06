// Roll No. - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>
#include <stdlib.h>

int arr[100];
int size = 0;

int fill();
int exchange();
int rotate_right();
int rotate_left();
int segregate();
int search();
int fold();
int analyze();



int main()
{
  printf("Menu Choices:\ni.   1 ---- Fill\nii.  2 ---- Exchange\niii. 3 ---- Rotate right\niv.  4 ---- Rotate left\nv.   5 ---- Segregate\nvi.  6 ---- Search\nvii. 7 ---- Fold\nviii.8 ---- Analyze\nix.  0, 9 or any higher number ---- Exit\n");

  int choice;
  while(1)
  {
    printf("Your Choice: ");
    scanf("%d", &choice);
    if (choice == 1) fill();
    else if(choice == 2) exchange();
    else if(choice == 3) rotate_right();
    else if(choice == 4) rotate_left();
    else if(choice == 5) segregate();
    else if(choice == 6) search();
    else if(choice == 7) fold();
    else if(choice == 8) analyze();
    else if(choice==0 || choice >=9) break;

  }
  
}

int fill()
{
  do
    {
      printf("Enter Size: ");
      scanf("%d", &size);
    }while(size<1 || size>100);

  int rnum;
  for (int i=0; i<size; i++)
    {
      rnum = (rand()%900) + 100;
      arr[i] = rnum;
    }
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
}


int exchange()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int temp;
  for (int i=0; i<(size/2); i++)
    {
      temp = arr[i];
      if (size%2==0)
	{
	  arr[i] = arr[i + size/2];
	  arr[i + size/2] = temp;
	}
      else
	{
	  arr[i] = arr[i + size/2 + 1];
	  arr[i + size/2 + 1] = temp;
	}
    };
  printf("Resultant Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int rotate_right()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int last_num = arr[size-1];
  for(int i=size-1; i>=0; i--)
    {
      arr[i] = arr[i-1];
    }
  arr[0] = last_num;

  printf("Resultant Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
  
}

int rotate_left()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int first_num = arr[0];
  for(int i=0; i<size; i++)
    {
      arr[i] = arr[i+1];
    }
  arr[size-1] = first_num;

  printf("Resultant Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
  
}


int segregate()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int odd[size];
  int o=0;
  int even[size];
  int e=0;

  for (int i=0; i<size; i++)
    {
      if (arr[i]%2 == 0)
	{
	  even[e]=arr[i];
	  e++;
	}
      else
	{
	  odd[o]=arr[i];
	  o++;
	}
    }
  for (int i = 0; i<e; i++) arr[i] = even[i];
  for (int i = e  ; i<size; i++) arr[i] = odd[i-e];

  printf("Resultant Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int search()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
  
  int num;
  printf("Number to search: ");
  scanf("%d", &num);

  for (int i=0; i<size; i++)
    {
      if(num == arr[i])
	{
	  printf("Number found at index %d\n", i);
	  return 0;
	}
    }
  printf("Not Found\n");
}

int fold()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int arr2[size];
  
  for (int i = 0; i<size/2; i++)
    {
      arr2[i] = arr[i] + arr[size-1-i];
    }
  
  if (size%2!=0) arr2[size/2] = arr[size/2];

  size = (size%2==0) ? size/2 : size/2 + 1;
    
  for (int i = 0; i<size; i++)
    {
      arr[i] = arr2[i];
    }
  
  printf("Resultant Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");
  
}

  
int analyze()
{
  printf("Original Array: ");
  for (int i=0; i<size; i++) printf("%d ", arr[i]);
  printf("\n");

  int current_size = 1;
  int largest_size = 1;
  int current_start = 0;
  int largest_start = 0;

  printf("The increasing sequence are: ");
  printf("\n");

  for (int i=0; i<size; i++)
    {
      if (arr[i+1] > arr[i])
	{
	  current_size++;
	  continue;
	}
      current_start = i-current_size+1;

      if (largest_size<current_size)
	{
	  largest_size = current_size;
	  largest_start = current_start;
	}


      if (current_size>1)
	{
	  for (int i = current_start; i<current_start+current_size; i++)
	    {
	      printf("%d ", arr[i]);
	    }
	  printf("\n");
	}
      current_size = 1;      
      
    }
      if (largest_size == 1)
	{
	printf("No increasing sequence of numbers present\n");
	return 0;
	}

      printf("\n");
      printf("The Largest sequence is: ");
      for (int i = largest_start; i<largest_start+largest_size; i++) printf("%d ",arr[i]);
      printf("\n");

}
