/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 6
 Description : program to print all coprime pairs out of a given integers.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int gcd(int m,int n){  // defining the gcd function
	if(m==n){
		return m;
	}
	else if(m>n){
		
			return gcd(m-n,n);
		
	}
	else{
		
			return gcd(m,n-m);
		
	}
}

void coprime(int a,int b){   // defining the coprime function
      if (gcd(a,b)==1){
         
	printf("(%d,%d) ",a,b);
      }
}

void pair(int a[]){      // defining the pair function
	int b,c;
       for(int i=0;i<5;i++){
           for(int j=4;j>i;j--){

               b=a[i];
               c=a[j];
               coprime(b,c);
           }
       }
}
int main(){
	int a[5];float m[5]; 
        for(int i=0;i<5;i++){
		scanf("%f",&m[i]);
	}
	int z=0;
	for(int i=0;i<5;i++){
		if(m[i]<0){
			printf("Invalid entries: All should be positive numbers");
			z=1;
			break;
		}
	}
	for(int i=0;i<5;i++){
		if(ceil(m[i])-m[i]>0){
			printf("Invalid entries: All should be integer numbers");
			z=1;
			break;
		}
	}
	if(z==0){
		for(int i=0;i<5;i++){
			a[i]=m[i];
		}
		printf("Co-prime pairs: \n");
                
		pair(a);
	}
	
}
			
		
