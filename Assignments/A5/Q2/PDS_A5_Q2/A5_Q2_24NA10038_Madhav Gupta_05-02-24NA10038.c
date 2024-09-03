//Creator: Madhav Gupta
//Roll No.: 24NA10038
//Topic:TO remove duplicate entries
#include<stdio.h>
#define N 100
int main()
{
    int n, A[N], i, k, j;
     scanf("%d", &n);
    printf("Input Numbers");
    for(i=0 ; i<n ; i++)
    	{scanf("%d", &A[i]);} //To scan the numbers
    printf("original array:");
    	for(i=0 ; i<n ; i++)
    	{printf("%d", A[i]);} 
    	 printf("Duplicates:");
    	 for(j=0, k=0, i=0  ; i<n ; j++){
    	 for(i=0 ; i<n ; i++){
    	 if (A[j]==A[i])
    	 k++;
    	 else 
    	 continue;
    	 }
    	 printf("%d (%d)", A[j], k);
    	 }
    	 printf("%d", A[0]);
    	 for(k=1; k<n ; k++)
    	 {
    	 for(i=0, j=0 ; i<k ; i++)
    	 {
    	 if(A[i]==A[k])
    	 j++;
    	 else
    	 continue;}
    	 if (j==0)
    	 printf("%d", A[k]);
    	 else
    	 continue;
    	 }
    	 return 0;
    	 }
