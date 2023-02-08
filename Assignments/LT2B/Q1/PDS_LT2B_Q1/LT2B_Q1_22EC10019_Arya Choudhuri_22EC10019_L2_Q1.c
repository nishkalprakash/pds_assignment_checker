/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Test No : 2
	Description : Program to carry out difference of two character lists
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct SET 
{
	char data;
	struct SET* next;
}SET;

SET* createlist(SET* head , char s[MAX])		//function to create a linked list from a string as user input
{
	SET* ptr = head;

	int i = 0;

	int length = 0;

	while( s[length] != '\0')		// determining length of string
	{
		length++;
	}
	
	for (int i = 0 ; i < length ; i++)
	{
		ptr -> data = s[i];
		ptr -> next = (SET*)malloc(sizeof(SET));

		if (i==length-1)
			ptr -> next = NULL;
		else
			ptr = ptr -> next;
	}

	return head;

}

void printlist( SET* head)			//function to print elements of linked list
{
	printf("{ ");
	SET* ptr = head;

	while ( ptr -> next !=NULL)
	{
		printf("%c, ", ptr -> data);
		ptr = ptr -> next;
	}
	printf("%c" , ptr->data);
	printf(" }");
}

SET* create_diff_list ( SET* head1 , SET* head2 , SET* head) 		// function to create L1-L2
{
	SET* ptr = head;

	SET* ptr1 = head1;

	int rep = 0;				
	while( ptr1 != NULL)				// used to count number of elements in L1 but not in L2
	{
		SET* ptr2 = head2;
		char c = ptr1 -> data;
		int flag = 0;
		while( ptr2 != NULL)
		{
			char d = ptr2 -> data;
			if (d == c)
			{
				flag++;
				break;
			}
			ptr2 = ptr2 -> next;
		}
		if (flag == 0)
			rep++;
		ptr1 = ptr1 -> next;
	}

	int l = 0;

	SET* ptr11 = head1;
	
	while( ptr11 != NULL)			// used to add the elements in L1 but not in L2 to L
	{
		SET* ptr22 = head2;
		char c = ptr11 -> data;
		int flag = 0;
		while( ptr22 != NULL)
		{
			char d = ptr22 -> data;
			if (d == c)
			{
				flag++;
				break;
			}
			ptr22 = ptr22 -> next;
		}
		if (flag == 0)
		{
			SET* pointer = head;		// checks so that there is no repetition in L
			int check = 0;
			while (pointer != NULL)
			{
				if (pointer -> data == c)
					check++;
				pointer = pointer -> next;
			}
			if( check == 0)
			{
				ptr -> data = c;
				ptr -> next = (SET*)malloc(sizeof(SET));
				if (l == rep-1)
					ptr -> next = NULL;
				else
					ptr = ptr -> next;
				l++;
			}

		}
		ptr11 = ptr11 -> next;
	}

	return head;
}
int main()
{
	char s1[MAX];
	char s2[MAX];

	printf("####L1####\n");
	printf("Enter string: ");
	scanf("%s" , s1);

	printf("####L2####\n");
	printf("Enter string: ");
	scanf("%s" , s2);

	SET* head1 = (SET*)malloc(sizeof(SET));
	head1 = createlist( head1 , s1);

	SET* head2 = (SET*)malloc(sizeof(SET));
	head2 = createlist(head2 , s2);

	SET* head = (SET*)malloc(sizeof(SET));

	head = create_diff_list(head1 , head2 , head);

	printf("L1 = ");
	printlist( head1 );

	printf("\n");
	printf("L2 = ");
	printlist( head2 );

	printf("\n");
	printf("L1 - L2 = ");
	printlist(head);
	
	return 0;

}
