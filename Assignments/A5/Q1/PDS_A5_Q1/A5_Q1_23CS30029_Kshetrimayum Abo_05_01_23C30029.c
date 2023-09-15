//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, j, n, num, array[50], counter = 0; 

  printf("Enter the array size(maximum 50) : ");
  scanf("%d",&n);


  //for loop for assigning values into the array
  for(i = 0; i < n; i++)
    {
      num = rand()%91+10;
      array[i] = num;
    }
  //for loop for printing values in the array
  for(i = 0; i < n; i++)
    printf("%d\t",array[i]);
  printf("\n");


  //for loop for interchanging values following the condition
  for(i = 0; i < n/2-1; i++)
    {
      if(array[2*i] > array[2*i + 2])
	{
	  counter++;
	  num = array[2*i + 2];
	  array[2*i + 2] = array[2*i];
	  array[2*i] = num;
	}
      for(j = 0; j < n; j++)
	printf("%d\t",array[j]);
      printf("\n");

    }

    for(i = 0; i < n; i++)
    printf("%d\t",array[i]);
    printf("\n");
    printf("Number of interchanges : %d\n",counter);
  
    return 0;
}
