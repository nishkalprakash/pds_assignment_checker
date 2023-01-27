/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 10
 Description :
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
