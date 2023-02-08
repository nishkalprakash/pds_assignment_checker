#include<stdio.h>
#include<stdlib.h>
typedef struct SET{
               char data;
               SET*next;
         }SET;
SET *new_node()      // for new node
{
    SET *new_node = (SET *)malloc(sizeof(SET));
    new_node->next = NULL;
    return new_node;
}
SET *list(char *s)  //for setting list
{
    printf("\n %s \n", s);
    int N, temp;
    printf("Enter list l1: ");
    scanf("%d", &N);
    if (N <= 0)
        return NULL;
    printf("Enter data ");
     *head = NULL, 
      char=*ptr;
    ptr = head = new_node();
    scanf("%d", &(ptr->data));
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &temp);
        ptr = ptr->next = new_node();
        ptr->data = temp;
  
    }
    return head;
}
int main(){
return 0;}
