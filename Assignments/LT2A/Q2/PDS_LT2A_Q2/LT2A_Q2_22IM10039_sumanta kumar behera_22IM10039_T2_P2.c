#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Sumanta Kumar Behera
// 22IM10039, Sec-14
//second question of test

struct node 
{
   int data;
   struct node * link;
};

int main()
{
    int n, m, x;
    printf("#### L1 ####\n");
    printf("Enter N : ");
    scanf("%d", &n);
    struct node A[n];
    printf("Enter %d numbers : ", n);
    for(int i=0; i<n; i++)
    {
      scanf("%d", &A[i].data);
    }
    
    printf("#### L2 ####\n");
    printf("Enter M : ");
    scanf("%d", &m);
    struct node B[m];
    for(int j=0; j<m; j++)
    {
      scanf("%d", &B[j].data);
    }

    struct node C[n*m];
    for(int i=0; i<n; i++)
    {
     for(int j=0; j<m; j++)
    {
        C[m*i + j].data = A[i].data + B[j].data;
    }
    }

    printf("L1 = { ");
    for(int j=0; j<n-1; j++)
    {
      printf("%d ", A[j].data);
    }  
     printf("%d }\n", A[n-1].data); 
     printf("+\n");

  

    printf("L2 = { ");
    for(int j=0; j<m-1; j++)
    {
      printf("%d ", B[j].data);
    }
    printf("%d }\n", B[m-1].data);
    printf("=\n"); 

    printf("L = { ");
    for(int j=0; j<m*n; j++)
    {
      x=0;
      for(int i=0; i<j; i++)
    {
      if(C[j].data == C[i].data)
      x++;
    }
      if(x==0)
       printf("%d ", C[j].data);
    }
   printf("}\n");

  return 0;
}
