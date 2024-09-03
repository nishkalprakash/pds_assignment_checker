#include<stdio.h>
#define N 100
#define M 10

int main(){
	char Haystack[N] , Needle[M] ; 
	int  n, i , m ;
	
	printf("Enter length of Haystack : ") ;
	scanf("%d", &n) ;
	 
	if(n > N) printf("Error n > 100 \n") ;
	else {
		for (i=0 ; i<n ; i++){
			printf("element %d --" , i);
			scanf("%d" , &Haystack[i]) ;
		}
		
		printf("Enter length of Neddle : ") ;
		scanf("%d", &m) ;
		if(m > M) printf("Error m > 10 \n") ;
		else {
			for (i=0 ; i<m ; i++){
				printf("element %d --" , i);
				scanf("%d" , &Needle[i]) ;
			} 
		}
		for(i=0 ; i<n ; i++){
			if(Haystack[i] == Neddle[0]){
				int a = 0 ;
				while(){
					if(Haystack[i] == Needle[a]){
						i++ ;
						a++ ;
					}
				}
			
			}
		
		}
	}		


}
