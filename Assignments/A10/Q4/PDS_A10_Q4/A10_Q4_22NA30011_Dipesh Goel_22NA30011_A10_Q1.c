#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct list{
   int AccNo;
   char Name[50];
   int Balance;
   struct list * next;
} Customer;

typedef Customer* LINK;

LINK create_new_node()
{
    LINK newptr;
    newptr= (LINK) malloc (sizeof(Customer));
    printf("\t Enter Account Number: "); scanf("%d",&(newptr->AccNo));printf("\n");
    printf("\t Enter Name: "); scanf("%s",newptr -> Name);printf("\n");
    printf("\t Enter Balance: "); scanf("%d",&(newptr -> Balance));printf("\n");
    return (newptr);
}

LINK insert (LINK ptr)
{
    LINK newp, prev, first;
    int value;
    newp = create_new_node();
    value=newp->AccNo;
    if (ptr == NULL || newp->AccNo <= ptr->AccNo)
        { // insert as new first node
            newp -> next = ptr;
            return newp; // return pointer to first node
    }
    else{ // insert in the middle (not first element)
        first = ptr; // remember start
        prev = ptr;
        ptr = ptr-> next;
        while (ptr != NULL && value > ptr->AccNo)
        {   prev = ptr; ptr = ptr->next; }
        prev -> next = newp; // link in
        newp -> next = ptr; //new node
        return first;
    }
}

int main()
{
    int i=1; char c;

    LINK head;
    head = (LINK) malloc(sizeof(Customer));


    int AccNo;char _Name[50];int Balance;

    printf("Customer [%d]\n",i);
    printf("\t Enter Account Number: "); scanf("%d",&(head->AccNo));printf("\n");
    printf("\t Enter Name: "); scanf("%s",head->Name);printf("\n");
    printf("\t Enter Balance: "); scanf("%d",&(head->Balance));printf("\n");

    //printf("Name: %s", head->Name);

    head->next = NULL;
    LINK ptr;
    ptr=head;
    scanf("%c",&c);
    fflush(stdin);
    printf("Do you want to continue? (Y/N) :");scanf("%c",&c);
    printf("i=%d",i);
    i++;

    while(c=='Y'){
        printf("Customer [%d]\n",i);
        /*LINK new_customer=create_new_node();
        ptr->next=new_customer;c=getchar()
        new_customer->next=NULL;
        ptr=ptr->next;*/
        head=insert(head);
        i++;
        fflush(stdin);
        printf("Do you want to continue? (Y/N) : ");scanf("%c",&c);
    }



    return 1;
}
