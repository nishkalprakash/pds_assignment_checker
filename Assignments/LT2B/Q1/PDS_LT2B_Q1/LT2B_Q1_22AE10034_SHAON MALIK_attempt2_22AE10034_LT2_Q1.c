/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Lab Test: 2
 Question No :1
 Description : To find the difference of two character linked list
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct SET{
   char data;
   struct SET *next;
}SET;//defining each element of the linked list

SET *create_node(char c)//to create each element of linked list
{
    SET *new_node = (SET*)malloc(sizeof(SET));
    new_node->data=c;
    new_node->next = NULL;
    return new_node;
}

int present(SET * I,char x)//to check if character is present in I
{
      
      if (I == NULL)
        return 0;
      else if  (I->data == x)
        return 1;
      else
        return present (I->next, x);
}

SET* create_set(){
 char arr[100];
 printf("Enter string: ");
 scanf("%s", arr);
 int i=1;
 SET* head=create_node(arr[0]);
 SET* ptr=(SET*)malloc(sizeof(SET));
 head->next=ptr;
  
      while(arr[i]!='\0'&& present(head,arr[i])==0)//store only non duplicate elements
      {
        ptr=ptr->next=create_node(arr[i++]);
      }
 return head;
}


SET* difference(SET *I1,SET *I2)
{
  SET * head=(SET*)malloc(sizeof(SET));
  SET * ptr=head;
  while(I1!=NULL){
     if(present(I2,I1->data)==0)//the element of I1 is not in I2
     {
      ptr->data=I1->data;
      ptr=ptr->next;
     }
   I1=I1->next;
  }
  return head;
}

void print_set(SET* I)//to print each element of set 
{
 if(I==NULL)
  printf(" } ");
 else
  {
    if(I->next==NULL)
        printf("%c",I->data);
    else
        printf("%c , ",I->data);
    print_set(I->next);
  }
}

int main()
{
  SET* L1_HEAD,*L2_HEAD,*L3_HEAD;
   printf("###L1### \n");
   L1_HEAD=create_set();
   printf("###L2### \n");
   L2_HEAD=create_set();
   printf("L1 = { ");
   print_set(L1_HEAD);
   printf("\n - \n" );
   printf("L2 = { ");
   print_set(L2_HEAD);
   printf("\n = \n" );
   L3_HEAD=difference(L1_HEAD,L2_HEAD);
   printf("L = { ");
   if(L3_HEAD!=NULL)
   print_set(L3_HEAD); 
   else
   printf("L={}");
   return 0;
}           
 //end of program
