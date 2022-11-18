/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

long int p[500][100];
int t=0;
long int q=1;

int myHostelChaningTrips(int n , int k , int m , int i)
{
    int j,l,c=n,d,o,p=1,y,f;
    long int x,a[n],s=0,sum=0;

    for(j=0;j<n;j++)
    a[j]=0;

    srand(time(0));

    while(s!=15)
    {   s=0;
        for(j=0;j<n;j++)
        {
            a[j]=rand()%(m+1);
            s+=a[j];
        }
    }   

    for(j=0;j<n;j++)
    {
        p[t][j]=a[j];
        if(a[j]==0)
        c--;
    }
    
    
    d=c;
    
    
    t++;
    if(t!=1)
    {   
        p=1;
        for(o=0;o<t;o++)
        {   
            for(j=0;j<n;j++)
            {
                if(p[t][j]!=0)
                {   
                    x=p[t][j];
                    for(l=0;l<d;l++)
                    x=x*10;
            
                    sum+=x;
                    d--;
                }
            }
            d=c;
            for(l=0;l<n;l++)
            {   
                f=0; d=c; s=0;

            for(y=l;y<n&&f<n;y++,f++)
            {
                if(a[i]!=0)
                {
                    x=a[i];
                    for(l=0;l<d;l++)
                    x*=10;

                    s+=x;
                }

                if(y==(n-1))
                y=0;
            }

            if(s==sum)
            {
                p=0;
                break;
            }
            }

            if(sum==s)
            {
                p=0;
                break;
            }    
        }

    }

    q++;

    if(p==1)
    {   i=i+1;
        x=myHostelChaningTrips(n,k,m,i);
    }
    else if(t>=500)
    return i;
    else if(q>=10000)
    return i;
    else
    {   
        t--;
        x=myHostelChaningTrips(n,k,m,i);
    }
}



int main()
{
   int i=1,k,n,m,x;
   
   printf("Enter n(<=10) : ");
   scanf("%d",&n);
   printf("Enter k (k>n pls): ");
   scanf("%d",&k);
   printf("Enter m : ");
   scanf("%d",&m);
   
   x=myHostelChaningTrips(n,k,m,i);
   printf("\nNo of trips possible = %d",x);



    return 0;
}