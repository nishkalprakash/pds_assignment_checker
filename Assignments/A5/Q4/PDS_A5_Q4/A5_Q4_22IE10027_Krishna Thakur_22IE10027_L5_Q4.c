#include<stdio.h>

int main(){
	printf("Enter the number of integers that should be in the array\n");
	int n;
	scanf("%d", &n);
	int A[n];
	int i;
	printf("Enter the numbers of the array\n");
	for (i=0; i<n; i++)
		{
			scanf("%d", &A[i]);
		}
	int Bins;
	printf("Bins=\n");
	scanf("%d", &Bins);
	int min, max;

	min = A[0];
	for (i=1; i<n; i++)
	{
		if (A[i] < min)
			min = A[i];
	}


	max = A[0];
	for (i=1; i<n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	int p, q, r, s, t, u, v=0; 
	p=(max-min);
	q=(p/Bins);
	r=1;

	for(r=1; r<=Bins; r++)
	{
		printf("Bin%d ", r);
		s=r-1;
		//printf("%d", s);
		t=(min+(q*s));
		//printf("%d\n", t);
		u=(min+(q*r));
		//printf("%d\n", u);
		while(i<n){
			if((A[i]>t)||(A[i]<u)){
				printf("%d", A[i]);
				v++;
				i++;
			}

		}
			printf("Elems=%d", v);
			printf("\n");
	}




	
	return 0;
}