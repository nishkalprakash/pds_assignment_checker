include <stdio.h>
int main()
//reading n elements and storing them in a size of array N//
{
       int i,j,n,m,N=100,M=10;
       char haystack[N],needle=[M];
       
       printf("how many elements you want to read in haystack");
       scanf("%d",&n);
       printf("how many elements you want to read in needle");
       scanf("%d",&m);
       haystack[n]=0;
       needle[m]=0;
       for(i=0;i<n;++i)
       {scanf("%d",&haystack[i]);}
       for(i=0;i<n;++i)
       {scanf("%d",&needle[i]);}
