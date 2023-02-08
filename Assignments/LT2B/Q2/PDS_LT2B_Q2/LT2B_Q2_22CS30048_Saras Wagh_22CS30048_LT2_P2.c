#include<stdio.h>
#include<stdlib.h>
void askuser(int *m,int *n)
{
	
	printf("Enter M:");
	scanf("%d",m);
	printf("Enter N:");
	scanf("%d",n);
};
void printdata(int n,int** a,int m,int *c)
{
	if(*c<m)
	{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(*(a)+i));
	}
	printf("\n");
	a++;
	(*c)++;
	//printf("%d",*c);
	printdata(n,a,m,c);
    }
};

/*void inputelements(int n1,int n2,int **a)
{
	int n=n1*n2;
	int i=0;
	printf("Enter %d elements:\n",n);
    
    	
    	for(int j=0;j<n1;j++)
    		for(int k=0;k<n2;k++)
    		{
    			printf("Enter the element %d:",(i++)+1);
    			scanf("%d",*(*(a+i)+j));
    		}
    	
    
};*/
int main()
{
	int m,n,i,k=0;
	int count=0;
	int *p;
    askuser(&m,&n);
    //printf("%d %d",m,n);
    int *arr[m];
    for(i=0;i<m;i++)
    {
    	arr[i]=(int *)malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
         {
         	printf("Enter the element %d:",(k++)+1);
         	scanf("%d",&arr[i][j]);
         }
         //p=&arr[0][0];
    //inputelements(m,n,arr);
    /*for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	//printf("Enter the element %d:",i+1);
    	printf("%d ",arr[i][j]);
    }*/
    printdata(n,arr,m,&count);
	return 0;
}