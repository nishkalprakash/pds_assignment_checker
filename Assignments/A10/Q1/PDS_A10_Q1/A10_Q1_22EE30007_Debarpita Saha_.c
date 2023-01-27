/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 10
* Description : Program to take input and print list
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void print_list (struct Node *head)
{
struct Node *temp;
temp = head;
while(temp!=NULL)
{
if(temp->next ==NULL) printf("%d. END OF LIST \n", temp->data); // for the last element
else printf("%d -> ", temp->data); // for other elements
temp = temp->next;
}
}