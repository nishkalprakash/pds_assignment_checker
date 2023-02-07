                                                                                                /* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 10
QUESTION NO.: 1
DESCRIPTION: union and intersection of 2 sets
*/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int a;
    struct node *p;
};
struct node *createlist(int n, int *A){
    struct node *h=(struct node *)malloc(sizeof(struct node));
    h->a=A[0];
    struct node *ptr=h;
    for(int t=1;t<n;t++){       
        ptr->p=(struct node *)malloc(sizeof(struct node));
        ptr=ptr->p;
        ptr->a=A[t];
    }
    ptr=NULL;
    return h;
}
int SearchSet(int *A,int x, int n){
    for(int t=0;t<n;t++)
        if(A[t]==x)
            return 1;
    return 0;
}
struct node *Intersection (int *A, int a, int *B, int b){
    struct node *h=(struct node *)malloc(sizeof(struct node *));
    struct node *ptr=h;
    if(b<a){
        for(int t=0;t<b;t++)
        if(SearchSet(A,B[t],a)){
            ptr->a=B[t];
            ptr->p=(struct node *)malloc(sizeof(struct node *));
            ptr=ptr->p;
        }
    }else{
        for(int t=0;t<a;t++)
        if(SearchSet(B,A[t],b)){
            ptr->a=A[t];
            ptr->p=(struct node *)malloc(sizeof(struct node *));
            ptr=ptr->p;
        }
    }
    ptr=NULL;
    return h;
}
struct node *Union(int *A,int *B,int a, int b){
	struct node *h=(struct node *)malloc(sizeof(struct node *));
    struct node *ptr=h;
    for(int t=0;t<a;t++){
        ptr->a=A[t];
        ptr->p=(struct node *)malloc(sizeof(struct node *));
        ptr=ptr->p;
    }
    for(int t=0;t<b;t++)
        if(!SearchSet(A,B[t],a)){
        ptr->a=B[t];
        ptr->p=(struct node *)malloc(sizeof(struct node *));
        ptr=ptr->p;
    }
    ptr=NULL;
    return h;
}
void printlist(struct node *h){
	struct node *ptr=h;
	for(;ptr->p!=NULL;){
		printf("%d ",ptr->a);
		ptr=ptr->p;
	}
	printf("\n");
	return;
}
int main(){
    int a,b;
    struct node *inter_head,*union_head;
    scanf("%d",&a);
    int *A=(int *)malloc(a*sizeof(int));
    for(int t=0;t<a;t++)
        scanf("%d",&A[t]);
    struct node *head1=createlist(a,A);
       scanf("%d",&b);
    int *B=(int *)malloc(b*sizeof(int));
    for(int t=0;t<b;t++)
        scanf("%d",&B[t]);
    struct node *head2=createlist(b,B);
    inter_head=Intersection(A,a,B,b);
    union_head=Union(A,B,a,b);
    printf("L(Union)= ");
    printlist(union_head);
    printf("L(Intersection)= ");
    printlist(inter_head);
}

