#include<stdio.h>
#include<stdlib.h>
struct SET{//defining struct
	char data;
	struct SET *next;
};
struct SET*insertstring( struct SET* head,char c[] )//Insert string
{
	int i,k,len;
	struct SET* ptr=(struct SET*)malloc(sizeof(struct SET));
	ptr=head;
	for(i=0;c[i]!='\0';i++);
		len=i;
	//printf("%d\n",len);
	for(i=0;i<len;i++)
	{
		if(i==0){
			ptr->data=c[i];
			//printf("%c",c[i]);
			ptr->next=(struct SET*)malloc(sizeof(struct SET));
			ptr=ptr->next;
		}
		else if(i>0)
		{
			//printf("%c",c[i]);
          for(k=0;k<i;k++)
          {
             if(c[k]==c[i])
             	break;
          }
          if(k==i)
          {
          	ptr->data=c[i];
          	if(i<len-1)
          	ptr->next=(struct SET*)malloc(sizeof(struct SET));
          ptr=ptr->next;
          }
		}

		

	}
	ptr=NULL;
    return head;
};
int main()
{
	struct SET *L1,*L2,*head1,*head2,*L,*head;
	struct SET *ptr;
	int count=0,count1=0,count2=0,i,j;
	char c1[100],c2[100];
	L1=(struct SET*)malloc(sizeof(struct SET));//Memory allocation
	L2=(struct SET*)malloc(sizeof(struct SET));//Memory allocation
	L=(struct SET*)malloc(sizeof(struct SET));//Memory allocation
	head=L;
	printf("L1:\n");
	printf("Enter the string:");
	scanf("%s",c1);
	head1=insertstring(L1,c1);
	printf("L2:\n");
	printf("Enter the string:");
	scanf("%s",c2);
	head2=insertstring(L2,c2);
	L1=head1;
	L2=head2;
	printf("L1={");
	while(L1)//printing L1
	{
		printf("%c ",L1->data);
		L1=L1->next;
		count1++;
		//printf("*");
	}
	printf("}");
	printf("\n");
	printf("L2={");
	while(L2)//printing L2
	{
		printf("%c ",L2->data);
		L2=L2->next;
		count2++;
	}
	printf("}\n");
	L1=head1;
	L2=head2;
	printf("L={");
	for(i=0;i<count1;i++)//insertion in L
	{
		for(j=0;j<count2;j++)
		{
      if(L1->data!=L2->data)
      count++;
       L2=L2->next;
        }
        L2=head2;
        if(count==count2)
        {
        	L->data=L1->data;
            if(i<count1-1)
        	L->next=(struct SET*)malloc(sizeof(struct SET));
        	L=L->next;
        }
        count=0;
      L1=L1->next;
	}
	L=NULL;
	L=head;
	while(L)//printing L
	{
		printf("%c ",L->data);
		L=L->next;
	}
	printf("}");
	return 0;
}