0/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:6
Question no:4
description:merge*/

#include <stdio.h>
int *BuildSet (int *A,int n)
{
	int i;
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
	     scanf("%d",A[i]);
	}
}
int SearchSet(int *A,int n,int x)//define search set
{
    int i=0;int j=0;
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{if(*(A+i)==*(A+j))
         return 1;//return 1 if element is present
        } 
     }
	return 0;
}
int *Intersection(int *A,int a,int *B,int b)
{
	int i=0;int j=0;int flag=0;
	for(i=0;i<n;i++)
        {
	     for(j=0;j<n;j++)
	     {
	         if(*(A+i)==*(B+j))
	         printf("%d ",*(B+j));
	     }
	}
	return NULL;
}
int main()
{
	int n1;
	int a[n1];
	int n2;
	int b[n2];
	printf("Enter size:");
	scanf("%d",&n1);//size of first array
	BuildSet (&a[0],n1);
	printf("Enter size:");
	scanf("%d",&n1);//size of second array
	BuildSet(&b[0],n2);
	int ch;
	printf("Enter choice:Press ‘1’ to perform search in Set APress ‘2’ to perform search in Set B\nPress ‘3’ to perform Union of Set A and Set B\nPress ‘4’ to perform Intersection of Set A and Set B\nPress ‘5’ to perform Difference of Set A and Set B\n Press any other key to quit");
	scanf("%d",&ch);
	int x;int flag=0;
	switch(ch)
	{
	   case 1:printf ("Enter element to be searched");
	          scanf("%d",&x);
	          SearchSet(&a[0],n1,x);//call search set
	          if(flag==0)
	          printf("%d not present",x);
	          else
	          printf("%d present",x);break;
	    case 2:printf ("Enter element to be searched");
	          scanf("%d",&x);
	          SearchSet(&b[0],n2,x);//call search set for b
	          if(flag==0)
	          printf("%d not present",x);
	          else
	          printf("%d present",x);break;
	    case 5:Intersection(&a[0], n1, &b[0], n2);//call intersection

	}
	return 0;
}
