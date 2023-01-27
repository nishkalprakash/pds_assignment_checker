#include<stdio.h>
#include<stdlib.h>
struct node
{
int AccNo;
char A[50];
int bal;
struct node *link;
};

void add_at_end(struct node *list,int n,char *b,int balance)
{
struct node *temp,*ptr;
ptr=list;
temp=(struct node*)malloc(sizeof(struct node));
temp->AccNo=n;
temp->A=b;
temp->balance;
temp->link=NULL;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=temp;
}

struct node *createlist(int n)
{
struct node *list;
list=(struct node*)malloc(n*sizeof(struct node));
for(int i=0;i<n;i++)
{
printf("enter the accout number , name , bal: ");
scanf("%d %s %d",&list[i].AccNo,&list[i].A,&list[i].bal);
list[i].link=&list[i+1];
}
list[n-1].link=NULL;
return list;
};

void printlist(struct node* I)
{
while(I!=NULL)
{
printf("%d %s %d \n",I->AccNo,I->A,I->bal);
I=I->link;
}
};

int main()
{
int n;
int ACC,BAL;
char B[50];
struct node *ptr;
printf("enter the length of the array:");
scanf("%d",&n);
ptr=createlist(n);
printf("enter the values of the element to be added\n");
scanf("%d %s %d\n",&ACC,B,&BAL);
add_at_end(ACC,B,BAL);
printlist(ptr);
return 0;
}
