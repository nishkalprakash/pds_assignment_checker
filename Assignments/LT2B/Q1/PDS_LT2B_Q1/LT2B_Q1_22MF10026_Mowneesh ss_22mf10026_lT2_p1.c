#include<stdio.h>
#include<math.h>
int main()
	{ char A[50];
		char B[50];
		scanf("%s", A);
		scanf("%s", B);
		int m=strlen(A);
		int n=strlen(B);
		int x=0;
		for(int i=0; i<m; i++){
		
			x=0;
			for(int j=0; j<n; j++){
			
				if(A[i]== B[j])
				{
					x++;
				}
				if(x!=0)
					print("%c", A[i]);
			}
		}
		return 0;

	}
