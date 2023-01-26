/* NAME -KRISHNA GUPTA
   SECTION- 14
   ASSIGNMENT -10
   DESCRIPTION - DUPLICATE NUMBERS , MAX,MIN  IN A LIST*/ 



#include <stdio.h>
#include<stdlib.h>

struct node
 {
   int num;
   struct node *next;
 };
 
 
struct node *createlist(int n)
 {                                                                  // CREATING THE LIST 
  struct node *mylist;
  mylist =(struct node*)malloc(n*sizeof(struct node));
  printf("Enter the elements of the list :");
  for (int i=0;i<n;i++)
    {
      scanf("%d", &mylist[i].num);
      mylist[i].next=&mylist[i+1];
     }
  mylist[n-1].next = NULL;
return mylist;
  };



 int main()
    {
      int n;
     struct node *head,*ptr,*h1,*ptr1;
     printf("enter n: \n");
     scanf("%d",&n);
   

  int k=0,arr[n];
 ptr = createlist(n);

 head=ptr;
 h1=ptr;
 ptr1=ptr;
  
   int max=ptr->num, min=ptr->num;
   while(head!=NULL)
    {
      while(ptr->next!=NULL)
      {
        if(head->num==ptr->next->num)
         {
           arr[k]=head->num;
           k++;
         }
       ptr=ptr->next;
      }
 head =head->next;
 ptr=head;
}
int i,j;
if(k!=0)
{
   printf("the input list contains duplicate nums of :");      //FINDING DUPLICATES IN THE LIST
   for (i=0;i<k;i++)
   {
     for(j=0;j<i;j++)
     {
      if (arr[i]==arr[j])
        break;
     }
    if(i==j)
     {
       printf("%d ", arr[i]);
      }
     }
   }
    else
     {
       printf("the input list does not contain duplicte num \n");
     }
   while(ptr1 != NULL)
   {
     if((ptr1->num)>=max)
     {
      max=ptr1->num;
     }
   ptr1=ptr1->next;
   }

  while(h1 != NULL)
    {
      if((h1->num)<=min)
      {
       min=h1->num;
      }
    h1=h1->next; 
  }
 printf("\n");
 printf("min number is: %d \n", min);
 printf("max number is :%d \n", max);
 }
