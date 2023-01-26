#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node{
int data;
struct Node* next;
};
int largestElement(struct Node* head)
{
int max = INT_MIN;
while(head != NULL){
if(max < head->data)
max = head->next;
head = head->next;
}
return max;
}
int smallestElement(struct Node* head)
{
int min = INT_MAX;
while(head != NULL){
if(min > head->data)
min = head->next;
head = head->next;
}
return min;
}
void push(struct Node** head, int data)
{
struct Node* newNode
