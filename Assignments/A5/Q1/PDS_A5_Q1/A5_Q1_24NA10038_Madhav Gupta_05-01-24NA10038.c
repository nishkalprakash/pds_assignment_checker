//Creator: Madhav Gupta
//Roll No.: 24NA10038
//Topic:TO seperate neg and positive numbers on different sides of arrays
#include<stdio.h>
#define N 100
int main()
{
    int n, A[N], i;
    scanf("%d", &n);
    printf("Input Numbers");
    for(i=0 ; i<n ; i++)
    	{scanf("%d", &A[i]);} //To scan the numbers
    i = 0;
    while(i<n){//To print the neg no. on left side 
	      if (A[i]<0){
		       printf("%d", A[i]);
		       i++;}
	       else{
	       	
		       i++;
		       continue;
	       }
} 
i=0;
     while(i<n){//to print the pos no. on right side
      if (A[i]>0){
		       printf("%d", A[i]);
		       i++;}
	       else{
	       	
		       i++;
		       continue;} }
return 0;
}
