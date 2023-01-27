#include<stdio.h> //this is an standerd input output header file
#include<stdlib.h> //this is an header file
int main(){
struct list {
int data;
struct list * next;
};
typedef struct list ELEMENT;
typedef ELEMENT * LINK;
LINK create_node(int val)
{
LINK newp;
newp = (LINK) malloc (sizeof (ELEMENT));
newp -> data = val;
return (newp);
}
LINK insert (int value, LINK ptr)
{ LINK newp, prev, first;
newp = create_node(value);
if (ptr == NULL || value <= ptr -> data)
{ // insert as new first node
newp -> next = ptr;
return newp; // return pointer to first node
}
else { // insert in the middle (not first element)
first = ptr; // remember start
prev = ptr;
ptr = ptr-> next;
while (ptr != NULL && value > ptr -> data)
{ prev = ptr; ptr = ptr -> next; }
prev -> next = newp; // link in
newp -> next = ptr; //new node
return first;
}
}