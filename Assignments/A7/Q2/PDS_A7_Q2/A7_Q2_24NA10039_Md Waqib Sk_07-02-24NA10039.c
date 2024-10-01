//Finds Coprime pairs
//creator:md waqib sk
//roll:24NA10039 


#include<stdio.h>
int gcd(int A,int B){ //calculates the gcd of given two numbers
int temp;
if (A > B) {
temp = A; A = B; B = temp;
}
while ((B % A) != 0) {
temp = B % A;
B = A;
A = temp;
}



return A;
}
int main(){

int arr[5];

printf("Enter the numbers: \n");
for(int i=0;i<5;i++){  //takes the 5 inputs

scanf("%d",&arr[i]);

}

int flag=0;  //flag variable counts the number of coprimes found
for(int i=0;i<5;i++){   //using two for loop we can calculate the gcd for every possible pair

for(int j=i+1;j<5;j++){
	int k=arr[i];
	int l=arr[j];
	int g=gcd(k,l);
	if(g==1){  
	printf("%d and %d are Co-prime \n",k,l);
	flag++;
	}
	
}
}

if(flag==0){   //no coprimes found

printf("No Co-prime found");
}





}
