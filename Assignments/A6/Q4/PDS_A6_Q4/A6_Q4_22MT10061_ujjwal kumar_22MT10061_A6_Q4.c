#include<stdio.h>
#include<stdlib.h>
  int buildsetA(int n);
  int buildsetB(int n);
  int searchsetA(int A,int x);
  int searchsetB(int B,int x);
  int print(int A);
  int main()
{   
    int A;
    A=buildsetA(5);
    B=buildsetB(4);
   printf("Press 1 to perform search in set A\n ");
   printf("Press 2 to perform search in set B\n ");
   printf("Press 3 to perform union of set A and B\n ");
   printf("Press 4 to perform intersection of set A and B\n ");
   printf("Press 5 to perform difference of set A and set B\n ");
   printf("Press any other key to quit\n ");
   int k;
   printf("enter the value to perform operation");
   scanf("%d",&k);
   if(k==1)
    {    int x;
         scanf("%d",&x);
       searchsetA(A,x);
       }
   else if(k==2)
      {
	int x;
         scanf("%d",&x);
       searchsetB(B,x);
}
  else if(k==3)
 { if (A==B)
    int l;
    print(A);
   
     }
  else if(k==4)
  {
   if (A==B);
    printf("null");
   else
  printf("%d",A-B); }
 else if (k==5)
  print(A-B);

               

  
  




   return 0;
}

int buildsetA(int n)
{
      printf("enter the no. of elements that should be in set A");
      int A[n];
	scanf("%d", &n);
         int i;
	for (i=0; i<n; i++)
	{        

                 printf("enter the element %d for set A: ",i);
		scanf("%d", &A[i]);
	}

   return 0;
}

int buildsetB(int n)
{
      printf("enter the no. of elements that should be in set B");
      int B[n];
	scanf("%d", &n);
         int i;
	for (i=0; i<n; i++)
	{        

                 printf("enter the element %d for set B: ",i);
		scanf("%d", &B[i]);
	}

   return 0;
}

int searchsetA(int A,int x)
{
	flag = 0;
	for (i=0; i<n; i++)
		{
		if (A[i] == x)
			flag = 1; /* property is satisfied, so set flag */
		}
		if (flag == 1)
		{
			/* k is found (property is satisfied) */
			printf("The number %d is found in A\n", x);
		}
		else
		{
		printf("The number %d is not found in A\n", x);
		}
return 0;

}

int searchsetB(int B,int x)
{
	flag = 0;
	for (i=0; i<n; i++)
		{
		if (B[i] == x)
			flag = 1; /* property is satisfied, so set flag */
		}
		if (flag == 1)
		{
			/* k is found (property is satisfied) */
			printf("The number %d is found in A\n", x);
		}
		else
		{
		printf("The number %d is not found in A\n", x);
		}
return 0;

}

int print(int A)
{
 for (i=0; i<n; i++)
{
printf("%d ", A[i]);
}
printf("\n");
 }

