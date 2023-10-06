// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>
int size = 100;

void display(int a[])
{
  for (int i = 0; i < size; i++)
    {
      printf("%-3d  ", a[i]);
      if ((i+1)%10 == 0) printf("\n");
    }
  printf("\n");
}
void duplicate(int a[], int b[])
{
  for (int i = 0; i < size; i++)
    {
      b[i] = a[i];
    }
}

void Fill(int a[], int b[])
{
  printf("\nYou requested to Fill. \n");
  for (int i = 1; i >0;)
    {
      printf("\nEnter the size of the array: ");
      scanf("%d", &size);
      if (size > 0 && size <= 100) break;
      else printf("\nInvalid Input. Please Try Again.");
    }
  for (int i = 0; i < size; i++)
    {
      printf("%-3d  ", a[i] = (rand() %900) + 100);
      if ((i+1)%10 == 0) printf("\n");
    }
  printf("\n");
  duplicate(a,b);
}

void Reverse(int a[], int b[])
{
  printf("\nYou requested to Reverse. \nThe Elements of the original array are: \n");
  display(b);
  for (int i = 0; i < size/2; i++)
    {
      a[i] -= a[size-i-1];
      a[size-i-1] += a[i];
      a[i] = a[size-i-1] - a[i];
    }
  printf("The Elements of the reversed array are: \n");
  display(a);
}

void Rotate_right(int a[], int b[])
{
  printf("\nYou requested to Rotate right. \nThe Elements of the original array are: \n");
  display(b);
  int temp = b[size -1];
  for (int i = size - 1; i > 0; i--)
    {
      a[i] = b[i-1];
    }
  a[0] = temp;
  printf("\nThe Elements of the Right rotated array are: \n");
  display(a);
}

void Rotate_left(int a[], int b[])
{
  printf("\nYou requested to Rotate left. \nThe Elements of the original array are: \n");
  display(b);
  int temp = b[0];
  for (int i = 0; i < size - 1; i++)
    {
      a[i] = b[i+1];
    }
  a[size - 1] = temp;
  printf("\nThe Elements of the Left rotated array are: \n");
  display(a);
}

void Segregate(int a[], int b[])
{
  printf("\nYou requested to Segregate. \nThe Elements of the original array are: \n");
  display(b);
  int x = 0;
  printf("\nThe Elements of the Segregated array are: \n");
  for (int i = 0; i < size; i++)
    {
      if (b[i]%2 == 0)
	{
	  printf("%-3d  ", b[i]);
	  x++;
	}
      if ((x+1)%10 == 0) printf("\n");
    }
  for (int i = 0; i < size; i++)
    {
      if (b[i]%2 != 0)
	{
	  printf("%-3d  ", b[i]);
	  x++;
	}
      if ((x+1)%10 == 0) printf("\n");
    }
  printf("\n");
}

void Search(int a[], int b[])
{
  printf("\nYou requested to Search. \nThe Elements of the original array are: \n");
  display(b);
  int n, flag = 0, x;
  printf("\nEnter the interger value to be searched in the array: ");
  scanf("%d", &n);
  printf("\n");
  for (int i = 0; i < size; i++)
    {
      if (b[i] == n)
	{
	  printf("%-2d, ", x=i);
	  flag++;
	}
    }
  if (flag == 0) printf("Not Found. \n");
  else if (flag > 1) printf("\b\b\b\b\b\b and %-2d are the indices of array which store the integer %d \n", x, n);
  else if (flag == 1) printf("%-2d is the index of array which store the integer %d \n", x, n);
}

void Fold(int a[], int b[])
{
  printf("\nYou requested to Fold. \nThe Elements of the original array are: \n");
  display(b);
  printf("The Elements of the Folded array are: \n");
  for (int i = 0; i < size/2; i++)
    {
      a[i] = b[i] + b[size-i-1];
      printf("%-3d  ", a[i]);
      if ((i+1)%10 == 0) printf("\n");
    }
  if (size%2 != 0) printf("%-3d  ", b[size/2 + 1]);
  printf("\n");
}

void Analyze(int a[], int b[])
{
  printf("\nYou requested to Analyze. \nThe Elements of the original array are: \n");
  display(b);
  int pos = 0, isize = 1, mpos, misize = 1, flag = 0;
  for (int i = 1; i < size; i++)
    {
      if (b[i] > b[i-1]) isize++;
      else
	{
	  if (isize > 1)
	    {
	      flag++;
	      printf("(");
	      for (int i = 0; i < isize; i++)
		{
		  printf("%-3d, ", b[i]);
		}
	      printf("\b\b), ");
	    }
	  if (isize > misize)
	    {
	      mpos = pos;
	      misize = isize;
	    }
	  pos = i;
	  isize = 1;
	}
    }
  if (flag > 0)
    {
      printf(" \b\b are the increasing sequences. \nAnd, \nThe largest increasing seqence is (");
      for (int i = 0; i < misize; i++)
	{
	  printf("%-3d, ", b[i]);
	}
      printf("\b\b). \n");
    }
}

int main()
{
  int arr[size],dup[size], n;
  printf("\nYour 1st input must be 1\n");
  for (int i = 1; i > 0; )
    {
      printf("Please give an input. \n\n1 --- Fill \n2 --- Reverse \n3 --- Rotate right \n4 --- Rotate left \n5 --- Segregate \n6 --- Search \n7 --- Analyze \n0,9 or any higher number --- Exit \n\nInput: ");
      scanf("%d", &n);
      if (n <= 0 && n >= 9) break;

      switch(n)
	{
	case 1: Fill(arr,dup);
	  break;
	case 2: Reverse(arr,dup);
	  break;
	case 3: Rotate_right(arr,dup);
	  break;
	case 4: Rotate_left(arr,dup);
	  break;
	case 5: Segregate(arr,dup);
	  break;
	case 6: Search(arr,dup);
	  break;
	case 7: Fold(arr,dup);
	  break;
	case 8: Analyze(arr,dup);
	  break;
	default : break;
	}
    }
  printf("\n");
  
  return 0;
}
