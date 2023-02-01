# include<stdio.h>
# include<stdlib.h>
# include<math.h>


int main () 
{
   
   int n, m;
    printf("Enter n : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements : \n");
    for(int j=0; j<n; j++)
    {
    scanf("%d", &A[j]);
    }
    printf("Enter m : \n");
    scanf("%d", &m);

    int x=0;
    for(int j=0; j<n; j++)
    {
     if(A[j] == m)
     x++;
}
    if(x ==0)
     printf("%d doesnot exist\n", m);
    printf("Output after deleting %d : \n", m);
       
     for(int i=0; i<n; i++)
     {
        if(A[i] != m)
         printf("%d ", A[i]);
     }
      return 0;
}

