
//creator:md waqib sk
//roll:24NA10039
#include <stdbool.h>
#include<stdio.h>
#include<math.h>
//function to calculate number of digits
int digits(int n){
if(n==0){
return 0;
}
return 1+digits(n/10);
}
bool comp(int a,int b){
while(a !=0 && b!=0){

int aa=digits(a);
int bb=digits(b);

if(a/pow(10,aa-1)>b/pow(10,bb-1)){


return true;
break;
}
else if(a/ (int)pow(10,aa-1)== b/(int)pow(10,bb-1)){

if(a>b){
return true;

}
else{
return false;

}


}

a/=10;
b/=10;

}
return false;




}



void bubble_sort (int x[], int size) {
int t;
for (int i = 0; i < size; i++)
for (int j = 0; j < size-i-1; j++)
if (comp(x[j+1],x[j])) {
// swap x[j] and x[j+1]
t = x[j];
x[j] = x[j+1];
x[j+1] = t;
}
}




int main(){
int n;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);

	int A[n];
	
	printf("Enter the values of the array : \n");
	for(int i=0;i<n;i++){

	scanf("%d",&A[i]);

		}
	bubble_sort(A,n);
	
	printf("largest: \n");
for(int i=0;i<n;i++){
printf("%d",A[i]);

}

}
		
