#include<stdio.h>
#include<stdlib.h>

 struct list{
 int n;
 struct list *next;
 };
 int main()
 {
  struct list *head;
  struct list *second;
  struct list *third;
 struct list *fourth;
 struct list *fifth;
 
  head= (struct list*)malloc(sizeof(struct list));
  second= (struct list*)malloc(sizeof(struct list));
  third= (struct list*)malloc(sizeof(struct list));
  fourth= (struct list*)malloc(sizeof(struct list));
  fifth= (struct list*)malloc(sizeof(struct list));
  
  scanf("%p\n",head->n);
  scanf("%p\n",second->n);
  scanf("%p\n",third->n);
  scanf("%p\n",fourth->n);
  scanf("%p\n",fifth->n);
  
 return 0;
 }
