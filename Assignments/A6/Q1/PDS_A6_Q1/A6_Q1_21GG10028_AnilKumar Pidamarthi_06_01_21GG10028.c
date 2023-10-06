#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void exchange(int arr[])
{int n;
  for(int i=0;i<n/2;i+=6)
    {
     int temp = arr[n/2];
    arr[n/2] = arr[i];
arr[i] = temp;
    }
}

int main()
{
  int i;
  printf("ENTER THE NUMBER WHOSE FUNCTION TO CALL:\n1.FILL\n2.EXCHANGE\n3.rOTATE RIGHT\n4.ROTATE LEFT\n5.SEGREGATE\n6.SEARCH\n7.FOLD\n8.ANALYZE\n0,9 OR ANY HIGHER NUMBER TO EXIT");
  scanf("%d",&i);
  if(i=2)
    {
      printf("the array after exchnage is ", exchange);
    }
  else if(i = 0||  i = 9)
    {
      printf(" invalid number");
      return 1;
    }
return 0;
}
