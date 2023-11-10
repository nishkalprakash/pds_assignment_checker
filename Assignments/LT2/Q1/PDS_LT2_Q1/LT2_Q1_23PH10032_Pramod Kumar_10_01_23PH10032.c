//name :pramod Kumar
// roll no: 23PH10032
//set :B
#include<stdio.h>
#include<stdlib.h>
int arr[50],brr[50];
void minmax()
{ printf("the given array\n");
  for(int i=0;i<50;i++)
    printf("%d ",brr[i]);
  printf("\n");
  printf("maximumvalue of the array:=%d\n",arr[49]);
  printf("minimunm value in the array:=%d\n",arr[0]);
  return;
}
void duplicate()
{ int a[50],index=0;
  printf("array is\n");
  for(int i=0;i<50;i++)
    printf("%d ",brr[i]);
  printf("\n");

  for(int i=0;i<50;i++)
    {
	  if(arr[i]==arr[i+1])
	    {
	      a[index]=arr[i];
	      if(arr[i+2]!=a[index])
	      index++;
	    }  
    }
  printf("duplicate elements in this array\n");
      for(int i=0;i<index;i++)
	{
	  printf("%d ",a[i]);
	}
    
  return ;
}
void highestfreq()
{ int high=0,a[50],p;
  for(int i=0;i<50;i++)
    { int k=1;
      for(int j=i+1;j<49;j++)
	{
          if(arr[j]==arr[j+1]&&arr[i]==arr[j]){
	    k++;
	    p=i;}
	  
	}
      if(k>high) high=k+1;
    }
  printf("highestfreq number is =%d and frequency is %d",arr[p],high);
  return;
}
void removeduplicate()
{
  printf("array is:\n");
  for (int i=0;i<50;i++)
    { printf("%d ",brr[i]);
    }
  printf("\n");
  int a[50],index=0;;
  for(int i=0;i<49;i++)
    {
      if(arr[i]!=arr[i+1])
	{
	  a[index]=arr[i];
	  index++;
	}
    }
  if(arr[49]!=arr[48])
    {
      a[index]=a[49];
      index++;
    }
  printf("\nafter remove duplicate  the array\n");
  for(int i=0;i<index;i++)
    printf("%d ",a[i]);
  return ;
}
void largestincreasing()
{ int index=0;
  printf("the given array\n");
  for(int i=0;i<50;i++)
      printf("%d ",brr[i]);
      printf("\n");
      printf("largest increasing order\n");
      int k,p;
      for(int i=0;i<50;i++)
	{ int k=i;
	  
	  for(int j=i+1;j<50;j++)
	    {
	      if(brr[j-1]<brr[j]&&brr[i]<brr[j])
		{ p=k;
		  k=j;
	     }
	    }
	  if(index<k)
	    indek=k;
	}
      for(int i=p;i<=index;i++)
	printf("%d ",brr[i]);
	        	
		
      printf("\n");
      return ;
}
int main()
{  int n;;
  for(int i=0;i<50;i++)
    {
      arr[i]=rand()%81+20;
      arr[i]=brr[i];
    }
  printf("sorted array\n");
  for(int i=0;i<=49;i++)
    {
      for(int j=0;j<50-i;j++)
	{
	  if(arr[j]>arr[j+1]&&j<49)
	    {
	      int temp=arr[j];
	      arr[j]=arr[j+1];
	      arr[j+1]=temp;
	    }
	}	}
      for(int i=0;i<50;i++)
	{
	  printf("%d ",brr[i]);
	}
      while(1)
    {
      printf("\nenter your choice in 1,2,3,4,5,6\n");
      scanf("%d",&n);
      switch(n)
       {
        case 1:minmax();
         break;
        case 2:duplicate();
          break;
        case 3: highestfreq();
          break;
         case 4: largestincreasing();
           break;
       //  case 5: largestdecreasing();
            // break;
          case 6: removeduplicate();
              break;
          default :exit(0);
      }
   }
      return 0;
    }
