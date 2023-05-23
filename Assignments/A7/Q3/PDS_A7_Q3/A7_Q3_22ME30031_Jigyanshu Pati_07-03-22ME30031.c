//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 7
//description:Q3
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,k,j;
    char *X,*Y,*Z,temp[20];
    scanf("%d",&n);
    X = (char **)malloc(n * sizeof(char*));
    for (i=0; i<=n; i++)
    {
        X[i] = (char *)malloc(20 * sizeof(char));
        gets(&X[i]);
    }
    printf("#after reading X");
    printf("\n\n");
    printf("after reading %d names\n",n);
    printf("#   name\n");
    printf("===========================\n");
    for(i=0;i<=n;i++)
    {
        printf("%s",(X+i));
    }
    scanf("%d",&k);
    Y = (char **)malloc(k * sizeof(char*));
    for (i=0; i<=k; i++)
    {
        Y[i] = (char *)malloc(20 * sizeof(char));
        gets(&Y[i]);
    }
     printf("#after reading Y");
    printf("\n\n");
    printf("after reading %d names\n",k);
    printf("#   name\n");
    printf("===========================\n");
    for(i=0;i<=k;i++)
    {
        printf("%s",(Y+i));
    }

    Z=(char **)malloc((n+k)* sizeof(char*));
    for (i=0,j=0; i<=n; i++)
    {
        Z[i] = (char *)malloc(20 * sizeof(char));
        strcpy(Z[i],X[j]);
        j++;
    }
    for (i=n,j=0; i<=k; i++)
    {
        Z[i] = (char *)malloc(20 * sizeof(char));
        strcpy(Z[i],Y[j]);
        j++;
    }
     printf("#after reading Z");
    printf("\n\n");
    printf("after reading %d names\n",n+k);
    printf("#   name\n");
    printf("===========================\n");
    for(i=0;i<=n+k;i++)
    {
        printf("%s",*(Z+i));
    }
    for(i=0;i<n+k-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(Z[j]>Z[j+1])
            {
                strcpy(temp,Z[j]);
                strcpy(Z[j],Z[j+1]);
                strcpy(Z[j+1],temp);
            }
        }
    }
}
