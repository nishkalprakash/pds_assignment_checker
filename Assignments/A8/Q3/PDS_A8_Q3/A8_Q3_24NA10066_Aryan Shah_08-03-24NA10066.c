#include<stdio.h>
#include<math.h>

//Read array size n
//Read array elements arr[n]
//Modify the array to form the largest possible number

int digits(int n,int count){
	//Base Case
	if (n==0) return count;
	
	count++ ;
	//Recurssive Call 
	digits(n/10,count);
}

int compare(int i , int j){
	
	while(dig_i !=0 && dig_j != 0 ){
		int dig_i = digits(i,1);
		int dig_j = digits(j,1) ;
	
		int f_dig_i = (int)i/pow(10,dig_i-1) ;
		int f_dig_j = (int)j/pow(10,dig_j-1) ;
		if(f_dig_i > f_dig_j){
			return 1 ;
		}
		else return 0 ;
	}
}

int main(){
	int n , i ;
	printf("Enter size of array : ");		//Size of array
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements of array : ");					//Declaration and elements of array
	for(i=0 ; i<n ; i++) scanf("%d", &arr[i]);
	
	
	
	//printf("Largest : ");				//Printing the largest number
	for(i=0 ; i<n ; i++) printf("%d ",arr[i]);

}
