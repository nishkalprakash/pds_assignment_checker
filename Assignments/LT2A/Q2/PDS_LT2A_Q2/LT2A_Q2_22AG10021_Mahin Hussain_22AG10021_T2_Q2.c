/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Lab Test No.:2
Description: Program to add two list.
*/
 #include<stdio.h>
 #include<stdlib.h>

typedef struct SET{          
	int data;
	struct SET *next;
}SET;

SET * createlist(int n,int A[])      //function to create linked list
{
	SET *head,*p=head;
	p=(SET *)malloc(sizeof(SET));
	p->data=A[0];
	p->next=NULL;
	head=p;
	for(int i=1;i<n;i++)
	{
		p->next=(SET *)malloc(sizeof(SET));
		p=p->next;
		p->data=A[i];
	}
	p->next=NULL;
	return(head);
}

void printlist(SET *head)  //function to print linked list
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}


int main()
{
	SET *L1,*L2,*L;
	int m,n;
	printf("Enter N:");          //creating the two lists using array
	scanf("%d",&m);
	int a[m];
	for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
	L1=createlist(m,a);
	printf("\nEnter N:");
	scanf("%d",&n);
	int b[n];
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	L2=createlist(n,b);
	int v[m*n],z[m*n],x=0,f=0;
	for(int i=0;i<m;i++)        //adding the two lists
	{
		for(int j=0;j<n;j++)
		{
		v[x]=a[i]+b[j];
		x++;
		}
	}
	int flag=0;        //flag checks for repetition of elements
	for(int i=0;i<m*n;i++)        //removing the repeated elements from the list
	{
		for(int j=i+1;j<m*n;j++)
		{
			if(v[i]==v[j])
			{
				flag++;
			}

		}
		if(flag==0)
		{
			z[f]=v[i];
			f++;
		}
		flag=0;
	}
	 L=createlist(f,z);    //creating list after addition
	printf("\nL1 =  ");       
	printlist(L1); 
	printf("\n+\n"); 
	printf("L2 =  ");       
	printlist(L2); 
	printf("\n=\n"); 
	printf("L =  ");       
	printlist(L);                  //printing in desired format
	return 0;
}