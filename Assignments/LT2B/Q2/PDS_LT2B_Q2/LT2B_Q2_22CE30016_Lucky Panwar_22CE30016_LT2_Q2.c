/* NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   SECTION - 14
   LAB TEST - 2 
   QUESTION NO. - 2  */
 

#include<stdio.h>
#include<stdlib.h>


void COPY_ARRAY(int **ARR,int i,int j,int pops){

		if(i==1 && j==1){
			printf("%d \n",ARR[0][0]);
			return;
			}

		else{
 		       printf("%d ",ARR[i-1][j-1]);       
		       if(j==1){
				printf("\n");
				return COPY_ARRAY(ARR,i-1,pops,pops);
				} 
		       else{
     			    return COPY_ARRAY(ARR,i,j-1,pops);	
                         }
		    }
		}


int main()
{
	int a,b;
	int M,N;

	printf("Enter the no. of rows as M : ");
	scanf("%d",&M);

	printf("Enter the no. of columns as N : ");
	scanf("%d",&N);

	int **ARRAY;
	ARRAY = (int **)malloc(M*sizeof(int));

	a=0;
	while( a<N ){
		ARRAY[a] = (int *)malloc(N*sizeof(int));	
		a = a + 1 ; 		
			}

	printf("Enter %d elements -> ", M*N);

		for(a=0;a<M;a++){
		     for(b=0;b<N;b++){
			        scanf("%d",&ARRAY[a][b]);					
			        }
		   }

	COPY_ARRAY(ARRAY,M,N,N);

	return 0;
}

