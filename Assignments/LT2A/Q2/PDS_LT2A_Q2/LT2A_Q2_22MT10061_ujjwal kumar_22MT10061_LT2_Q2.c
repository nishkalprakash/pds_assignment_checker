#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};

typedef struct node node;



  node *create_node()
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->next = NULL;
    return new_node;
}

int check(node *str, int data)
{
    if (str == NULL)
        return 0;
    if (str->data == data)
        return 1;
    return check(str->next, data);
}

node *create_l(char *s)
{
    printf("\n#### %s ####\n", s);
    int temp,n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n<= 0)
        return NULL;
    printf("Enter %d Numbers: ",n);
    node *head = NULL, *ptr;
    ptr = head = create_node();
    scanf("%d", &(ptr->data));
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &temp);
        if (check(head, temp))
            continue;
        ptr = ptr->next = create_node();
        ptr->data = temp;
    }
    return head;
}

void add(node* L1,node* L2)
{
    
 
    
  int sum;
  sum=L1->data+L2->data;
    printf("%d",sum);
}

void printlist(node *HEAD, char *s)
{
    printf("%s = {", s);
    if (HEAD == NULL)
    {
        printf("}\n");
        return;
    }
    node *ptr = HEAD;
    for (; ptr->next != NULL; ptr = ptr->next)
        printf("%d, ", ptr->data);
    printf("%d}\n", ptr->data);
}


int main()
{
  node *L1,*L2;
    L1 = create_l("L1");
    L2 = create_l("L2");
    printlist(L1, "L1");
      printf("\n");
       printf("+");
     printlist(L2, "L2");
      add(L1,L2);
    


   return 0;
}