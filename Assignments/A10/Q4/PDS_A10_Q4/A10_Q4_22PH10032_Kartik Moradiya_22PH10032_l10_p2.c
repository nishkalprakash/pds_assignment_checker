#include<stdio.h>
#include<stdlib.h>

 typedef struct list{
   int AccNo;
   char Name[50];
   int Balance;
   struct list * next;
  } Customer;

typedef Customer* LINK;

  LINK create_new_node(int AccNo,char Name[50],int Balance)
  {
    LINK newptr;
    newptr= (LINK) malloc (sizeof(Customer));
    newptr -> AccNo = AccNo;
    newptr -> Name = Name;
    newptr -> Balance = Balance;
    return (newptr);
  }

  LINK insert (int value, LINK ptr)
    {  
       LINK newp, prev, first;
       newp = create_node(value);
      if (ptr == NULL || value <= ptr -> data)
      // insert as new first node
      {
       newp -> next = ptr;
      
       return newp; // return pointer to first node
      }
      else { // insert in the middle (not first element)
       first = ptr; // remember start
       prev = ptr;
       ptr = ptr-> next;
    while (ptr != NULL && value > ptr -> data)
    { prev = ptr; ptr = ptr -> next; 
      prev -> next = newp; // link in
      newp -> next = ptr; //new node
      return first;}
  }

int main()
{
int i=1; char c;
LINK head;
head = (LINK) malloc (sizeof(Customer));


int AccNo;char Name[50];int Balance;

printf("Customer [%d]\n",i);
printf("\t Enter Account Number: "); scanf("%d",&AccNo);printf("\n");
printf("\t Enter Name: "); scanf("%s",Name);printf("\n");
printf("\t Enter Balance: "); scanf("%d",&Balance);printf("\n");

head -> AccNo = AccNo;
head -> Name = Name;
head -> Balance = Balance;
head -> next = NULL;
LINK ptr;
ptr=head;





printf("Do you want to continue? (Y/N) : ");scanf("%c",&c);
while(c=='Y'){
LINK new_customer=create_new_node(AccNo,Name,Balance);
ptr->next=new_customer;
new_customer->next=NULL;
ptr=ptr->next;
i++;
printf("Do you want to continue? (Y/N) : ");scanf("%c",&c);


}
return 1;
}
