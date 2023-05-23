//name harsh patidar
// roll no- 22mf10015
//sec - 2
//problem -1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *X,*Y,*Z;
    int n,m;
    printf("enter size of X array");
    scanf("%d",&n);

    X = (char **)malloc(n* sizeof(char *));
for (int i=0; i<=n; i++)
{
    X[i] = (char*)malloc(60* sizeof(char));
    gets(&X[i]);
}

printf("enter size of Y array");
    scanf("%d",&m);
Y = (char **)malloc(m* sizeof(char *));
for (int j=0; j<=m; j++)
{
    Y[j] = (char*)malloc(60* sizeof(char));
    gets(&Y[j]);

}

Z = (char **)malloc((m+n)* sizeof(char *));
    for(int i =0; i<=m; i++)
    {
        Z = (char *)malloc(60* sizeof(char *));
        Z[i]=X[i];
    }
      for(int j =0; j<(m+n); j++ )
        {
        Z[j]=(char *)malloc(60* sizeof(char *));
        Z[j]=Y[j];
        }
        for(j=0; j<)


 return 0;
}
