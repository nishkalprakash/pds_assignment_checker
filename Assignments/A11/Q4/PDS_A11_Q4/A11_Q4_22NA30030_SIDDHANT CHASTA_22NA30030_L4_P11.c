/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 11
Description :A program to 
*/

#include<stdio.h>
#include<stdlib.h>

struct list{
     int d;
     struct list *next;
     struct list *data;
};


typedef struct list ELEMENT;
typedef ELEMENT* LINK;

LINK StrToList(int LL[],int n)   //Produce a list
{
     LINK head= NULL, tail;
     int i;
     if (LL[0] != n) 
     {
          head = (LINK) malloc(sizeof(ELEMENT));
          head->d = LL[0];
          tail = head;
        for (i=1; LL[i] != n; i++) 
        {
             tail->next = (LINK) malloc(sizeof(ELEMENT));
             tail = tail->next;
             tail->d = LL[i];
        }
             tail->next = NULL;
     }
     return head;
}




LINK delete_item(int val, LINK ptr) // Deleting the number
{ 
          LINK prev, first;
          while (ptr!= NULL && val> ptr->data)
          {
                 prev= ptr;ptr= ptr-> next;
          }
              if (ptr== NULL || val!= ptr->data) 
             {
              return first;
             }
             else 
               {
                 prev-> next = ptr-> next;
                 ptr->next = NULL;
                 free(ptr);
               }
}

 
void print_list(LINK head)    // printing the final list
{
        LINK temp; 
        temp = head;
        while(temp!=NULL)
      {
         if(temp->next ==NULL) printf("%d. END OF LIST \n", temp->data);    
         else printf("%d -> ", temp->data);  
         temp = temp->next;
      }
}






   
int main()
{
    int n,val,m;
    LINK head;
    int LL[n];
    printf("n =");
    scanf("%d",&n);
    printf("LL[n] = ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&LL[i]);
    }
    printf("m = ");
    scanf("%d",&m);
    val = m;
    StrToList(LL[n],n);
    head = delete_item( val, head );
    print_list(head);
    
}

