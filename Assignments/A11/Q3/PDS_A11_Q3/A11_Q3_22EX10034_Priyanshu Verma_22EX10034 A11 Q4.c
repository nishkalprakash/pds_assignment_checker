/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 11
* Description : program that will delete a value from an already existimg linked list
*/ 

#include <stdio.h>
#include<stdlib.h>

LINK delete_item(int val, LINK ptr) {
LINK prev, first;
first = ptr; 
if (ptr == NULL) return NULL;
else if (val == ptr -> data)
{ 
ptr = ptr -> next; 
first->next = NULL;
free(first); 
return ptr;
}
else
{ prev = ptr;
ptr = ptr -> next;

while (ptr != NULL && val > ptr->data) {
prev = ptr;
ptr = ptr -> next;
}
if (ptr == NULL || val != ptr->data) {

return first; 
}
else { 
prev -> next = ptr -> next;
ptr->next = NULL;
free(ptr); 
return first; 
}}}
