//roll no. : 23GG10041
//name: samriddhi ahuja
#include <stdio.h>
#include <stdlib.h>
  int size,arr[105];
int main()
{
  printf("enter the size of the array=\n");
  scanf("%d",&size);
  if (size>100)
    return 0;
  else
    printf("fill function:\n");
    fill();
    printf("\n exchange function=\n");
    exchange();
    printf("\n rotate right function=\n");
    rotateright();
    printf("\n rotate left function=\n");
    rotateleft();
    printf("\n search function\n");
    search();
    printf("\n fold function=\n");
    fold();
    printf("\n analyze function=\n");
    analyze();
    
    return 0;
 }



 
int fill()
 {
   int i;
   printf("array:\n ");
 for (i=0;i<size;i++)
    {arr[i]=rand()%900 + 100;
      printf("%d,", arr[i]);}

 }
int exchange()
{
  int temp,i,size;
printf("exchanged array = \n");
for(i=0;i<50; i++ )
  {temp=arr[i];
    arr[i]=arr[50+i];
   arr[50+i]=temp;
      printf("%d,", arr[i]);
  }
 for(i=50;i<100; i++ )
   printf("%d,",arr[i]);
 return 0;
}





int rotateright()
{
  int i, size,temp;
   printf("fill function:\n");
    fill();
  printf("rotated array:\n");
 
  for (i=1;i<100;i++)
    {temp=arr[i];
	arr[i]=arr[i-1];
	arr[i-1]=temp;
	printf("%d,", arr[i]);
    }
 
 
  return 0;
}






int rotateleft()
  {
  int i, size,temp;
   printf("fill function:\n");
    fill();
  printf("rotated array:\n");
    
  for (i=0;i<99;i++)
    {temp=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=temp;
	printf("%d,", arr[i]);
	
    }
   arr[99]=arr[0];
      printf("%d",arr[99]);
 
  
  return 0;
}












int search()
{
  int n,i,size,count=0;
  printf("enter the value to be searched=\n");
  scanf("%d",&n);
  for(i=0;i<100;i++)
    {if (n ==arr[i])
	count++;}
      printf("element %d is loacated at arr[%d]\n",n,arr[count]);
  if (count==0)
	     printf("not found\n");
  return 0;
}







int fold()
{
  int i,size,j;
  printf("folded array=\n");
  for(i=0;i<100;i++)
    {
	j=arr[i]+arr[99-i];
      printf("%d,",j);
    }
  return 0;
}








int analyze()
{
  int i,j,size,count=0;
  printf(" increasing sequences are=\n");
  for(i=0;i<100;i++);
  { if (arr[i]<arr[i+1])
      count++;
	printf("%d",arr[i]);
  }
  return 0;
}
	    
 
      
