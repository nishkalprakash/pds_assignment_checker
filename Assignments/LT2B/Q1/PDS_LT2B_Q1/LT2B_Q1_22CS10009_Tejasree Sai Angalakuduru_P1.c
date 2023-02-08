/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no :labtest 2
 *Description   : strings
 */

#include<stdio.h>
#include<stdlib.h>

 struct set{
   char data;
  struct set*next;
}set;

struct set *cre(char s[])                        //create list
{
  struct set*head,*ptr,*temp;
  int i;
  head=(struct set*)malloc(sizeof(struct set));
  ptr=head;

  for( i=0;s[i+1]!='\0';i++)
  { 
   
   
    
    ptr->data=s[i];
    ptr->next=(struct set*)malloc(sizeof(struct set));
    ptr=ptr->next;
  }
   ptr->data=s[i];
   ptr->next=0;
  return head;
}

void pri(struct set*head)          //print list
{
 struct set*temp;
 temp=head;
 printf("{ ");
 while(temp!=0)
 {
  printf("%c ",temp->data);
  temp=temp->next;
 }
 
 printf("}");
}

struct set*dif(struct set*l1,struct set*l2)
{
  struct set*l,*lp,*t1,*t2;
l=(struct set*)malloc(sizeof(struct set));
lp=l;
int flag=0;
 t1=l1;
 t2=l2;
 while(t1->next!=0)
 {
   while(t2->next!=0)
   {
    if(t1->data==t2->data)
     {
      flag=1;
      break;
     }
    t2=t2->next;
   }
 if(flag==0)
{
 lp->data=t1->data;
 lp->next=(struct set*)malloc(sizeof(struct set));
 lp=lp->next;
 lp=0;
}
t1=t1->next;
}
return l;
}

/*char *redup(char s[])
{
  char *t,p;
int i,j;
  t=s;
  for(i=0;t[i]!='\0';i++)
  { for(j=i+1;t[j]!='\0';j++)
   {
     if(t[i]=t[j])
     {
      t[j]=t[j+1];
     }
   }
    
  } 
return t;
} */
  
 
int main ()
{
  struct set*l1,*l2,*l;
  char s1[10],s2[10];
char *S1,*S2;
 printf("Enter first string :\n");
 scanf("%s",s1);
 //S1=redup(s1);
 l1=cre(s1);
 
 printf("\nEnter second string :\n");
 scanf("%s",s2);
 //S2=redup(s2);
 l2=cre(s2);
 printf("l1 = ");
 pri(l1);
 printf("\n-");
 printf("l2 = ");
 pri(l2);
 printf("\n=\nl = ");
 l=dif(l1,l2);
 pri(l);
 
 return 0;
}
 
