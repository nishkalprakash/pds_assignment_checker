//

#include <stdio.h>

int sum(int a[],int n);


int sum(int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        s+=a[i];
    return s;
}

int main()
{
    char s1[100];
    char s2[100];
    char sb[100];
    char ss[100];
    printf("Sequence1\t");
    scanf("%[^\n]",s1);
    fflush(stdin);
    printf("Sequence2\t");
    scanf("%[^\n]",s2);
    int l1;
    int l2;
    for(l1=0;s1[l1]!='\0';++l1);
    for(l2=0;s2[l2]!='\0';++l2);
    int n,m;
    if(l1>l2)   
    {
        n=l1;
        m=l1-l2;
        for(int i=0;i<l1;i++)
            sb[i]=s1[i];
        for(int i=0;i<l2;i++)
            ss[i]=s2[i];
    }
    else
    {
        n=l2;
        m=l2-l1;
        for(int i=0;i<l1;i++)
            ss[i]=s1[i];
        for(int i=0;i<l2;i++)
            sb[i]=s2[i];
    }
    int a[n];
    if(l1==l2)
    {
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
                a[i]=0;
            else 
                a[i]=1;
        }
        
        int score=sum(a,n);
        printf("Penalty \t");
        for(int i=0;i<n;i++)  printf("%d",a[i]);
        printf("\nSimilarity score = %d",score);
    }
    else if(m==1)
    {
        int z[n];
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++) a[k]=0;
            for(int j=0;j<n;j++)
            {
                if(j<i)
                {
                    if(sb[j]==ss[j])
                        a[j]==0;
                    else    
                        a[j]==1;
                }
                else if(j>i)
                {
                    if(sb[j]==ss[j-1])
                        a[j]==0;
                    else    
                        a[j]==1;

                }
                else
                {    
                    a[i]=2;
                }
            }
            z[i]=sum(a,n);
        }
        int min=z[0];
        int flag=-1;
        for(int i=1;i<n;i++)
        {
            if(z[i]<min)
            {
                min=z[i];
                flag=i;
            }
        }
        printf("Penalty \t");
        for(int i=0;i<n;i++)  printf("%d",a[i]);
        printf("\nSimilarity score = %d",min);


    }
    else
    {
        printf("I am doing if length differs by 2\n");
    }

    return 0;
}