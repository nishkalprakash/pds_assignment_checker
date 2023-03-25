#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a pair of number \n");
    scanf("%d%d",&x,&y);
    if(x>=-999&&x<=999&&y>=-999&&y<=999)//checking for valid input
    {
        if(x*y<0)
        {
            printf("Not a perfect pair");
        }
        else
        {
            if(x<0)
                x=x*(-1);
            if(y<0)
                y=y*(-1);
            int c1,c2,l1,l2;
            c1 = x/10;
            c2 = y/10;
            if(c1==0)
                l1 = 1;
            else if(c1>=1&&c1<10)
                l1 = 2;
            else if(c1>=10&&c1<100)
                l1 = 3;
            if(c2==0)
                l2 = 1;
            else if(c2>=1&&c2<10)
                l2 = 2;
            else if(c2>=10&&c2<100)
                l2 = 3;
            int temp;
            if(l1!=l2)
                printf("Wrong input");

            else if(l1==1)
            {
                if(x==y)
                    printf("Perfect Pair");
            }
            else if(l1==2)
            {
                temp = (x%10)*10+x/10;
                if(temp==y)
                    printf("Perfect Pair");
            }
            else if(l1==3)
            {
                temp = (x%10)*100;
                x = x/10;
                temp = temp+(x%10)*10+x/10;
                if(temp==y)
                    printf("Perfect Pair");
            }
        }
    }
    else
        return 0;
}
