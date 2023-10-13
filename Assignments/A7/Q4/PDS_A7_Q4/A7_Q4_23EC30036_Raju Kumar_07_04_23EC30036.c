// Name : Raju Kumar
// Roll no : 23EC30036

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{

  int arr[50] , size , flag ;
  printf(" Enter the  array :");
  scanf(" %d " , &size );
  // fanding random array  
  for(int i = 0 ; i < size ; i++)
    {
    arr[i]= rand()%41 + 10;
  }
  printf(" orignal array :\n ");
  for(int i =0 ; i < size ; i++)
    {
    printf(" %d ", arr[i]);
  }
  //finding  triplets sum = 60 
  for(int i = 0 ; i < 50 ; i++)
    {
    for(int j = i +1 ; j < 50 ; j++)
      {
      for(int k = j + 1 ; k < 50 ; k++)
	{
	if (arr[i] + arr[j] + arr[k] == 60)
	  {
	    flag==1;
	    printf(" triplets  are %d %d %d\n " , arr[i] , arr[j] , arr[k]);
	}
      }
    }
  
  if (flag==0);
    }
  return 0 ;
}
    
