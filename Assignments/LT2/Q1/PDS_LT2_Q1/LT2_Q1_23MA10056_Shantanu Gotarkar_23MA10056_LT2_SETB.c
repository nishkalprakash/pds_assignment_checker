//Name: Shantanu
//Roll No. 23MA10056
//SET B

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[50];

void maxMin()
{
  int max=0,min=arr[0];
  for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }
  
    for( i=0;i<50;i++)
      {  if(arr[i]>max)
	  max=arr[i];
      }

    for( i=1;i<50;i++)
      {
	if(min>arr[i])
	   min=arr[i];
      }

    printf("The Maximum values is %d\n",max);
    printf("The minimum value  is %d\n",min);
}

void duplicate()
{
  for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }

   for( i=0;i<50;i++)
     {
       for(int j=i+1;j<50;j++)
       {
	 if(arr[i]==arr[j])
	   {  printf("The repeated members are  :");
	   printf("%d",arr[i]);
	   }

       }
     }
}

void removeDuplicate()
{
   int temp;
   
for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }
 
	   
  for( i=0;i<50;i++)
    {   
       for(int j=i+1;j<50;j++)
       {
	 if(arr[i]==arr[j])
	   { temp=j;
	     printf("The repeated members are  :");
	   printf("%d",arr[i]);
	   }
	 
	 

       }
       if(temp!=49)
	 { for(int k=temp;k<50;k++)
	 {
	   arr[k]=arr[k+1];
	 }
     }
       
       if(temp!=49)
	 { for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }
	 }
       else
	 {  for( i=0;i<49;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }
	 }
       
 


}

  void highestFreq()
  {  int count=0,maxcount;
    
for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }

  for( i=0;i<50;i++)
    {  int temp;
       for(int j=i+1;j<50;j++)
       {
	 if(arr[i]==arr[j])
	   {
	   count = count+1;
	   }
	 if(count>maxcount)
	   {  maxcount=count;
	     temp=i;
	   }
       }
     }

  printf("The number with highest frequencey is %d\n",arr[temp]);
  }
 
    

int main()
{
  int l1=20,u1=100,i ,n;
  for( i=0;i<50;i++)
    {
      arr[i]=rand()%(u1-l1+1)+l1;

    }

   for( i=0;i<50;i++)
    {
      printf("arr[%d]=%d\n",i,arr[i]);

    }
   
   printf("MENU");
   priintf("1.maxMin\n
            2.duplicate\n
3.highestFreq\n
4.largestIncresaing\n
5.largestDecreasing\n
6.removeDupllicate\n
"
	   );


   
              
