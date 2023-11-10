//Roll No: 23CE10045
//Name: PRIYANSHU VERMA
//SET: B

#include<stdio.h>
#include<stdlib.h>

int arr[50];


void maxMin ()           //Function to display Max and Min values in array
{
  int i, max=arr[0], min= arr[0];

  for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }

  for(i=0; i<49; i++)
    {
      if(arr[i+1] > arr[i])
	{
	  max = arr[i+1];
	}

      if(arr[i+1] < arr[i-1])
	{
	  min = arr[i+1];
	}         
    }
      printf("\n\nMinimum Value stored in array: %d\n", min);
      printf("Maximum Value stored in array: %d", max);
}


void duplicate ()    //Function to display duplicate numbers in array
{
  int i, j, count=0 ;
  
   for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }

   printf("\n\nDuplicate: ");
   
   for (i=0; i<49; i++)
     {
       count = 0;
       
       for (j=i+1; j<50; j++)
	 {
	   if (arr[i] == arr[j])
	     {
	       count++;
	     }
	 }
              if(count > 0)
		{
		  printf("%d ",arr[i]);
		}
     }
   printf("\n");
}


void highestFreq ()  //Function to display no. with highest frequency
{
  int i, j, currentf, maxf=1, highestfnum = arr[0];

     for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }
     
  for (i=0; i<49; i++)
     {
       currentf=1;
       
       for (j=i+1; j<50; j++)
	 {
	   if (arr[i] == arr[j])
	     {
	       currentf++;
	     }	   
	 }
       
       if(currentf > maxf)
	 {
	   maxf = currentf;
	   highestfnum = arr[i];
	 }
     }
  printf("\n\nNumber with highest frequency = %d", highestfnum);
  printf("\nNumber of occurences = %d\n", maxf);
}


void largestIncreasing () //Function to display largest Increasing order
{
  int i, j, current, starting=0, currentf=1, maxfreq=1;

  for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }

   for (i=0; i<49; i++)
     {
       currentf = 1;
       for (j=i+1; j<50; j++)
	 {
	   if(arr[j] > arr[i])
	     {
	       current = i;
	       currentf++;
	     }
	    else break;
         }
        i += (currentf - 1) ;
       if(currentf > maxfreq)
	 {
	     maxfreq = currentf;
	     starting = current;	     
	 }
      
     }
   printf("\n\nLargest increasing sequence (of frequency %d) of numbers in array: ",maxfreq);
   
   for(i=0;i<maxfreq;i++)
     {
       printf("%d ", arr[starting+i]);
     }    
}


void largestDecreasing ()   //Function to display largest Decreasing order
{
    int i, j, current, starting=0, currentf=1, maxfreq=1;

  for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }

     for (i=0; i<49; i++)
     {
       currentf = 1;
       for (j=i+1; j<50; j++)
	 {
	   if(arr[j] < arr[i])
	     {
	       current = i;
	       currentf++;
	     }
	   else break;
         }
       	     i += (currentf - 1) ; 
       if(currentf > maxfreq)
	 {
	     maxfreq = currentf;
	     starting = current;
	 }
     }
     printf("\n\nLargest decreasing sequence(of frequency %d) of numbers in array: ",maxfreq);
   
   for(i=0;i<maxfreq;i++)
     {
       printf("%d ", arr[starting+i]);
     }    
}


void removeDuplicate() //Function to remove duplicates in array
{
  int i, j, size=50;


  for (i=0; i<size; i++)
    {
      printf("%d ", arr[i]);
    }
  
   for (i=0; i<size-1; i++)
     {     
       for (j=i+1; j<size; j++)
	 {
	   if (arr[i] == arr[j])
	     {
	       size--;
	       j--;
	       for( ; i < size; i++)
		 {
		   arr[i] = arr[i+1];
		 }	       
	     }
	 }              
     }
   printf("/n/nUpdated Array: ");
   
   for (i=0; i<size; i++)
    {
      printf("%d ", arr[i]);
    }
}


int main ()
  
{
  int i, choice;

  for (i=0; i<50; i++)
    {
      arr[i] = rand () % 81+20;
    }

  for (i=0; i<50; i++)
    {
      printf("%d ", arr[i]);
    }

  while (1)
    {
       printf("\n\n1:maxMin\n");
       printf("2:duplicate\n");
       printf("3:highestFreq\n");
       printf("4:largestIncreasing\n");
       printf("5:largestDecreasing\n");
       printf("6:removeDuplicate\n");

        scanf("%d",&choice);

	 if((choice <= 0) || (choice >=6))
	{
	  return 0;
	}

	 switch (choice)
	{
          case 1: {
	  maxMin();
	  break;
   	  }

	   case 2: {
	   duplicate();
	   break;
   	   }

	      case 3: {
	   highestFreq();
	   break;
   	   }

		case 4: {
	        largestIncreasing();
	        break;
   	        }

		  case 5: {
	          largestDecreasing();
	          break;
   	          }  
		  
	            case 6: {
	        removeDuplicate();
	        break;
	        }
	}
	 int main ();
    }
  return 0;
}
