/*
        Section 14
        Roll No.: 22CS10069
        Name : Sayandeep Bhowmick
        Test 1
        Description : Prints the largest  and second largest number
*/
#include <stdio.h>
#include <stdlib.h>

int* Merge(int size1, int size2, int *ptr1, int *ptr2)
{
        int s=size1+size2;
        int *p=(int*)malloc(s*sizeof(int));
        for(int i=0;i<s+1;i++)
        {
                if(*ptr1<*ptr2)
                        p[i]=*ptr1++;
                else
                        p[i]=*ptr2++;
        }
        return p;
}

int main()
{
        int s1,s2, i;
        // printf("Enter the size of the first array : ");
        scanf("%d",&s1);
        int A[s1];
        // printf("Enter the sorted elements of the first array(increasing order) : ");
        for(i=0;i<s1;i++)
                scanf("%d",&A[i]);
        // printf("Enter the size of the second array : ");
        // scanf("%d",&s2);
        int B[s2];
        // printf("Enter the sorted elements of the second array(increasing order) : ");
        for(i=0;i<s2;i++)
                scanf("%d",&B[i]);
        int *p=Merge(s1,s2,A,B);
        printf("\nA = ");
        for(i=0;i<s1;i++)
                printf("%d  ",A[i]);
        printf("\nB= ");
        for(i=0;i<s2;i++)
                printf("%d  ",B[i]);
        printf("\nC = ");
        for(i=0;i<s1+s2;i++)
                printf("%d  ",p[i]);
        printf("\n");
        return 0;
}
