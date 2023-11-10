//Roll No:21GG10028
//Name:Pidamarthi AnilKumar
//Set B

#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter the corresponding number to compute the function:\n");
  printf("1.maxMin ; \n
         2.highestfreq:\n
         3.duplicate :\n
         4.largestIncreasing:\n
         5.largestDecreasing:\n
         6.removeDuplicate:\n ");


  int arr[50],a,j=0,k;
  for(int i=0;i<50;i++)
    {
      int j=rand()%81+20;
      arr[i]=j;
    }
  void highestfreq()
  {
    int max,k,f;
    printf("the valuues showed int he array is :\n");
    {
      for(int i=0;i<50;i++)
	{
	  printf("%d",arr[i]);
		 {
		   printf("\n");
		   for(int j=0;j<50;j++)
		     {
		       k=0;
		       for(int i=j+1;i<50;i++)
			 {
			   if(arr[i]=arr[j])
			     {k++;
			       if(max_f<k)
				 {max_f=k;
				   index=j;
				 }
			     }
			   printf("the number with highest frequency is %d with frequency %d \n",arr[index],max-f);
			 }
		     }
		 }
		 void largestIncreasing()
		   int b,c;
		 {for(int i=0;i<50;i++)
		     {b[i]=0;

		     }
		   for(int i=0;i<50;i++)
		     {c[i]=0;}
		   for(int j=0;j<50;j++)
		     {for(int i=j+1;i<50;i++)
			 {if(arr[i]<arr[i+1])}
		       {b[i]=arr[j]
			   b[i+1]=arr[j+1]
			   }
		     }
		   return 0;
