#include<stdio.h>
# define N 100

//{-1,2,3,-4,5,-6,7}
int main(){
   int arr[N] , n;
   printf("Enter the number of elements : ");
   scanf("%d", &n);
   
   if (n>N) printf("Error n > 100 \n") ;
   else {
   	for (int i=0 ;i<n ; i++){
       		printf("element %d : ", i);
       		scanf("%d",&arr[i]) ;
   	}
   	
   	int l =0, r=n-1 ;
   	while(l < r){
   		while(arr[l] < 0 ){    //l gives index of +ve
   			l++ ;
   		}
   		while(arr[r] >= 0 ){   //r gives index of -ve
   			r-- ;
   		}
   		
   		int temp = arr[r] ;
   		arr[r] = arr[l];
   		arr[l] = temp ;
   		l++ ;
   		r-- ;
   	}
   		
   
   	    
       }
       for(int i=0 ; i<n ; i++){
   	     printf("%d  ", arr[i]);
       }
}
   	
      
   
