/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
void sorting(int *ptr);
int main()
{
    int a,b,c,k;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    int d[3];
    d[0]=a;
    d[1]=b;
    d[2]=c;
    printf("Address of a:%u\n",&a);
    printf("Address of b:%u\n",&b);
    printf("Address of c:%u\n",&c);
    printf("value of a,b,c:%d,%d,%d\n",a,b,c);
    sorting(d);
    printf("Address of a:%u\n",&a);
    printf("Address of b:%u\n",&b);
    printf("Address of c:%u\n",&c);
    printf("value of a,b,c:");
    for(k=0;k<3;k++)
    {
      printf("%d,",d[k]);
    }

    return 0;

}
void sorting(int *ptr)
{
    int t,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }



}
