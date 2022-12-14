/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : LABTEST 1
Description : to print all armstrong number less than or equal to N.
*/

#include<stdio.h>
#include<math.h>// please use -lm after gcc
void print(int n);// function to print armstrong numbers
int main(){
int n;
printf("Enter Number:\n");
scanf("%d",&n);
if(n<=0){
printf("Invalid Input\n");
}
if(n>0){
 for(int j = 1 ; j<=n ; j++){
print(j);
}

	}
return 0 ;
}
void print(int n){//function starts
int count=0;
int i = 0;
int a = n;
	
		while(a>0){// loop to calculate number of digits

				a=a/10;
				count = count + 1;
			}


int sum = 0;		
int d , p , e;	
e = n;
while(e>0){// loop to calculate sum of a number
d = e%10 ;
p = pow((d),count);

sum = sum + p ;
e = e/10 ;

}	
 
	
if (sum== n){// to check if it is armstrong number or not
printf("%d ", n);// prints the number
}	
}


