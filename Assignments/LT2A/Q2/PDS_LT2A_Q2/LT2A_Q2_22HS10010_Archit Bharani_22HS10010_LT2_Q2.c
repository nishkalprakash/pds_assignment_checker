/*
Section 14
Roll No- 22HS10010
Name: Archit Bharani
Question No. 2
Description :
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 2478568 
typedef struct SET
{
int data;
struct SET *next;
}SET;

typedef SET *LINK;

LINK createlist(int n, int A[])                        //Coverting array to list
 {
 
  LINK head;
  LINK tail; 
  head=(LINK)malloc(sizeof(SET));
  head->data =A[0];
  tail=head;
  head->next=NULL;
  for(int i=1;i<n;i++)
  {
    tail->next=(LINK)malloc(sizeof(SET));
    tail=tail->next;
    tail->data=A[i];
  }
 tail->next=NULL;
return head;
}

int *set_conv(int *b, int x)                //Coverting array to set so it doesnot contain repeated digits
{
int i,j;
int k=0;
int *c=(int*)malloc(sizeof(int)*x);
for(i=0;i<x;i++)
{
  for(j=i+1;j<x;j++){
  if(b[i]==b[j])
      b[j]=MAX;
     }
  for(i=0;i<x;i++)
  if(b[i]!=MAX)
  {
    c[k]=b[i];
    k++;
  }
}
return c;
}

int unique_ele(int a[],int n)                         //Finding number of unique elements in given array
{
 for(int i=0;i<n-1;i++)
    {   
        int curr_ele = a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]==curr_ele){
                a[j] = MAX;
            }
        }
    }

    // find the number of unique elements
    int unique_count=0;
    for(int i=0; i<n; i++){
        if(a[i]!=MAX){
            unique_count++;
        }
    }


return unique_count;
}

void printlist(LINK head)                  //Printing the list
{
LINK ptr;
ptr=(LINK)malloc(sizeof(SET));
ptr=head;
while(ptr->next!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
printf("%d",ptr->data);
}


int *add_array(int *a,int*b,int size1,int size2)             //adding linked list
{
int *f=(int*)malloc(sizeof(int)*(size1*size2));

for(int i=0;i<size1*size2;i++)
  {  
      for(int j=0;j<size1;j++)
    {
      for(int l=0;l<size2;l++)
     f[i]=a[j] +b[l];
    }

  }
return f;

}

int main()
{
int n,m,i;
int a[100],b[100];
printf("Enter number of elements in list 1 ");
scanf("%d",&n);
printf("Enter %d numbers ",n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter number of elements in list 2 ");
scanf("%d",&m);
printf("Enter %d numbers ",m);

for(i=0;i<m;i++)
{
  scanf("%d",&b[i]);
}

int size1,size2;

size1=unique_ele(a,n);            //Finding unique elements
size2=unique_ele(b,m);

            
int *c=set_conv(a,n);                //Converting to set
int *d=set_conv(b,m);

LINK head;
head=createlist(size1,c);       //Creating list
printf("L1=");
printlist(head);               //Printing it
printf("\n");
LINK head1;
head1=createlist(size2,d);
printf("L2=");
printlist(head1);
printf("\n"); 
int *e=add_array(c,d,size1,size2);            //Creating Final list
LINK head2;
head2=createlist(size1+size2,e);        
printlist(head2);                        //Printing it
return 0;
}
