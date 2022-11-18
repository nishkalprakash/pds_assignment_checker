#include <stdio.h>
int n;
int minTotalIqDiff(int m,int a[]){
    // base case
    // when it reaches end

     // sorting
     int mi,j,t,i;
        for(i=0;i<n-1;++i)
    {
        mi=i;
        for(j=i+1;j<n;++j)
        {
            if(a[j]<a[mi])mi=j;
        }t=a[i];a[i]=a[mi];a[mi]=t;
    }

    int sum[100];
    for(i=0;i<n;++i)
    {
        int x;
        x= i%m;
        for(int j=0;j<m;++j)
        {
            if(x==j)
            {
                for(int k=0;k*m+j<n;++k)
                {
                    sum[j]=0;
                    sum[j]+=a[k*m+j];

                }
            }
        }
    }
    int diff[100];
    for(i=0;i<100;++i)
    {
        diff[i]=-9999;
    }
    int k=0;
    for(i=0;i<m-1;++i)
    {
        for(int j=i;j<m;++j)
        {
            diff[k]=sum[i]-sum[j];
            if(diff[k]<0)diff[k]*=-1;
        }
    }
    int min=diff[0];
    for(i=0;diff[i+1]>=0;++i)
    {
        if(diff[i+1]<diff[i])min=diff[i+1];
    }
    return min;

}



int main(){
    int m;
    printf("\nEnter no. of teams(m) to be foremed: ");
    scanf("%d",&m);
    printf("\nEnter no. of size of array(n) of IQ: ");
    scanf("%d",&n);


    printf("\nEnter elments(IQ) of array(n): ");
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int ans = minTotalIqDiff(m,arr);

    printf("\nMinimum total IQ difference: %d",ans);

    return 0;
}
