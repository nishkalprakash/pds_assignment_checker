/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Test 2 (Set-B)

Description - Program for adding two single linked list structure

*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node//defining 
{
    int data;
    node *next;
}node;

node *create_new_node(int n)//creating new node
{
	node *new_node = (node *)malloc(sizeof(node));
printf("Enter %d Numbers",n);
	scanf("%d", &(new_node->data));
	new_node->next = NULL;
	return new_node;
}
node *createlist1(int n)//creating first list
{
	if (n <= 0)
		return NULL;
	node *head1 = NULL, *ptr;
	head = ptr = create_new_node(n);
	for (int i = 1; i < n; i++)
		ptr = ptr->next = create_new_node(n);
	return head1;
}
node *createlist2(int n)//creating second list
{
	if (n <= 0)
		return NULL;
	node *head2 = NULL, *ptr;
	head = ptr = create_new_node(n);
	for (int i = 1; i < n; i++)
		ptr = ptr->next = create_new_node(n);
	return head2;
}
node *addition(node *head1, node *head2)//adding both lists
{
    node *L1 = head1, *L2 = head2;
while(l1->data!=l2->data)
{
    node *L = head1+head2;
    head1=L1->next;
    head2=L2->next;
head=ptr;
ptr=ptr->next;
}
    return head;//returning values
}
void printlist(node *head)//for printing the list after adding
{
    if (head == NULL)
    {
		printf("}\n");
		return;
	}
    node *ptr = head;
    for (; ptr->next != NULL; ptr = ptr->next)
        printf("%d, ", ptr->data);
    printf("%d \n", ptr->data);
}
int main()//main function
{
	int N;
	node *head;
printf("#### L1 ####\n");//entering the first list values
printf("Enter N: ");
scanf("%d", &N);
head1 = createlist1(N);//function calling
printf("#### L2 ####\n");
printf("Enter N: ");
scanf("%d", &N);//entering second list values
head2 = createlist2(N);
head=addition(head1, head2);
printlist(head);//for printing the final list

}
