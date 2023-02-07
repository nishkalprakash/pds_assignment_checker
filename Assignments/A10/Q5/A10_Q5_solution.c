// Code creator: Simranjeet (009.simran@gmail.com)
// Program to UNION and INTERSECTION of 2 sets

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

void createList(node *head, int len)
{
    int temp;
    scanf("%d", &temp);
    head->data = temp;
    node *travl = head;

    for (int i = 1; i < len; i++)
    {
        scanf("%d", &temp);
        travl->next = (node *)malloc(sizeof(node));
        travl = travl->next;
        travl->data = temp;
    }

    travl->next = NULL;
}

void print(node *list)
{

    while (list != NULL)
    {
        printf("%d\n", list->data);
        list = list->next;
    }
}

int check_duplicate(int data, node *travl)
{
    while (travl != NULL)
    {
        if (travl->data == data)
        {
            return 1;
        }
        travl = travl->next;
    }

    return 0;
}
int check_duplicate_mod(node *match, int data, node *list2)
{
    while (list2 != match)
    {
        if (data == list2->data)
        {
            return 1;
        }
        list2 = list2->next;
    }
    return 0;
}
node *find_union(node *list1, node *list2)
{

    node *travl1 = list1, *travl2 = list2;
    node *union_head = NULL, *union_travl = NULL, *intersect_head = NULL, *intersect_travl = NULL;

    union_head = (node *)malloc(sizeof(node));
    union_travl = union_head;
    if (travl1 != NULL)
    {
        union_travl->data = travl1->data;
        travl1 = travl1->next;
        union_travl->next = NULL;
    }
    else if (travl2 != NULL)
    {
        union_travl->data = travl2->data;
        travl2 = travl2->next;
        union_travl->next = NULL;
    }
    else
    {
        printf("\n**NO DATA GIVEN**\n");
        exit(1);
    }
    while (travl1 != NULL)
    {
        if (!check_duplicate(travl1->data, union_head))
        {
            union_travl->next = (node *)malloc(sizeof(node));
            union_travl = union_travl->next;
            union_travl->data = travl1->data;
            union_travl->next = NULL;
        }
        travl1 = travl1->next;
    }
    union_travl->next = NULL;

    while (travl2 != NULL)
    {

        if (!check_duplicate(travl2->data, union_head))
        {
            union_travl->next = (node *)malloc(sizeof(node));
            union_travl = union_travl->next;
            union_travl->data = travl2->data;
            union_travl->next = NULL;
        }
        else
        {
            if (!check_duplicate_mod(travl2, travl2->data, list2) && intersect_head == NULL)
            {
                intersect_head = (node *)malloc(sizeof(node));
                intersect_travl = intersect_head;
                intersect_travl->data = travl2->data;
                intersect_travl->next = NULL;
            }
            else
            {
                if (!check_duplicate_mod(travl2, travl2->data, list2))
                {
                    intersect_travl->next = (node *)malloc(sizeof(node));
                    intersect_travl = intersect_travl->next;
                    intersect_travl->data = travl2->data;
                    intersect_travl->next = NULL;
                }
            }
        }
        travl2 = travl2->next;
    }
    if (union_travl != NULL)
    {
        union_travl->next = NULL;
    }
    if (intersect_travl != NULL)
    {
        intersect_travl->next = NULL;
    }
    printf("\n****UNION OF TWO LISTS*******\n");
    print(union_head);
    printf("\n***INTERSECTION OF TWO LISTS**\n");
    print(intersect_head);
}

int main()
{
    int n, m, temp;
    printf("please enter the number of nodes  in list 1\n");
    scanf("%d", &n);

    //********** LIST CREATION******************
    printf("\nplease enter the data for the nodes\n");
    node *list1 = NULL, *list2 = NULL;
    if (n > 0)
    {
        list1 = (node *)malloc(sizeof(node));
        createList(list1, n);
    }
    printf("\nplease enter the number of nodes in list 2\n");
    scanf("%d", &m);
    printf("\nplease enter the data for the nodes\n");
    if (m > 0)
    {
        list2 = (node *)malloc(sizeof(node));
        createList(list2, m);
    }
    //*********************************************************

    find_union(list1, list2);
}
