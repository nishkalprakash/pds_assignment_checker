#include<stdio.h>
#include<math.h>

// Harsh Raj
// Roll : 21IE10017

combinations(int n[5],int c,int d,int r)
{
    for(int i=0,j=c;i<2;i++,j=d)
    {
        n[r]=j;
        r=r+1;
        if(r==5)
        {
            int num;
            num=n[0]+n[1]*10+n[2]*100+n[3]*1000+n[4]*10000;
            if(num%(c+d)!=0)
            {
              printf("%d , ",num);
            }
            else combinations(n,c,d,r);
        }
    }
}

void main()
{
    int c,d,temp,n[5];
    int r=0;
    printf("Enter the 2 numbers : \n");
    scanf("%d%d",&c,&d);
    if(c>d)
    {
        temp=c;
        c=d;
        d=temp;
    }
    combinations(n,c,d,r);
}
