#include<stdio.h>
int main()
{
    int n,r,l,count=0,s,p;
    printf("enter the number\n");
    scanf("%d",&n);
    l=n;
    for(int i=1;i<n;i=i*10)count++;//to calculate no. of digits




      //to print reverse of digits AND ABSOLUTE DIFFFERENCE BETWEEN THEM
       int rev=0;
       if(l<0)
       {
           l=-1*l;
       }
       else{
        l=l;
       }

        while(n>0)
        { r=n%10;
         n=n/10;
           rev=rev*10+r;
        }
        printf("%d",rev);
        int diff=l-rev;
        if(diff<0)
        printf("difference between reverse and original number=%d",rev-l);
        else{
            printf("difference between reverse and original number=%d",l-rev);
        }






    return 0;
}
