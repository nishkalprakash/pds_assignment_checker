 #include <stdio.h>
  
 int main()
 {
  	int n,S1,S2,S3;
  	printf("Enter the number:");
  	scanf("%d",&n);
  	
  	S1=(n*(n+1))/2;
  	printf("S1=%d\n",S1);   //SUM OF SERIES//
  	
  	S2=(n*(n+1)*(2*n+1))/6; //SUM OF SQUARE OF SERIES//
  	printf("S2=%d",S2);
  	
  	return 0;
 }
