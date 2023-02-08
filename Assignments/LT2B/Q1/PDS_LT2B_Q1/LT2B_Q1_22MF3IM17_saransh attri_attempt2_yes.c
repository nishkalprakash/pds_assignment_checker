/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
TEST-2(B)*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int recurse(int i,int j,int *p,int m,int n)
{
for (i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
{
 		int k=(100*i)+j;
		printf("%d",p[k]);            
}
          printf("\n");
	}
}


int main()
{
	int *p, m,n,i,j;
	printf("how many rows in array: ");
	scanf("%d", &m);
	printf("how many columns in array: ");
	scanf("%d", &n);

	p = (int *)malloc( m*n * sizeof(int));

	//created using pointers and malloc using this as an array 
	for (i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
{

               int g= (100*i)+j;
		scanf("%d", &p[g]);
}
	}

recurse(i,j,p,m,n);

	

	
}
