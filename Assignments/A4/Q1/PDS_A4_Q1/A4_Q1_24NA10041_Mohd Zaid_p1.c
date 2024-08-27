# include <stdio.h>
    int main()
    {
    int n,t1=1,i,t3,t2=1;
    scanf("%d",&n);
    printf("%d%d",t1,-t2);
    if (n<=0)
    printf("N is invalid");
    else {
    for(i=0;i<n;i++)
    {t3=t1+t2;
    if (i%2==0)
    printf("%d",t3);
    else 
    printf("%d",-t3);
    t1=t2,t2=t3;}}
    return 0;
    }
