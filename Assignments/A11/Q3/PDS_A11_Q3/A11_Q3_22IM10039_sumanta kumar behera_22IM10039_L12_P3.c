# include<stdio.h>
# include<stdlib.h>
# include<math.h>


int main () 
{
   
   int n, m, i, x;
    printf("Enter n : ");
    scanf("%d", &n);
    int A[n+2];
    printf("Enter the elements : \n");
   for(int j=1; j<=n; j++)
    {
    scanf("%d", &A[j]);
    }
    printf("Enter m : \n");
    scanf("%d", &m);
    printf("Output after inserting %d : \n", m);
     if(A[1]> m)
     {
       A[0] = m;
       for(int j=0; j<= n; j++)
        printf("%d ", A[j]);    
     }

     else if(A[n] < m)
     {
        A[n+1]=m;
        for(int j=1; j<= n+1; j++)
        printf("%d ", A[j]); 
     }
     
    else
     {
        i=1;
        while(A[i]<m)
          {
            i++;
          }
        for(int j=1; j< i ; j++)
         printf("%d ", A[j]);
          printf("%d ", m);
        for(int j=i; j< n+1 ; j++)
         printf("%d ", A[j]);
     }
  return 0;
}


