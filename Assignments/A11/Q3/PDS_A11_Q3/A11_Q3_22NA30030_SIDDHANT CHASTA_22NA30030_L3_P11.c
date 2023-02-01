/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 11
Description :A program to insert a new value to an already existing sorted linked list such that  the ordering is maintained.
*/


#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int size,int M);

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


LINK create_node(int val)   // Creating node
{
  LINK newp;
  newp= (LINK) malloc (sizeof(ELEMENT));
  newp-> data = val;
  return (newp);
}


LINK insert (int value,  LINK ptr)        // Inserting the new element
{  
     LINK newp, prev, first;
     newp= create_node(value);
   if (ptr== NULL || value <= (ptr-> data))
   {  
       newp->next = ptr;
       return newp;  
   }
   else {
          first=ptr;   
          prev=ptr;
          ptr=ptr->next;
          while (ptr!= NULL  && value > (ptr->data))
          {
             prev= ptr;
             ptr= ptr->next; 
          }
            prev->next = newp;  
            newp->next = ptr;    
            return first;
        }
}




void print_list(LINK head)   // Printing the list
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
   int n,m; // m is the number to be inserted 
   int LL[n];
   printf("n = ");
   scanf("%d",&n);
   printf("LL[n] =  ");
   for(int i=0;i<n;i++)
   {
   scanf("%d",&LL[i]);
   }
   printf("m = ");
   scanf("%d",&m);

   LL[n+1] = m;
   bubbleSort(LL,n,m);
   printf("\n");
   
 }






void bubbleSort(int arr[], int size,int M)
       {
           for (int trial = 0; trial < size-1 ; trial++)
            { 
                for (int  j = 0; j < size-1-trial; j++)
                      if ( arr[ j ] > arr[ j +1] ) 
                     {      
                                int temp = arr[ j +1] ;
                                arr[ j +1] = arr[ j ] ;
                                arr[ j ] = temp ;
                     }
            }
          printf("Output after inserting %d : ",M);
          for(int c=0;c<size;c++){
              printf("%d ",arr[c]);    
          }
       } 












   



