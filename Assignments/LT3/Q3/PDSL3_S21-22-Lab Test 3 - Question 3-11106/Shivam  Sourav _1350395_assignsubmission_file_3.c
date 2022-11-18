

#include <stdio.h>

int main()
{
    int c,d,d1,d2,d3,d4,d5,num;
    printf("enter two digits from 0-9");
    scanf("%d %d",&c,&d);
    if(c==d)
    {
        printf("no such number");
        return(0);
    }
    for(d1=c;d1!=(2*d-c);d1+=(d-c))
    {
        for(d2=c;d2!=(2*d-c);d2+=(d-c)) 
        {
             for(d3=c;d3!=(2*d-c);d3+=(d-c))
             {
                  for(d4=c;d4!=(2*d-c);d4+=(d-c))
                  {
                       for(d5=c;d5!=(2*d-c);d5+=(d-c))
                       {
                           num=d1+10*d2+100*d3+1000*d4+10000*d5;
                           if(num%(c+d)!=0)
                           printf("%d ",num);
                       }
                  }
             }
        }
    }

    return 0;
}
