#include <stdio.h>
#include <stdlib.h>
typedef struct customer {
int ac_no;
int bal;
char name[50];
struct node*link;
}customer;
void add(struct node*list,int n, char *b, int balance)
{
struct node *temp
struct node*createlist(int n)
{
struct node*list;
list=(struct node*)malloc(n*sizeof(struct node));
for(int j=0;j<n;j++)
{
printf("enter the a/c no,name,bal");
scanf("%d %s %d", &list[i].ac_no,&list[i].bal,&list[i].name);
list[i].link=&list[i+1];
}
list[n-1].link=NULL;
return list;
};
voidprint(struct node* I)
{
while(I!=NULL)
{
printf("%d %s %d", I->ac_no,I->name,I->bal);
I=I->link;
}
};

int main(){
int n;
int a/c;
int b;
int na[50]
struct node *ptr;
printf("enter the length");
scanf("enter the length");
scanf("%d", &n);
ptr=createlist(n);
printf("enter elements");
scanf("%d %s %d", &a/c,na,&b);
print(ptr);
return 0;
}


