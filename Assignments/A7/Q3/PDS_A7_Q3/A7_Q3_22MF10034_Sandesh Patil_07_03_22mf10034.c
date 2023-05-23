#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char **X;
    char **y;
    int n,i,m;
    printf("enter number of names in X \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        X[i]=(char**)calloc(200,sizeof(char));
    for(i=0;i<n;i++)
        {
          X[i]=(char**)calloc(200,sizeof(char));
        }
    printf("names \n");
     for(i=0;i<n;i++)
     {
         scanf("%[^n]%c",X[i]);
     }
printf("names for X are entered \n");
printf("now second set");
printf("enter number of names in y \n");
scanf("%d",&m);

for(i=0;i<m;i++)
        y[i]=(char**)calloc(200,sizeof(char));
    for(i=0;i<n;i++)
        {
            y[i]=(char*)calloc(200,sizeof(char));
        }
    printf("names \n");
     for(i=0;i<m;i++)
     {
         scanf("%[^n]%c",y[i]);
     }
printf("2nd set is entered \n");



return 0;

}
