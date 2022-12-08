/*
* Section 14
* Roll No : 22ME30004
* Name : Abhirup Kumar Das
* Assignment No : 5
* Description : Sum of n terms
*/

#include<stdio.h>

int power(int x, int n){
int p=1;
int q=1;
while(x<=n){
x=x*x;
x++;
}
return(q);
}

int fact(int n){
	int fac=1;
	int q=1;
	while(q<=n){
fac*=q;
q++;
}
return(fac);
}

int main()
{
    int p,x,n,q;
    p=1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double sign=1;
    while(p<=n)
    {
    	sign=sign+(power(x,p)/fact(n));
    	p++;
    }
    printf("The Answer is: %lf \n",sign);

return 0;
}
