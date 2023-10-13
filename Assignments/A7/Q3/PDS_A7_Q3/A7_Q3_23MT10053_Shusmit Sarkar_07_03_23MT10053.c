#include<stdio.h>
#include<stdlib.h>
int dist[5][5];
int main(){

    for(int i=0; i<5;i++)
        {
            for(int j=0; j<5; j++)
                if(i!=j)
            {
                dist[i][j] = (20 + rand()%980);
            }
            else dist[i][j] = 0;
        }
  for(int i=0; i<5;i++)
        {
            for(int j=0; j<5; j++) printf("%d ", dist[i][j]);
        printf("\n");
        }
        for(int i=0; i<5;i++)
        {
            for(int j=0; j<5; j++) {
                    if(dist[i][j] >150) dist[i][j] = -1;
            }
        }
        for(int i=0; i<5;i++)
        {
            for(int j=0; j<5; j++) printf("%d ", dist[i][j]);
        printf("\n");
        }
        return 0;
}
