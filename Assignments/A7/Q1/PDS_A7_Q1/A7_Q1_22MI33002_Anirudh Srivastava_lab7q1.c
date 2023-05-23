#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int prf(int a)
{
printf("%d",a);

int p=0;
for (int i=a/2;i>0;i--)
{
    if((a%i)==0)
    {

        p=p+i;
    }
}
if (p==a) return 1;
else return 0;
}

void perfect(int*y,int n)
{

    int v=0;
    for (int i=0;i<n;i++)
    {
        if((prf(*y))==1)
        {

            printf("%d",*y);
            q++;
        }
        y++;
    }
if(v>0) {
    printf("perfect no");
}
}





int main()
{
    int n,x=2,y=1000;
    scanf("%d",&n);
    time_t t;
    int*a=(int*) malloc(n*sizeof(int));
    srand(time(t));
    int* s=a;
    for (int i=0;i<n;i++)
    {
        *s=x+rand()%y;
        s++;
    }
    int*z=a;
    printf("%d random number array:",n);
    for (int i=0;i<n;i++) {
        printf("%d",*z);
        z++;
    }
    printf("\n");
    int *l=a;
    perfect(l,n);
    printf("\n");


    return 0;
}
