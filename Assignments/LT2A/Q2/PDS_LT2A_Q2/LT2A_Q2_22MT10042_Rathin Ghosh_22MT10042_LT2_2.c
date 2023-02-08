#include<stdio.h>
#include<stdlib.h>
int main()
{
typedef struct SET{
int data;
SET *next;
}SET;
int m,n;
printf("Enter the no. of elements in the first list : ");
scanf("%d",&m);
printf("Enter the no. of elements in the second list : ");
scanf("%d",&n);
int L1=(int *)malloc(sizeof(int)*m);
int L1=(int *)malloc(sizeof(int)*n);
L1= Create_list(L1);
L2= Create_list(L2);
int L=(int *)malloc(sizeof(int)*m*n);
L= Add_list(L1,L2,L)
for(i=0;i<m+n;i++)
printf("%d , ",*L[i]);
return 0;
}
SET *Create_list(SET *L)
{
int n;
while (L->next!=NULL){
scanf("%d",&L->data);
L=L->next;
}
return L;
}
int m,n;
printf("Enter the no. of elements in the first list : ");
scanf("%d",&m);
printf("Enter the no. of elements in the second list : ");
scanf("%d",&n);
int L1=(int *)malloc(sizeof(int)*m);
int L1=(int *)malloc(sizeof(int)*n);
L1= Create_list(L1);
L2= Create_list(L2);
int L=(int *)malloc(sizeof(int)*m*n);
L= Add_list(L1,L2,L)
}
SET *Add_list(SET X, SET Y, SET Z)
{
while (X->next != NULL)
{
while (Y->next != NULL){
Z->data=X->data+Y->data;
Z=Z->next;
}
}
return Z;
}


