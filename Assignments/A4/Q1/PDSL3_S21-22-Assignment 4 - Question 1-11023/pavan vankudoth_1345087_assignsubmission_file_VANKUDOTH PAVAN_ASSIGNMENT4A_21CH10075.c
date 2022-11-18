/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/
# include<stdio.h>
 void readlists(int A [], int B[], int  n,int  m);
 void printlist(int A[], int B[],int n,int m);

 int search(int A[], int B[], int C[],int n,int m);


int main(){
    int m,n;
    printf("Enter the number of elements in sequence A:\n");
    scanf("%d",&n);
    // printf("Elenents in sequence A is %d\n",n);

    printf("Enter the number of elements in sequence B:\n");
    scanf("%d",&m);
    // printf("Elenents in sequence B is %d\n", m);

   int A[n],B[m];
   int C[100];
   int c[100];
  readlists( A,  B,  n,  m);
  printlist( A,  B, n, m);
   search( A,B,C,n,m);
   printf("\n");
    for (int i = 0; i < m; i++)
    {
      for (int  j = (m-1); j >= 0; j--)
      {
        if((i+j)>(m-1)){
          continue;
        }
        int b[j+1];
        for(int t=i;t<m;t++){
            // a[t]=b[t-i];
            b[t-i]=B[t];
        }
        printf("Subsequence of B[] is ");
        for (int k = 0; k < (j+1); k++)
        {
            printf("%d ",b[k]);
        }
        search(A,b,c,6,j+1);
        printf("\n");

      }

    }


    return 0;
}

 void readlists(int A [], int B[], int  n,int  m){
     printf("Enter the elements in sequence A\n");
     for(int i=0;i<n;i++){
         scanf("%d",&A[i]);
     }
     printf("Enter the elements in sequence B\n");
     for( int k=0;k<m;k++){
         scanf("%d",&B[k]);
     }

 }
 void printlist(int A[], int B[],int n,int m){

     printf("Elements in sequence A \n");
     for(int i=0;i<n;i++){
         printf("%d\n",A[i]);
     }
     printf("Elements in sequence B \n");
     for(int k=0;k<m;k++){
         printf("%d\n",B[k]);
     }

 }


int search(int A[], int B[], int C[], int n, int m)
{
    int k = 0;

    for (int i = 0; i <= (n - m+1); i++)
    {
        int l = 0;
        int z=0;
        if (A[i] == B[0])
        {
            for (int q = 0; q < m; q++)
            {
                if (A[q + i] == B[q])
                {
                    l++;
                }
            }
            if (l == m)
            {
                k++;
                z=i;
                C[k - 1] = i+1;
            }
        }
        // if (z!=0){
        // printf("position is:%d\n",z);
        // }
    }
     printf(" no of matches is %d\n", k);
     printf(" C[] \n");
     for (int t = 0; t < k; t++)
     {
         printf("%d\n", C[t]);
     }
}
