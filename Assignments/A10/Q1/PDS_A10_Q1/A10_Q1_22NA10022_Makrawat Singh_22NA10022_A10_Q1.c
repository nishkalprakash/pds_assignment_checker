/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 10
 Description : write a fn to create  a list to store the elements of the array and modify it to store only even numbered nodes and print the modified list.
 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long





struct list
{
    int d;
    struct list *next;
    
};
typedef struct list Element;
typedef Element *link2;



link2 createlist(int n,int A[])
{
    link2 head=NULL;
    link2 tail;
    head=(link2)malloc(sizeof(Element));
    head->d=A[0];
    tail = head;
    for(int i=1;i<n;i++)
    {
        tail->next=(link2)malloc(sizeof(Element));
        tail=tail->next;
        tail->d=A[i];
    }
    tail->next=NULL;
    return head;
}



void printlist(link2 head)
{
    link2 temp;
    temp=head;
    
    while(temp!=NULL)
    {
        
        if(temp->next==NULL)
        {
            printf("%d \n",temp->d);
        }
        else
        {
            printf("%d ",temp->d);
            
               
        }
        temp=temp->next;  
    }
}

void even(link2 head,link2 new)
{
    link2 temp,temp2;
    

    new=head->next;
    temp=head->next;
    temp2=new;
    while(temp->next!=NULL&&(temp->next)->next!=NULL)
    {
        

        
        temp=(temp->next)->next;
        temp2->next=(temp);
        temp2=temp2->next;
        
        

    }
    temp2->next=NULL;
    printlist(new);

}


int main()
{
    int n;
   
   scanf("%d", &n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   link2 m;
   m=createlist(n,a);
   
   
    link2 k;
    even(m,k);

}