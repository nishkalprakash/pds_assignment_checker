#include <stdio.h>
void bubble_sort(int x[], int size);
int main(){
int n,a[100];
scanf("%d",n);
for(int i=0; i<n; i++)
	scanf("%d",&a[i]);
bubble_sort(a,n);
return 0;
}


void bubble_sort(int x[], int size){
int t,temp;
for(int j=0; j<size; j++){
 for(int k=0; k<size-j-1; k++)
  if(x[k] < x[k+1]) {
  	t = x[k] ;
  	x[k] = x[k+1] ;
  	x[k+1] = t ;
  	}
  }
  printf("{");
  for(int i=0; i<size; i++)
  printf("%d ,",x[i]);
  
  printf("%s",x);
 }

