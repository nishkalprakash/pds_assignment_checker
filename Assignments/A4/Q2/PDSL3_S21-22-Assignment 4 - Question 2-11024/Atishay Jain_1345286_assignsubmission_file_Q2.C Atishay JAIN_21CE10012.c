int mhct(int k,int m,int n,int i,int sum,int a,int j)
{

    sum=sum+m;
    if(m==0)
      return j;
    if(sum==a&&i<=n)
        {
            j++;
            sum=0;
            mhct(a,m-1,n,1,sum,a,j);
        }
        if(sum<a)
        {
            mhct(a,m,n,i+1,sum,a,j);
        }
        if(sum>a)
        {
            sum=sum-m;
            mhct(a,m-1,n,i,sum,a,j);
        }
}
void main()
{
    int K,M,N,i=1,sum=0,a,j=0,c;
    printf("enter k/m/n:");
    scanf("%d/%d/%d",&K,&M,&N);
    a=K;
    c=mhct(K,M,N,i,sum,a,j);
    printf("total possible combinations are:%d",c);
    getch();

}
