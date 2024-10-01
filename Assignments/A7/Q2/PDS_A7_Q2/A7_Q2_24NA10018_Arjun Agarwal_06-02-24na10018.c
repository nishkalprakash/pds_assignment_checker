//Program to find co-prime pairs
//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>

void CoPrime(int a, int b) ; 		//Introducing the coprime function
int gcd(int a, int b) ;			//Introducing the gcd function
void pair(int a[]) ;			//Introducing the pair function

int main(){
int a[5];
for(int i=0; i<5; i++)
	scanf("%d",&a[i]) ;
	pair(a);				//Calling pair function
return 0;
}

int gcd(int a, int b){			//Defining GCD function
int c;

while(1){
	c = b%a;
	b = a;
	a = c;
if(c==0 || c==1)
break ;
 }
return c;
}
void CoPrime(int a, int b){		//Defining Co-prime function

printf("\n %d and %d are Co-prime ",a,b);
}


void pair(int a[]){			//Defining pair function
int flag;
for(int i=0; i<5; i++){
 for(int j=i+1; j<5; j++){
 	if(gcd(a[i] , a[j])==1){	//Calling gcd function
 	CoPrime(a[i],a[j]) ;		//Calling CoPrime function
 	flag = 1;
 	}
 	else flag=0; 	  
  }
 }
 	printf("\n");
 if (flag == 0)
	printf("No Co-prime found\n");
}
 







