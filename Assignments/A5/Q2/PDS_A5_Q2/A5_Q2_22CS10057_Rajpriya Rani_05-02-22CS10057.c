/* NAME-RAJPRIYA RANI
ROLL NUMBER-22CS10057
SECTION-2
DEPT-CSE
*/
#include <stdio.h>
int primeCheck(int i)
{
    int j,c=0;
    for(j=2;j<i;j++)
    {
        if((i%j)==0)        //factor count
            c++;
    }
    if(c>0)
        return 1;       //return 1 if even
    else
        return 0;       //return 0 if odd
}
void main()
{
    int n,x,y,i,j,a,b;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n%2 ==0)&&(n>=4))
    {
        for(i=2;i<n;i++)
        {
            for(j=2;j<n;j++)
            {
                x=primeCheck(i);    //funtion call
                y=primeCheck(j);        //function call
                if((x==0) && (y==0))
                {
                    int s=i+j;
                    if(n==s)
                    {
                        a=i;        //value storing
                        b=j;
                        break;
                    }
                }
            }
        }
        printf("%d,%d",a,b);        //printing
    }
    else
        printf("-1");
}

