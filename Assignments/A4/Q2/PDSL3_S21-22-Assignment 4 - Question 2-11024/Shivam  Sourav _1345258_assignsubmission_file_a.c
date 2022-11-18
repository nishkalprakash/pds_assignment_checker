// shivam sourav
// 21CS10059
// section 3
//ide:xcode

#include <stdio.h>
int myhostelchangingtrips(int n,int i,int k,int m)
{
    if(k>n*m)
        return(0);
    static int s;
    int j;
    for (j=0;j<=m;j++)
    {
        myhostelchangingtrips( n-1, i++,k-j,m);
        if(k==0&&i<=n)
            s++;
    }
    return(s);
}

int main()
{
    int n,k,m,r,i=1;
    printf("enter the values of n,k,m");
    scanf("%d%d%d",&n,&k,&m);
    r =myhostelchangingtrips(n,i,k,m);
    printf("the total no. of ways are %d",r);
    
    
    return 0;
}
