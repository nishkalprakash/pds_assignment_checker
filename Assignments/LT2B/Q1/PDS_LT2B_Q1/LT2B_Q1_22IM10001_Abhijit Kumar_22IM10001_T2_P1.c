#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
typedef struct SET{
	char data;
	struct SET *next;
}SET;

void printlist(SET *I)
{
	if (I == NULL)
	{
		printf("\nEMPTY LIST\n");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	printf("\n");
}

int main()
{
SET *L1, *L2, *L;
L1=(SET *)malloc(sizeof(SET));
L2=(SET *)malloc(sizeof(SET));
L=(SET *)malloc(sizeof(SET));
SET *head;
int a,b,j,i;
char A1[MAX];
char A2[MAX];
printf("Enter the elements of List L1 :- ");
gets(A1);
printf("Enter the elements of List L2 :- ");
gets(A2);
a=strlen(A1);
b=strlen(A2);
printf("L1 = { ");
for(int i=0;i<a;i++)
{
	printf("%c, ",A1[i]);
}
printf("}\n\n");
printf("L2 = { ");
for(int i=0;i<a;i++)
{
	printf("%c, ",A2[i]);
}
printf("}\n\n");
for(i=0;i<b;i++)
{
	for(int j=0;j<a;j++);
	{
			if(A2[i]==A1[j])
			{
				A1[j]=NULL;
			}
	}
}
printf("L = { ");
for(int i=0;i<a;i++)
{
	printf("%c, ",A1[i]);
}
printf("}\n");
return 0;
}


