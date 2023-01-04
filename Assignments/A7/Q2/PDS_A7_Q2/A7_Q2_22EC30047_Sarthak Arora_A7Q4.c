/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 7
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{

	int n, a[100];
	printf("enter number of elements in the array : ");
	scanf("%d",&n);
	printf("enter the elements: n= ");
	for(int i=0;i<n; scanf("%d",&a[i++]));
	int m ;
	printf("m=");
	scanf("%d",&m);
	int count;
	int countarr[100];
	for(int i=0; i<n; i++){
		count=0;
		for(int j = 0;  j<n ;j++){
			if (a[i]==a[j]) count ++ ;		
		}
		//if ( count == m ) printf("%d appears %d times \n",a[i], m );
		countarr[i] = count ;
	} 
	int k ;
	for (int i = 0 ; i<n ;i ++){
		k=0;
		if(countarr[i] == m ) {
			printf("%d appears %d times \n",a[i], m );	
		}
	}

	return 0;
}
