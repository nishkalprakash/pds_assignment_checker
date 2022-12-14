/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Question no 2
description: a command to print a pattern 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	int N;
	printf("enter a number N between 2 to 10 \nN=");               
	scanf("%d",&N);

	if(N>=2 && N<10){                                                                                            
		int i,j;
		for(i=1;i<=N;i++){
			for(j=1;j<=N;j++){
				if(i>=j) printf("%d ",i);             // printing only in the lower left traigular side             
			}
			printf("\n");
		
		}
	}
	else printf("entred number is not between 2 to 10 \n");
	

	return 0;
}
