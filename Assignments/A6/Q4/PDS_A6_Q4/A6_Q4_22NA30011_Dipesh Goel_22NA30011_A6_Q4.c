#include <stdio.h>
#include <stdlib.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 6
Description:
*/

int *BuildSet(int *A, int n)
{
    for (;A<n;A++) scanf("%d",*A);
}


int SearchSet(int *A, int x)
{
    if (*A==x) return 1;
    else return 0;
}




int* Union (int *A, int a, int *B, int b)



int* Intersection (int *A, int a, int *B, int b)




int* Difference (int *A, int a, int *B, int b)



void Print(int *A, int n)


int main ()
{
    while(1)
    {

    BuildSet(*A,nA);
    BuildSet(*B,nB);

    char choice;
    printf("Press ‘1’ to perform search in Set A \n");
    printf("Press ‘2’ to perform search in Set B \n");
    printf("Press ‘3’ to perform Union of Set A and Set B \n");
    printf("Press ‘4’ to perform Intersection of Set A and Set B \n");
    printf("Press ‘5’ to perform Difference of Set A and Set B \n");
    printf("Press any other key to quit \n");
    scanf("%c",&choice);

    switch (choice)
    {
        Case '1':
            {
                int x;
                printf("Enter which element to search for : ");
                scanf("%d",x);
                while(A<nA)
                {
                if (SearchSet(*A,x)) printf("%d is present in set A \n",x);break;
                A++;
                }
                if (A==nA) printf("%d is NOT present in set A \n",x);
                break;
            }

    }

    }
    return 0;


}

