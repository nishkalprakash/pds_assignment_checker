/*
 NAME - KRISHNA GUPTA
 ROLL NO- 22GG10024
 SECTION -  14
 QUESION -1 
*/



#include <stdio.h>
#include <stdlib.h>
  
   
     struct SET
             {
                 char data;
                  struct SET *next;
              };

 struct SET * StrToList (char s[]);
 void print_list (struct SET * head);
 int main()
   {
     struct SET * l1head;
     struct SET * l2;
     char name1;
     printf("Enter the list 1 :");              //taking input 
     scanf("%s",&name1);
   l1head = (struct SET *)malloc(sizeof(struct SET));
   l1head->data = name1;  
    l1head->next = NULL;
   print_list (l1head);



  return 0;
    }

void print_list (struct SET * head)                //printing list
{
  struct SET * temp;
  temp = head;
   while(temp!=NULL)
   {
      if(temp->next ==NULL) 
      printf("%d. END OF LIST \n", temp->data); // for the last element
      else 
       printf("%d -> ", temp->data); // for other elements
      temp = temp->next;


     }
}



struct SET * StrToList (char s[])               //converting string into list
  {
     struct SET * head = NULL; struct SET * tail;
     int i;
     if (s[0] != '\0')
      {
     head = (struct SET *) malloc (sizeof(struct SET));
     head->data = s[0];
     tail = head;
     for (i=1; s[i] != '\0'; i++) 
      {
        tail->next = (struct SET *) malloc(sizeof(struct SET));
         tail = tail->next;
        tail->data = s[i];
      }
     tail->next = NULL;
   }
  return head;
 }





























