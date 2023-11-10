#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[50];


void maxmin()
{int i,j,max=0;
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
  for(i=0;i<50;i++)
    {
      for(j=i+1;j<50;j++)
	{
	  if(arr[i]>arr[j])
	    max=arr[i];
	}	     
    }
  printf("maximum=%d",max);
}

  



void removeduplicate()
{int i,j;
 printf("\nidentical marks");//identical marks
  for(i=0;i<50;i++){
    for(j=1;j<50;j++){
      if(arr[i]==arr[j]){
	arr[i]=0;
        }
    }
  }
  for(i=0;i<50;i++)
    {
      printf("%d ",arr[i]);
    }
}
void higestFreq()
{
  int i,j,count,max=0,index=0;
  printf("the random array is \n");
  for(i=0;i<50;i++)
    {
      count=0;
      for(j=1;j<50;j++)
	{
	  if(arr[i]==arr[j])
	    {
	      count++;
		}
	}
      if(count>max){max=count;index=i;}
    }printf("the number with highst%d :%d",arr[index],count);
      
      
}

  
int main()
{
  int i,n;
  srand(time(NULL));
  for(i=0;i<50;i++){
    arr[i]=rand()%(100-20)+1;
  }
  for(i=0;i<50;i++){
    printf("%d ",arr[i]);
  }
   while(1)
    {
      printf("1.maxmin\n2. duplicate\n3.highest frequescy\n4. largest increasing\n5. largest decreasing\n6.remove duplicate\n");
      printf("enter the choice between 1 to 8:");
      scanf("%d",&n);
      if(n>6||n<1)
	{
	  break;
	}

      switch(n)
	{
	case 1: maxmin();break;
	case 3:higestFreq();break;
	case 6:removeduplicate();break;

       
	}

    }
}
