/* 
    Section 14
    Roll no : 22EC10019
    Name : Arya Choudhuri
    Assignment No : 11
    Description : Program to modify linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list* link;
};

struct list* createlist( struct list* head , int n)
{
    struct list* ptr = head;

    printf("Enter elements:\n");

    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &ptr->data);
        ptr -> link = (struct list*)malloc(sizeof(struct list));

        if ( i == n-1)
            ptr -> link = NULL;
        else
            ptr = ptr -> link;
    }
    return head;
}

void printlist ( struct list * head)
{
    struct list* ptr = head;

    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

struct list* del_head( struct list* head)
{
	struct list* ptr = head;

	head = ptr -> link;
	free(ptr);
	return head;
}

struct list* del( struct list* head , int m , int* p)
{
	struct list* ptr = head;
	int flag = 0;
	while(ptr -> link -> link !=NULL )
	{
		if (ptr -> link -> data == m)
		{
			ptr -> link = ptr -> link -> link;
			ptr -> link -> link = NULL;
			flag++;
			break;
		}
		ptr = ptr -> link;
	}
	if (flag == 1)
	{
		return head;
	}
	else
	{
		if (ptr -> link -> data == m)
		{
			ptr -> link = NULL;
		}
		else
		{
			printf("%d does not exist" , m);
			*p = 1;

		}
		return head;
	}
	
}
int main()
{
    int n;

    printf("Enter number of elements in list:");
    scanf("%d" , &n);

    struct list* head = (struct list*)malloc(sizeof(struct list));
    head = createlist( head , n );

    int m;

    printf("Enter element to be deleted:");
    scanf("%d" , &m);

    int check = 0 ;
    int *p = &check;

    if ( m == head -> data)
    	head = del_head( head );
    else
    	head = del (head , m , p);

    if (*p==1)
    	return 0;
    else
	{
		printf("Output after deleting %d:\n" , m);
		printlist(head);
		return(0);
	}
}