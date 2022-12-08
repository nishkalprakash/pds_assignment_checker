# include <stdio.h>
# include <stdlib.h>



int main()
{
	int N;
	printf (" N = ");
	scanf("%d",&N);

	int arr[N];
	printf(" enter inputs for array \n");                      
	int i,j,k;
	for(i=0; i<N; i++){
	scanf("%d",&arr[i]);                                            // asking the user to enter the inputs
	}
	

	int max =arr[0];
	for(i=0; i<N; i++){
	if (arr[i]>max) max  =arr[i];
	}
	
	
	int n_bins ;
	printf("bins = ");
	scanf("%d",&n_bins);
	int lb,ub;
	for(i=1 ; i<=n_bins ; i++){                                               // creating nested loops to put entries in bins
		printf("bin%d  ",i);
		lb = (max/n_bins)*(i-1) + 1 ;
		ub = (max/n_bins)*i ;
		k=0;
		for(j=0; j<N ;j++){
			if ((arr[j]>=lb) && (arr[j]<=ub)){
			 	printf("%d ",arr[j]);
				k++ ;
			}
}
		printf("\t elements = %d \n",k);

		
		}
		
		
		
		
		


	return 0;
}
