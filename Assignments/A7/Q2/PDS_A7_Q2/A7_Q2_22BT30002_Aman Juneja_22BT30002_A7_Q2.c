/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to find elements which have m duplicates
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n,i=1,m,count,t=0,*z,y=0,F=0;
    char d;
    printf("n=");
    n=(int *)malloc(i*sizeof(int));
    scanf("%d",&n[i-1]);
    while (1)
    {
        i++;
        n=realloc(n,i*sizeof(int));
        scanf("%d",&n[i-1]);
        e=getchar();
        if (d=='\n')
        {
            break;
        }
    }
    z=(int *)calloc(i,sizeof(int));
    printf("m=");
    scanf("%d",&m);
    for (int j=0; jcount=0;)
        for (int k=0; k if (n[k]==n[j])) count++;
 
        if (c==m)
	{
    		z[y]=n[j]
	}
	}
for (int j=0; j<=y; j++)
{
    t=z[j];
    if (t==0) continue;
    else
    {
        for (int k=0; k<=y; k++)
        {
            if (a[k]==t) z[k]=0;
        }
        printf("%d ",t);
    }
}

if (F==0) printf("No number ");
printf("appears %d times\n",m);
return 0;
}

