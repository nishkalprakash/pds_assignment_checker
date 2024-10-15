#include <stdio.h>
#define N 101
int linear_search(int x[], int size, int key) ;
void bubble_sort(int x[], int size,int key);
int main(){
int n,A[N],m;
	printf("n = ");
	scanf("%d",&n);
	printf("A[n] = ") ;
for(int i =0; i<n; i++)
	scanf("%d",&A[i]) ;
	printf("m = ");
	scanf("%d",&m); 
bubble_sort(A,n,m);


return 0;
}
	
	
	
void bubble_sort(int x[], int size,int key){
int t,temp;
for(int j=0; j<size; j++){
 for(int k=0; k<size-j-1; k++)
  if(x[k] > x[k+1]) {
  	t = x[k] ;
  	x[k] = x[k+1] ;
  	x[k+1] = t ;
  	}
  }
  int pos = 0;
for(int i=0; i<size; i++){
	if(x[i]>key)
	pos=i;
	else
	pos=size+1;
	}

for(int i = size-1; i >= pos; i--){
temp = x[i-1];
x[i+1] = x[i];
x[i] = temp ;
}
x[pos-1] = key ;
printf("Output Array : \n{");
for(int i=0; i<size+1; i++)
printf("%d, ",x[i]);
printf("}");	
}






