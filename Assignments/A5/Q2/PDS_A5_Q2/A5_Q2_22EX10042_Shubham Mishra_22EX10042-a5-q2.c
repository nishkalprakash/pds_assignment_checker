
#include<stdio.h>
int primecheck(int);
int primecheck(int i){
    int x=0;
    if(i==1||i==0)
    {

        return 0;
    }
    else
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                x++;

            }

        }
        if(x==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }





}
int main(){
    int n,y;
    printf("the number is");
    scanf("%d",&y);

    primecheck(y);
    printf("the number n is");
    scanf("%d",&n);
    if(primecheck(n))
    {
        printf("-1");
    }
    else{
        for(int i=n-1;i>1;i--)
        {
           if(primecheck(i))
           {
               int p,q;
               p=i;
               q=n-i;
               if(primecheck(q))
               {
                  printf("%d,%d",q,p);
                  break;
               }


           }
        }
    }





}
