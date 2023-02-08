
/*
Section 14

Roll No : 22CE10005

Name : #Aman Meena#

DESCRIPTION : A single linked list structure to store a list of character strings.

LAB-TEST-2 */


#include<stdio.h>
#include<stdlib.h>
       
       typedef struct SET{                  //Defining the linklist structure.

  	char data;

  	int  *next;                 

	}SET;

 	struct SET *createlist(int n,int A[])          //Defining a function creatlist to create an linklist.
	{

        struct SET *head=NULL;

        struct SET *tail;

        int i,size;

        head =(struct SET *)malloc(sizeof(struct SET));            //Using malloc function.
	head->data =A[0];

	tail=head;
	for(i=1;i<n;i++)
	{
	tail->*next=(struct SET*)malloc(sizeof(struct SET())
	tail=tail->next;
	tail->data=A[i];
	}

	tail->*next=NULL;
	return head;
	}
	void printlist(struct SET*I)

	{
	struct SET*temp;
	temp=I;
	while(temp!=NULL)

	{
	if(temp->next==NULL)
	printf("%d END OF LIST\n",temp->data);
	elsea single linked list structure to store a list of character strings.
	printf("%d ->",temp->data);


	temp =temp->data;

	}
	}}
         
        int main()  {      

        char L1,L2,L;

        printf("##########L1###########");            
        printf("Enter String L1 :\n");
        scanf("%s",L1);
        printf("%s",L1);
	
        printf("##########L2###########");
        printf("Enter String L2 :\n");
        scanf("%s",L2);
        printf("%s",L2);

        L=L1-L2;
        printf("L=%s",L);
             
        return 0;
}
        

        
	
