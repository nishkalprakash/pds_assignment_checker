/* Name :- Lucky Panwar
   Roll no. :- 22CE30016
   Assignment no. :- 9 
   Question no. :- 1 */

#include<stdio.h>
#include<stdlib.h>

 struct node{
    	int x;
	struct node *next;
        };

 struct node* createlist(int n , int a[])
  	{
		struct node *q,*first;
		
                q = (struct node * )malloc(sizeof(struct node));

		first = q;

       		for(int i=0 ; i < n ; i++)
		 {	
		   q->x=a[i]; 
		  (q ->next) = (struct node * )malloc(sizeof(struct node));
		   q = (q->next); 
		 }
		
		 q = NULL ;

		return first ;

   	}


 void even(struct node* l, int n)
	{
		struct node *first;

		first = (struct node*)malloc(sizeof(struct node));

		for(int i = 0 ; i<n ; i++)
		 {
		      if( i%2 != 0 ){	
                                        printf("%d ", l->x);	     	
			            	l = l->next;
			              }
                      else { l = l->next ;}
		 }

		l = first ;

         }

 void printlist(struct node* l)
	{

		while( l->next = NULL )
                    {
			printf("%d ", l->x);
			l = l->next;
		    }
	}

 int main()
{
	int m;
	int j;
	printf("Enter an integer m such that it is less than 10.\n");
	scanf("%d",&m);
	int arr[m];

	for( j = 0 ; j < m ; j++ )
         {
           scanf("%d",&arr[j]);	
         }

	struct node* list;

	list = createlist(m,arr);

	even(list,m);

        printlist(list);

 	return 0;
}
