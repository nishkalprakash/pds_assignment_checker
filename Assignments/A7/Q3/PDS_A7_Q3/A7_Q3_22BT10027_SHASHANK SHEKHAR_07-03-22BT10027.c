#include<stdio.h>
#include<string.h>
int main()
{
    char **X,**Y,ch;
    printf("enter the number of names in X");
    int n1,n2;
    scanf("%d",&n1);
    X = (char **)calloc(n1,sizeof(char *));
    for(int i=0;i<n1;i++)
    {
        X[i] = (char *)calloc(100,sizeof(char));

    }
    Y = (char **)calloc(n1,sizeof(char *));
    for(int i=0;i<n1;i++)
    {
        Y[i] = (char *)calloc(100,sizeof(char));

    }
    for(int i =0;i<n1;i++)
    {
        for(int j = 0;j<100;j++)
        {
            do
            {
                ch = getchar();
                *(*(X+i)+j) = ch;
            }while(ch!='\n');
        }
    }
}
