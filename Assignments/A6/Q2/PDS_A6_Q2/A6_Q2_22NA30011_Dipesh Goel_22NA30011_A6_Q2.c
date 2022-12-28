#include <stdio.h>
#include <stdlib.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 6
Description: Testing for CO-PRIME
*/

int gcd(int m, int n)
{
    if (m*n==0)
    {
        int temp;
        temp = m>n ? m : n;
        return temp;
    }
    if (m==n) return m;
    else if (m>n) return gcd(m%n,n);
    else if (m<n) return gcd(m,n%m);

}

void CoPrime(int a, int b)
{
    if (a<b && gcd(a,b)==1) printf(" (%d, %d) ",a,b);
    else if (a>=b && gcd(a,b)==1) printf(" (%d, %d) ",b,a);

}

int main()

{
	const int A_size = 5;
	float A[A_size];
	int i=0;

	while (i<A_size)
	{
		printf("Enter number %d : ",i+1);
		scanf("%f",&A[i]);
		i++;
	}

	for (int z=0;z<A_size;z++)
    {
        float diff;
        diff = (A[z] - (int)A[z]);
        if (diff>0.0 && diff<1.0)
        {
            printf("Invalid Entries : All should be integer numbers");
            return 0;
        }
        else if (A[z]<=0)
        {
            printf("Invalid Entries : All should be positive numbers");
            return 0;
        }
    }

    printf("Co-prime pairs : \n");

	for (int k=0;k<A_size;k++)
	{
		for (int j=0;j<=k;j++)
		{
		    //printf(" (%d, %d)  ",A[k],A[j]);

			CoPrime((int)A[k],(int)A[j]);
		}
		//printf("\n");
	}



return 0;
}
