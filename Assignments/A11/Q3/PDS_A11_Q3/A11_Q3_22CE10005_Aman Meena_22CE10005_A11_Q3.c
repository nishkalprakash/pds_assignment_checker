/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 9
Description :To insert a value in a already sorted linllist*/

include<stdio.h>
#include<stdlib.h>


int main() {


int n;

printf("Enter the number of elements n imputted in the array :\n");
scanf("%d",&n);
return 0;
}

int ptr,prev;

      // add the item in  ascending list
               int LINK_add_item(int val,int LINK (ptr);{

        LINK prev, first;
        first = ptr;                 // remember start
        if (ptr == NULL) return NULL;
        else if (val < ptr->data)
      { // first node is to be deleted
        ptr = ptr -> next; // second node
        first->next = NULL;
        free(first);                // free up node
        return ptr;                 // 2 nd node is new head
        }
        else                        // check rest of list
        { prev = ptr;
        ptr = ptr -> next;
      // find node to add
        while (ptr != NULL && val > ptr->data) {
        prev = ptr;
        ptr = ptr->next;
        }
        if (ptr == NULL || val != ptr->data) {
     // NOT found in ascending list
        return first;               // original
        }
        else {                      // found, add ptr node
        prev -> next = ptr -> next;
        ptr->next = NULL;
        free(ptr);                  // free node
        return first;               // original
        }}}
