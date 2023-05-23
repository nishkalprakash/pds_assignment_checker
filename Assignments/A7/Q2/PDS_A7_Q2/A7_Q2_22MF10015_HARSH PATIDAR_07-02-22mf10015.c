//name harsh patidar
// roll no- 22mf10015
//sec - 2
//problem -2

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **A,**B;
    int n,m;
    printf("enter no of rows");
    scanf("%d",&m);
     printf("enter no of coloumn");
    scanf("%d",&n);
    A = (int **) calloc(m, sizeof(int*));
    B = (int **) calloc(m, sizeof(int*));
   /* printf("enter number of rows");
    scanf("%d",&m);
    printf("enter number of coloums");
    scanf("%d",&n);
  int A[m][n];
    int B[m][n];
    printf("matrix a:");*/
    for(int i=0; i<m;i++)
        {
           A[i]=(int **) calloc(n, sizeof(int*));
           B[i]=(int **) calloc(n, sizeof(int*));
        }

  return 0;
}
