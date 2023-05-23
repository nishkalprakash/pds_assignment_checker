#include <stdio.h>
#include <string.h>
void main()
{
    char x[20][20],y[20][20],z[20][20],ch;
    char t[20];
    int n,i,m,k,j;
    printf("enter size of array x: ");
    scanf("%d",&n);
    printf("enter size of array y: ");
    scanf("%d",&m);
    k=m+n;
    ch=getchar();

    printf("enter names of array x: ");
    for(i=0;i<n;i++)
        gets(x[i]);

    printf("enter names of array y: ");
    for(i=0;i<m;i++)
        gets(y[i]);

    printf("\n names in x: \n");
    for(i=0;i<n;i++)
        printf("%s   ",x[i]);

    printf("\n names in y: \n");
    for(i=0;i<m;i++)
        printf("%s   ",y[i]);

    for(i=0;i<n;i++)
        strcpy(z[i],x[i]);
    for(i=n;i<k;i++)
        strcpy(z[i],y[i]);

    printf("\n The elements in z \n");
    for(i=0;i<k;i++)
        printf("%s  ",z[i]);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(strcmp(z[j],z[j+1])>0)
            {
                strcpy(t,z[j]);
                strcpy(z[j],z[j+1]);
                strcpy(z[j+1],t);
            }
        }
    }
    printf("\n sorted z: \n");
    for(i=0;i<k;i++)
        printf("%s  ",z[i]);


}
