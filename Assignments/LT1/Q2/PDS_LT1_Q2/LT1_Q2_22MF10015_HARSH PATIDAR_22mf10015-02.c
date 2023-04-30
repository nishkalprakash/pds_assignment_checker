//NAME : HARSH PATIDAR
// ROLL NO : 22MF10015
//SECTION : 2
//lab test : 1
//description :

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,z,w,t=0,tut ,up, yup=0,subs;
    printf("taking an integer");
    scanf("%d",&n);
    y=n;
    w=n;

    while (y>0)
    {
        y/=10;
        t++;
    }
    if (n<0)
            x=n*(-1);
            else
        x=n;
    if (x%2==0)
    {
    printf("most significant value to least significant value");
    while(x>0)
    {
        tut=x%(int)pow(10,(t-1));
        printf("%d,",tut);
        t++;
    }
        }
    else{
        printf("least significant to most significant digits - %d,",x);
        while(t>1)
        {
            tut=x%(int)pow(10,(t-1));
            printf("%d,",tut);
            t--;
        }
    }
    while(w>0)
    {
        up=w%10;
        yup=yup*10+up;
        w/=10;
    }
    subs=n-yup;
    if (subs<0)
    subs=subs*-1;
    printf("reverse number = %d\n",yup);
    printf("subs between original and reverse value is %d",subs);

  return 0;
}






