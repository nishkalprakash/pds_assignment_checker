/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 3    */



#include<stdio.h>
#include<stdlib.h>

 struct{
        int num;
      struct Linked_list* next;
        }Linked_list;

 typedef struct Linked_list node;
 
 void insert(node *head,int n){
           node* first ; node* ele,node* prev;
    ele = (node *)malloc(sizeof(node));
    first =(node *)malloc(sizeof(node));
        prev = (node *)malloc(sizeof(node));
     ele -> num = n;
     first = head;
        printf("%d\n",head->num);
        if(n<(head->num)){ ele ->next=head; head =ele; return;}
    else {
           while(n>first->num){
                       prev = first ;
                first = first ->next;
                if(first=NULL) break;
                                             }
              }
    if(first!=NULL){
             prev ->next=ele;
         ele ->next=first;
         return;
              }

        else{
           prev ->next=ele;
                printf("%d\n",ele->num);
        ele ->next=NULL;
                return;
             }
}


 int main()
{
 
 int m,n;
 node *head,*first;
 head = (node *)malloc(sizeof(node));
 first = head ;
 printf("n=");
 scanf("%d",&n);
 int ll[n];
 printf("LL[n]=");
 for(int i==0; i<n ;i++){
                          scanf("%d",&ll[i]);
                        }
 printf("m=");
 scanf("d",&m);
 for(int i=0 ; i<n ; i++){
               first ->num=ll[i]           
               first->next = (node *)malloc(sizeof(node));
                           first = first -> next;
                         }
 first = NULL;
 insert (head,m);
 node *test=head;/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 3    */



#include<stdio.h>
#include<stdlib.h>

 struct{
        int num;
      struct Linked_list* next;
        }Linked_list;

 typedef struct Linked_list node;
 
 void insert(node *head,int n){
           node* first ; node* ele,node* prev;
    ele = (node *)malloc(sizeof(node));
    first =(node *)malloc(sizeof(node));
        prev = (node *)malloc(sizeof(node));
     ele -> num = n;
     first = head;
        printf("%d\n",head->num);
        if(n<(head->num)){ ele ->next=head; head =ele; return;}
    else {
           while(n>first->num){
                       prev = first ;
                first = first ->next;
                if(first=NULL) break;
                                             }
              }
    if(first!=NULL){
             prev ->next=ele;
         ele ->next=first;
         return;
              }

        else{
           prev ->next=ele;
                printf("%d\n",ele->num);
        ele ->next=NULL;
                return;
             }
}


 int main()
{
 
 int m,n;
 node *head,*first;
 head = (node *)malloc(sizeof(node));
 first = head ;
 printf("n=");
 scanf("%d",&n);
 int ll[n];
 printf("LL[n]=");
 for(int i==0; i<n ;i++){
                          scanf("%d",&ll[i]);
                        }
 printf("m=");
 scanf("d",&m);
 for(int i=0 ; i<n ; i++){
               first ->num=ll[i]           
               first->next = (node *)malloc(sizeof(node));
                           first = first -> next;
                         }
 first = NULL;
 insert (head,m);
 node *test=head;
 printf("Output after inserting %d:\n",m);/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 3    */



#include<stdio.h>
#include<stdlib.h>

 struct{
        int num;
      struct Linked_list* next;
        }Linked_list;

 typedef struct Linked_list node;
 
 void insert(node *head,int n){
           node* first ; node* ele,node* prev;
    ele = (node *)malloc(sizeof(node));
    first =(node *)malloc(sizeof(node));
        prev = (node *)malloc(sizeof(node));
     ele -> num = n;
     first = head;
        printf("%d\n",head->num);
        if(n<(head->num)){ ele ->next=head; head =ele; return;}
    else {
           while(n>first->num){
                       prev = first ;
                first = first ->next;
                if(first=NULL) break;
                                             }
              }
    if(first!=NULL){
             prev ->next=ele;
         ele ->next=first;
         return;
              }

        else{
           prev ->next=ele;
                printf("%d\n",ele->num);
        ele ->next=NULL;
                return;
             }
}


 int main()
{
 
 int m,n;
 node *head,*first;
 head = (node *)malloc(sizeof(node));
 first = head ;
 printf("n=");
 scanf("%d",&n);
 int ll[n];
 printf("LL[n]=");
 for(int i==0; i<n ;i++){
                          scanf("%d",&ll[i]);
                        }
 printf("m=");
 scanf("d",&m);
 for(int i=0 ; i<n ; i++){
               first ->num=ll[i]           
               first->next = (node *)malloc(sizeof(node));
                           first = first -> next;
                         }
 first = NULL;
 insert (head,m);
 node *test=head;
 printf("Output after inserting %d:\n",m);
 while(head ->next!=NULL){/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 3    */



#include<stdio.h>
#include<stdlib.h>

 struct{
        int num;
      struct Linked_list* next;
        }Linked_list;

 typedef struct Linked_list node;
 
 void insert(node *head,int n){
           node* first ; node* ele,node* prev;
    ele = (node *)malloc(sizeof(node));
    first =(node *)malloc(sizeof(node));
        prev = (node *)malloc(sizeof(node));
     ele -> num = n;
     first = head;
        printf("%d\n",head->num);
        if(n<(head->num)){ ele ->next=head; head =ele; return;}
    else {
           while(n>first->num){
                       prev = first ;
                first = first ->next;
                if(first=NULL) break;
                                             }
              }
    if(first!=NULL){
             prev ->next=ele;
         ele ->next=first;
         return;
              }

        else{
           prev ->next=ele;
                printf("%d\n",ele->num);
        ele ->next=NULL;
                return;
             }
}


 int main()
{
 
 int m,n;
 node *head,*first;
 head = (node *)malloc(sizeof(node));
 first = head ;
 printf("n=");
 scanf("%d",&n);
 int ll[n];
 printf("LL[n]=");
 for(int i==0; i<n ;i++){
                          scanf("%d",&ll[i]);
                        }
 printf("m=");
 scanf("d",&m);
 for(int i=0 ; i<n ; i++){
               first ->num=ll[i]           
               first->next = (node *)malloc(sizeof(node));
                           first = first -> next;
                         }
 first = NULL;
 insert (head,m);
 node *test=head;
 printf("Output after inserting %d:\n",m);
 while(head ->next!=NULL){
      printf("%d ",head->next);
      head = head->next;
                 }
 printf(" \n");
 return 0;
  }
      printf("%d ",head->next);
      head = head->next;
                 }
 printf(" \n");
 return 0;
  }
 while(head ->next!=NULL){
      printf("%d ",head->next);
      head = head->next;
                 }
 printf(" \n");
 return 0;
  }
 printf("Output after inserting %d:\n",m);
 while(head ->next!=NULL){
      printf("%d ",head->next);
      head = head->next;
                 }
 printf(" \n");
 return 0;
  }