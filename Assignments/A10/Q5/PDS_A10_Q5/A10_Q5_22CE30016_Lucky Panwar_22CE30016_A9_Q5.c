/* Name :- Lucky Panwar
   Roll no. :- 22CE30016
   Assignment no. :- 9 
   Question no. :- 5 */

#include<stdio.h>
#include<stdlib.h>
 struct node{
	int n; 
	struct node* next;
       };

 struct node *createlist(int n)
 {
	struct node *list,*first;
	list =(struct node*)malloc(sizeof(struct node));
	first = list ;
        for(int i=0 ; i<n ; i++)
	 {
	   scanf("%d",&(list->n));
           list->next = (struct node*)malloc(sizeof(struct node));
	   list = list->next;
	  }
	
	list=NULL;
        return first;
 } 
 
 struct node* Union(struct node* l1,struct node* l2,int n1,int n2)
 {
	struct node*l11,*l22;
 	l11 = l1; l22 = l2;
	int i1,i2;
	for( int i1=0,i2=0;i1<n1,i2<n2;)
	     {
		if(l11->n<l22->n){ printf("%d",l11->n);}
		else {printf("%d",l22-> n); l22=l22->next;}
	     }
	if(i1==n1){
 		while(l22->next!=NULL){
			printf("%d",l22->n);
			l22=l22->next;
			}
                    }
      	else{ 
		while(l11->next!=NULL){
					printf("%d",l11->n);
					l11=l11->next;
				       }
		}
        printf("}");
 }

 void intersection(struct node *l1,struct node *l2,int n1,int n2)
 {
	printf("L (Intersection) = ");
	struct node *l11;
	struct node *l22;
  	l11 =l1; l22 = l2;
	for(int i=0;i<n;i++)
		{
 		  for(int j=0 ; j<n2;j++){
			if( 
	














  int main()
 {
	int n1,n2;
	printf("Enter the size of the lists.\n");
	scanf("%d%d",&n1,&n2);
	l1 =(struct node*)malloc(sizeof(struct node));
	l2 =(struct node*)malloc(sizeof(struct node));
	printf("L1=");
	l1 = createlist(n1);
	printf("L2=");
        l2 = createlist(n2);
  	printf("L(Union)={");
	Union(l1,l2,n1,n2);
  	printf("/n");
	
	return 0;
  }


