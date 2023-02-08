/*Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta
LAB TEST 1 : SET B -> (Q.1)
Description :Program to calculate difference of strings as shown in question.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct SET
{
	char data;
	struct SET *next;
}SET;

SET *storeList(char S[],int n)
{
     SET *head= '\0', *tail;
     int i;
     if (S[0] != '\0') 
     {
          head = (SET*) malloc(sizeof(SET));
          head->data = S[0];
          tail = head;
        for (i=1; S[i] != '\0'; i++) 
        {
             tail->next = (SET*) malloc(sizeof(SET));
             tail = tail->next;
             tail->data = S[i];
        }
             tail->next = NULL;
     }
     return head;
}

void printList(SET *head)
{
    SET *temp = head;
    printf("L = ");
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void substractStr(SET *head1,SET *head2)
{
    SET *temp1 = head1, *prev1 = head1, *temp2 = head2;
    while (temp1 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            if (temp1 == head1 && temp1->next == '\0')
            {
                free(temp1);
                return;
            }
        

            if (temp1 == head1)
            {
                head1 = temp1->next;
                free(temp1);
                printList(head1);
                return;
            }

            prev1->next = temp1->next;
            free(temp1);
            printList(head1);
            return;
        }
        prev1 = temp1;
        temp1 = temp1->next;
    }
}



int main()
{
	SET *head1;
	SET *head2;
        int l1,l2;
	char S1[100],S2[100];
        printf("#### L1 ####\n");
	printf("Enter string : ");
        scanf("%s",S1);
	printf("#### L2 ####\n");
	printf("Enter string : ");
        scanf("%s",S2);
	l1 = strlen(S1);
	l2 = strlen(S2);

	head1 = storeList(S1,l1);
        head2 = storeList(S2,l2);
        
	substractStr(head1,head2);
	return 0;
	
}


