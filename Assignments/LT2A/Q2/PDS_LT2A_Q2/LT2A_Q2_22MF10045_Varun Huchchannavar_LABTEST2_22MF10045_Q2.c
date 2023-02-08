/* Name: Varun Huchchannavar
   Section : 14
   Roll no: 22MF10045
   */
#include <stdio.h>
#include <stdlib.h>

struct node{
	int size;
	int array[50];
	struct node* next;
};

int main()
{
	struct node* L1; // Here L1 is the first list.
	struct node* L2; // Here L2 is the second list.
	L1=(struct node*) malloc(sizeof(struct node));
	L2=(struct node*) malloc (sizeof(struct node));
	int size1, size2;
	printf("Enter size of first list \n");
	scanf("%d",&size1);
	printf("Enter size of the second list \n");
	scanf("%d",&size2);
	L1->size=size1;
	L2->size=size2;
    int i,j;
    printf("Enter the values of the first list \n");
    for(i=0;i<size1;i++)
    {
    	scanf("%d",&(L1->array[i]));
    }
    printf("Enter the values of the second list \n");
    for(i=0;i<size2;i++)
    {
    	scanf("%d",&(L2->array[i]));
    }
    printf("{L1: ");
    for(i=0;i<size1;i++)
    {
    	printf("%d ",L1->array[i]);
    }
    printf("}");
    printf("\n");
    printf("{L2: ");
    for(i=0;i<size2;i++)
    {
    	printf("%d ",L2->array[i]);
    }
    printf("}");
    struct node* L3;
    L3=(struct node*) malloc (sizeof(struct node));
    int count=0;
    for(i=0;i<size1;i++)
    {
    	for(j=0;j<size2;j++)
    	{
          L3->array[count]=L1->array[i] + L2->array[j];
          count++;   
    	}
    }
    printf("\n");
    printf("{L3:");
    for(i=0;i<count;i++)
    {
    	printf("%d ",L3->array[i]);
    }
    printf("}");
    int array[count]; int flag=0;
    for(i=0;i<count;i++)
    {
    	array[i]=L3->array[i];
    }
    return 0;
}