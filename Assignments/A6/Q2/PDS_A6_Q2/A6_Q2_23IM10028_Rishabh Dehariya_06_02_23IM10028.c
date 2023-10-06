//Roll No- 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
#include<stdlib.h>

int sum();
int max();
int reverse();


int main()
{
  int ar[30];
  for(int i=0;i<30; i++)
	{
	  ar[i] = rand()%10 + 20;
        
	  printf("\t %d", ar[i]);
	}

  // sum(n);
  max();
  return 0;
}

/*int sum(int n)
{
  n = ar[];
  if n==30 return(1);
  else return n+(n-1);
}
*/
int max()
{
  int ar[30];
  for(int i=0;i<30; i++)
	{
	  ar[i] = rand()%10 + 20;
        }
  int i;
  int largest;

  largest = ar[0];
  for ( i =1; i<30;i++)
    if(largest<ar[i])
      largest=ar[i];
  printf("\n Max : %d", largest);
  return(largest);
}
  
  
