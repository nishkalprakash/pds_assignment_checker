/*
    PDS LAB TEST - 2
    DIPESH GOEL <dipeshgoel@kgpian.iitkgp.ac.in>
    22NA30011
    PROBLEM - 1
*/

#include <stdio.h>

typedef struct SET {
    char data;
    struct SET *next;
} SET;



SET *init_LL(){

    char s[50];

    printf("Enter string: "); scanf("%s", s);

    SET *head, *temp;

    for (int i=0; s[i]!='\0';i++)
    {
        if (i == 0)
        {
            head = (SET *)malloc(sizeof(SET));
            head->data = s[i];
            temp = head;
        }

        else
        {
            temp->next = (SET *)malloc(sizeof(SET));
            temp->next->data = s[i];
            temp = temp->next;
        }
        //if (s[i+1]='\0')  temp->next = NULL;

    }

    temp->next = NULL;

    return head;
}



void print_LL(SET* L)
{
    SET *p;
    p = L;
    printf("{");
    while (p->next!= NULL){

            printf("%c ", p ->data);
            p = p -> next;
    }
    printf("%c}", p ->data);
    //printf("\n");
    printf("\t");
}

SET *deleteElement(char m, SET *head)
{
    SET *temp = head, *prev = head;
    while (temp != NULL)
    {
        if (temp->data == m)
        {
            // when temp is the only node
            if (temp == head && temp->next == NULL)
            {
                free(temp);
                return head;
            }

            // when temp is the first node
            if (temp == head)
            {
                head = temp->next;
                free(temp);
                //printf("\nElement deleted. The new list is: ");
                return head;
            }

            prev->next = temp->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    //printf("\n%d does not exist in the list.", m);
    return head;
}

int main()
{
    SET *L1, *L2, *L;

    printf("#### L1 ####\n");L1 = init_LL();
    printf("#### L2 ####\n");L2 = init_LL();


    //printf("I am here!"); printf("\n");
    printf("L1 = "); print_LL(L1);
    printf("-");printf("\t");
    printf("L2 = "); print_LL(L2);
    printf("=");printf("\t");

    L = (SET *)malloc(sizeof(SET));
    SET *p;
    p = L2;
    char c;

    while(p->next!=NULL){
        c =p->data;
        L=deleteElement(c, L1);
        p=p->next;
    }

    c =p->data;
    L= deleteElement(c, L1);
    printf("L = ");print_LL(L);
    printf("\n");
    return 1;
}



