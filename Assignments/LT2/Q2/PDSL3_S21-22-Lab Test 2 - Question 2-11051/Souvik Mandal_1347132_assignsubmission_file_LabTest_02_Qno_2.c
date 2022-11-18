/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/



#include <stdio.h>

int main()
{

    int i,j;
    int a;

    float n;
    

    printf("Enter the size of array\n");
    scanf("%f", &n);

    int n1 = n;
    int A[n1];

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    //first loop
    int count;
    int B[n1];
    

    for(i=0;i<n1;i++)
    {   
        count = 0;
        float x = A[i];
      
        
        for(j=0;j<n1;j++)
        {
            float deno = A[j];
            float div = x/A[j]; //here x and A[i] is integers
            div = (int)div;
            
            if(x/deno>1.0 && (x/A[j]==div) )
            {
                count = count + 1;
            }
        }
        
        B[i]=count;
        
    }    
   
    for (int i = 1; i < n; ++i) 
    {
        if (B[0] < B[i]) 
        {
            B[0] = B[i];
        }
    }

    printf("%d\n", B[0]);
    
}