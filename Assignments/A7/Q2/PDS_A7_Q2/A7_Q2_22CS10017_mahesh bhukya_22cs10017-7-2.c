/* 22cs10017
bhukya mahesh
assignment 7 */




#include<stdio.h>
int main()
{
    int n,m,p;
    printf("enter m, n, p : ");
    scanf("%d%d%d", &m,&n,&p);

    int **ptr;

ptr = (int **) calloc(m, sizeof(int*));

for (int i = 0; i < m; i++)

     ptr[i] = (int *) calloc(n, sizeof(int));


    return 0;
}
