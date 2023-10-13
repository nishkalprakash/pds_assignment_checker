//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>

int dist[5][5];

int main()
{
	int i,j,k;
	for(i=0; i<5; i++){
		for(j=i; j<5; j++)
		{
			 if(i==j) { dist[i][j]=0;}
			else{
				k=rand()%980 + 20;
				dist[i][j]=k;
				dist[j][i]=k;
			}
		}

	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++)
		{ printf("dist[%d][%d] = %d\n", i,j,dist[i][j]);}
	}
}


