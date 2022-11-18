/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 3(a)
*/

#include <stdio.h>
#include <stdlib.h>
void printfinal(int **array,int r,int c) //function to print the final matrix
{
    printf("\n\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
void exception(int **array,int a,int b,int r,int c) //function for the exception we get 
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(array[i][j]>b)
            {
                array[i][j]--;
            }
            if(array[i][j]==b)
            {
                array[i][j]=a;
            }
        }
    }
}
int main()
{
    int c,r;
    printf("Enter the size of the image : "); //asking for the dimensions of the image matrix
    scanf("%d %d",&r, &c); //taking the values of the dimension of the image matrix
    int **imgage=(int **)malloc(r*sizeof(int *)); //dynamic allocation
    for(int i=0;i<r;i++)
    {
        imgage[i]=(int*)malloc(c*sizeof(int)); //dynamic allocation
    }
    printf("Enter the image : \n"); //asking for the values of the image
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &imgage[i][j]); //taking the values of the image
        }
    }
    int num=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(imgage[i][j]==1)
            {
                int m=0,n=0,o=0,p=0;
                if(i-1>=0)
                {
                    m=imgage[i-1][j];
                    if(j+1<c)
                    n=imgage[i-1][j+1];
                    if(j-1>0)
                    o=imgage[i-1][j-1];
                }
                if(j-1>0)
                p=imgage[i][j-1];
                if(m==0&&(n==0&&(o==0&&p==0)))
                {
                    num=num+1;
                    imgage[i][j]=num;
                    continue;
                }
                if(n==o&&(n>0&&o>0))
                {
                    exception(imgage,o,n,r,c);
                    n=o;
                    num=num-1;
                }
                if(n==p&&(n>0&&p>0))
                {
                    exception(imgage,n,p,r,c);
                    p=n;
                    num=num-1;
                }
                if(m>0)
                n=m;
                else
                if(o>0)
                n=o;
                else
                if(p>0)
                n=p;
                imgage[i][j]=n;

            }
        }
    }
    printfinal(imgage,r,c); //calling the function to print the final matrix
    printf("Number of connected components: %d", num); //printing the number of connected component
    printf("\n");
    for(int i=0;i<r;i++)
    {
        free(imgage[i]);
    }
    free(imgage);
    return 0; //this is the return statement
}