# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void swap(int*a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{

    int n,m;
    printf("Enter the number of names for X: ");
    scanf("%d ",&n);
    int count;
    char **X;
    X=(char**)calloc(n,sizeof(char*));
    for(int i=0;i<n;i++)
    {
        char a[50];
        gets(a);
        //printf("%d",strlen(a));
        count=sizeof(char)*strlen(a);
        X[i]=(char*)calloc(count,sizeof(char));
        strcpy(X[i],a);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",X[i]);
    }


    printf("Enter the number of names for Y: ");
    scanf("%d ",&m);
    char **Y;
    Y=(char**)calloc(m,sizeof(char*));
    for(int i=0;i<n;i++)
    {
        char a[50];
        gets(a);
        //printf("%d",strlen(a));
        count=sizeof(char)*strlen(a);
        Y[i]=(char*)calloc(count,sizeof(char));
        strcpy(X[i],a);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",Y[i]);
    }








    char **z;
    Z=(char**)calloc((m+n),sizeof(char*));
    for(int i=0;i<(m+n);i++)
    {
        Z[i]
    }



    return 0;


}
