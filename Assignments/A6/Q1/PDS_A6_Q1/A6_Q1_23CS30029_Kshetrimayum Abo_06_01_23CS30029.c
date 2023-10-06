#include<stdio.h>
#include<stdlib.h>

int arr[100], size;

void fill()
{
  do{
    printf("Enter size of the array : ");
    scanf("%d",&size);
  } while(size > 100 || size < 0);
  for(int i = 0; i < size; i++)
    {
      arr[i] = rand()%900 + 100;
      printf("%d\t",arr[i]);
    }
}

void exchange() //Work needs to be done here
{
  for(int i = 0; i < size; i++)
    {
      printf("%d\t",arr[i]);
    }
  printf("\n");

  int BinValue;
    for(int i = 0; i <= size/2; i++)
      {
	BinValue = arr[i];
	arr[i] = arr[i + size/2 ];
	arr[i + size/2 ] = BinValue;
      }
  for(int i = 0; i < size; i++)
    {
      printf("%d\t",arr[i]);
    }
  printf("\n");  
}

void RotateRight()
{
    for(int i = 0; i < size; i++)
    {
      printf("%d\t",arr[i]);
    }
  printf("\n");

  int i = 1;
  int array[size];
  while(1)
    {
      if(i == size)
	{
	  array[0] = arr[size-1];
	  break;
	}
	else
	  array[i] = arr[i-1];
      i++;
          
      
    }
  
      for(int j = 0; j < size; j++)
	{
	  printf("%d\t",array[i]);
	}
  printf("\n"); 
}

void search()
{
  int value, i, counter = 0;
  for(int i = 0; i < size; i++)
    {
      printf("%d\t",arr[i]);
    }
  printf("\n");
  
  printf("Enter the value to be searched : ");
  scanf("%d",&value);
  for(i = 0; i < size; i++ )
    {
      if (arr[i] == value)
	{
	  printf("index : %d\n",i);
	  counter++;
	}

    }
  if(counter == 0)
    printf("Not Found\n");
}

void fold()
{
  if(size%2 == 0)
    {
      int array[size/2];
      for(int i = 0; i < size/2; i++)
	{
	  array[i] = arr[i] + arr[size-(i+1)];
	  printf("%d\t",array[i]);
	}
      printf("\n");
    }
  else
    {
      int array[size/2+1];
      for(int i = 0; i < size/2; i++)
	{
	  array[i] = arr[i] + arr[size-(i+1)];

	}
      array[size/2] = arr[size/2];
      for(int i = 0; i < size/2+1; i++)
	{
	  printf("%d\t",array[i]);
	}
   

      printf("\n");
    }
}

int main()
{
  int option;
  while(1)
    {
      printf(" 1---- Fill\t\n 2---- Exchange\n 3---- Rotate Right\n 4---- Rotate Left\n 5---- Segregate\n 6---- Search\n 7---- Fold\n 8---- Analyze\n 9---- Exit\t\n");
      scanf("%d",&option);
      if(option >= 9 || option == 0) option = 9;

      //The code for checking the option inputted by the user
      switch(option)
	{
	case 1: {
	  fill();
	  printf("\n");
	  break;
	}
	case 2:{
	  exchange();
	  break;
	}
	case 3:{
	  RotateRight();
	  break;
	}
	case 6:{
	  search();
	  break;
	}
	case 7:{
	  fold();
	  break;
	}
	case 9:{
	  return 0;
	}
	  
	}
    }
}
