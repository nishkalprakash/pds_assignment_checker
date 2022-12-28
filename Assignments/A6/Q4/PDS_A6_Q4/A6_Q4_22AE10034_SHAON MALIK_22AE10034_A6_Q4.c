/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 6
 Question No :4
*/

#include <stdio.h>
#include <stdlib.h>

int* BuildSet(int* A,int n) //to store n values in set A 
{
	A=(int*)malloc(n*sizeof(int)); //initialize A 
    printf("Enter values" );
    for (int i = 0; i< n; i++) //loop for storing values in a set
      scanf("%d",&A[i]);
  return A;
}

int SearchSet(int* A,int x,int n)//to search for x in A
{
  int pos=-1;
  for(int i=0;i<n;i++)
  {
  	if(x==A[i])
  	{
  		pos=i;
  		break;
  	}
  }
  return pos;
}

int main()
{
	int *A,*B,;
	int l1,l2;
	int key;
	boolean flag=true;

	printf("Enter size:");
	scanf("%d",&l1);
    A=BuildSet(A,l1);

  printf("Enter size:");
	scanf("%d",&l2);
    B=BuildSet(B,l2);

    do
    {
      printf(" Press ‘1’ to perform search in Set A

                 \n Press ‘2’ to perform search in Set B

        \n Press ‘3’ to perform Union of Set A and Set B

        \n Press ‘4’ to perform Intersection of Set A and Set B

      \n  Press ‘5’ to perform Difference of Set A and Set B

      \n  Press any other key to quit");

      scanf("%d",&key)	

      switch(key)
      {

        case 1: printf("Enter number to seach");
                int num;
                scanf("%d",num);
                int x= SearchSet(A,num ,l1);
                if(x>=0)
                	printf("%d found in position %d",num,(x+1));
                else
                	printf("Not found" );
                break;

        case 2: printf("Enter number to seach");
                int num1;
                scanf("%d",num1);
                int x1= SearchSet(B,num1 ,l2);
                if(x>=0)
                	printf("%d found in position %d",num,(x1+1));
                else
                	printf("not found");
                break;

        default: flag=false;

      }

    }while(flag==true);

}