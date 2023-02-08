/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Lab Test 2
Program to find difference
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct SET
  {
  	char data;
  	struct SET* next;
  };
  typedef struct SET SET;      //making set
  SET* buildlist(char s[])
  {
  	SET* head,*ptr,*tail;
  	int i;
  	head=(SET*)malloc(sizeof(SET));    //creating list from string
  	head->data=s[0];
  	head->next=NULL;
  	tail=head;
  	for(i=1;s[i]!='\0';i++)
  	{
  		ptr=(SET*)malloc(sizeof(SET));
  		ptr->data=s[i];
  		ptr->next=NULL;
  		tail->next=ptr;
  		tail=ptr;
  	}
  	return head;
  }
  void printlist(SET* a)
  {
  	while(a!=NULL)
  	{
  		printf("%c ",a->data);         //printing list
  		a=a->next;
  	}
  	printf("\n");
  }
  void difference(SET* l1,SET* l2,int n1,int n2)
  {
    SET* d;
    char diff[10];
    int i,s=0,j,flag;
    
    
      
     while(l1!=NULL)
      	{
      		flag=0;
      		while(l2!=NULL)                               //loading difference in array
      		{
      			if(l1->data==l2->data)
      				{ 
      					flag=1;
      					break;
      				}

      			l2=l2->next;
      		}
      		if(flag==0)
      		{
      			diff[s]=l1->data;
      			
      			s++;
      		}
      	l1=l1->next;
      	}
      	diff[s]='\0';
      
      d=buildlist(diff);           //making list from array
      printlist(d);
      }


  
  int main()
  {
  	int n1=0,n2=0,i,flag,j;
  	char s1[10];
  	char s2[10];
  	char c1[10];
  	char c2[10];
  	SET* l1,*l2;
  	printf("###L1###\n");
  	printf("Enter string:");
  	scanf("%s",&s1);
  	
  	for(i=0;s1[i]!='\0';i++)
  	{
    	flag=0;
    	for(j=0;j<n1;j++)
    	{
    		if(s1[i]==c1[j])
    			flag=1;
    	}
    	if(flag==0)
    	{
    		c1[n1]=s1[i];
    		n1++;
    	}
  	}
  	c1[n1]='\0';
  	l1=buildlist(c1);
  	printf("L1: ");
  	printlist(l1);
  	printf("###L2###\n");
  	printf("Enter string:");
  	scanf("%s",&s2);
  	for(i=0;s2[i]!='\0';i++)
  	{
    	flag=0;
    	for(j=0;j<n2;j++)
    	{
    		if(s2[i]==c2[j])
    			flag=1;
    	}
    	if(flag==0)
    	{
    		c2[n2]=s2[i];
    		n2++;
    	}
  	}
  	c2[n2]='\0';
  	l2=buildlist(c2);
  	printf("L2: ");
  	printlist(l2);
  	printf("L:");
    difference(l1,l2,n1,n2);

    return 0;
  }