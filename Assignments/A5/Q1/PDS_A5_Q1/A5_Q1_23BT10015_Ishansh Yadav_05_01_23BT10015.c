//Roll No. - 23BT10015.c
//Name - Ishansh Yadav

#include<stdio.h>
#include<stdlib.h>

int main()
{ int i, n, num[50], temp, count=0;
  printf("Enter the number of imtegers to be generated:");
  scanf("%d", &n);
  for(i=0;i<n;i++)
    {num[i]=10+ rand() % 90;
     printf("%d,", num[i]);
    }

  for(i=0;i+2<=n-1;i=i+2)
    {
      if(num[i]>num[i+2])
	{
	temp=num[i];
        num[i]=num[i+2];
        num[i+2]=temp;
        count++;
	}
    }
  printf("Number of interchanges are %d", count);
  printf("The new order will be:\n");
  for(i=0;i<n;i++)
    printf("%d\n", num[i]);
  return 0;
}
  
