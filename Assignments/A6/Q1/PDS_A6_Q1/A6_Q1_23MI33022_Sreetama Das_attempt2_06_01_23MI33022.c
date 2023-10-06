#include <stdio.h>
#include <stdlib.h>
int arr[100], size;
void fill()
{
  printf("Enter size: ");
  scanf("%d",&size);
  while(1){
  if (size>=1 && size<=100)
    {
      int j;
      for(j=0; j<size; j++) //generating numbers
    {
      arr[j]= (rand()%900)+100; //taking numbers between 100 to 999
      printf("%d \t ", arr[j]); //printing the random numbers
    }
      printf("\n");
      break;
    } 
      else
	{
	  printf("Enter size: ");
	  scanf("%d", &size);
	}
  }
}

void exchange()
{
  int a,j,temp;
  for(int i= 0; i<size; i++)
  {
  printf("%d \t", arr[i]);
  }
  printf("\n ");
  if(size%2!=0)
    {
      a= (size/2)+1;
    }
  else
    a= size/2;
  for(j=0; j<(size/2); j++)
    {
      temp= arr[j];
      arr[j]= arr[a];
      arr[a]= temp;
      a++;
    }
  for(j=0; j<size; j++)
    {
      printf("%d\t ", arr[j]);
    }
}

void rotate_right()
{
  int k, s;
  s= arr[size-1];
   for(int i= 0; i<size; i++)
  {
  printf("%d \t", arr[i]);
  }
   printf("\n ");
   for(int j=(size-1); j>=1; j--)
     {
     
       arr[j]= arr[j-1];
     }
     arr[0]= s;
    for(k= 0; k<size; k++)
  {
  printf("%d \t", arr[k]);
  }
}

void rotate_left()
{
  int k, s,j;
  s= arr[0];
   for(int i= 0; i<size; i++)
  {
  printf("%d \t", arr[i]);
  }
   printf("\n ");
   for(j= 0; j<(size-1); j++)
     {
       arr[j]= arr[j+1];
     }
       arr[j]=s;

   for(k= 0; k<size; k++)
  {
  printf("%d \t", arr[k]);
  }
}

void segregate()
{
  int e[100],j,k=0;
   for(int i= 0; i<size; i++)
  {
  printf("%d \t", arr[i]);
  }
   printf("\n ");
   for(j=0; j<=size; j++)
     {
       if (arr[j]%2==0)
	 {
         e[k]= arr[j];
	 printf("%d\t ", e[k]);
	 k++;
	 }
       else
	 {
	 e[k]= arr[j];
	  printf("%d\t ", e[k]);
	 k++;
	 }
     }
}

void search()
{
  int n;
  printf("Enter integer: ");
  scanf("%d", &n);
  for(j=0; j<=size; j++)
  if(n== arr[j])
    {
      printf("%d", j);
    }
  else
    printf("Not found");
}
int main()
{
  int choice;

  while(1)
    {
      
     printf("Menu choices: ");
      printf("1- Fill\n");
      printf("2- Exchange\n");
      printf("3- Rotate right\n");
      printf("4- Rotate left\n");
      printf("5- Segregate\n");
      printf("6- Search\n");
      printf("7- Fold\n");
      printf("8- Analyze\n");
      printf("0,9 or any higher number- Exit\n");

       printf("Enter choice: ");
       scanf("%d", &choice);
      if(choice==1)
	{
	 fill();
	}
      if(choice==2)
	{
	  exchange();
	}
      if(choice==3)
	{
	  rotate_right();
	}
      if(choice==4)
	{
	  rotate_left();
	}
      if(choice==5)
	{
	  segregate();
	}
       if(choice==6)
	{
	  search();
	  }
      if(choice<=0 || choice>=9)
	break;
    }
  return 0;
}
