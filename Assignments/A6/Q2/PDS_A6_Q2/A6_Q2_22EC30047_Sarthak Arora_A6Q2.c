/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 6
description: to check co prime pairs 
*/ 






#include <stdio.h>
int gcd(int m, int n){                                           //creating a function to find GCD
	if(m==n) return m;
	if(m>n) return gcd(m-n,n);
	if(m<n) return gcd(n-m,m);	
}




void coprime(int m, int n)                                       // printing if numbers are coprime
{
    if (gcd(m, n) == 1)
        printf("(%d,%d) ", m, n);
}






void pair(int a[])                                                  // checking each pair
{
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
}





int main()
{
    int n, A[5];   
    printf("Enter numbers : ");
    for ( n = 0; n < 5; n++) {
        scanf("%d", &A[n]);
	if(((100000*A[n])%100000) != 0){
			printf("Invalid entries: All entries should be integer\n");                 // if the number has some decimal place 
			return 0;
			}
		if (A[n] <= 0){
	 		printf("Invalid entries : All entries should be positive\n");                //if the number is negative 
			return 0;
			}
		}
    for (int i = 0; i < 5; i++) 
        for (int j = i + 1; j < 5; j++)
            if (gcd(A[i], A[j]) == 1)   
            {
                pair(A);
                return 0;   
            }
    printf("NO coprime pairs found");                                                                 // if no coprime numbers are found
    return 0;
}
