/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>

void dig(int x[],int c,int d)
{
    int p;
    p=10000*x[0]+1000*x[1]+x[2]*100+x[3]*10+x[4];
    //digits of p are in arrey which are converted to p
    if(p%(c+d)!=0) printf("%d \n",p);
}
int main()
{
    int temp;
    int c,d;//c and d are between 1 and 9
    printf("enter 2 digits\n");
    scanf("%d%d",&c,&d);
    int x[5];
    for(int i=0;i<5;i++) x[i]=c;// storing digits of the 5 digit number in an arrey
    dig(x,c,d);
    //checking for 4 c as digits and 1 d as digits
    x[0]=d;
    dig(x,c,d);
    for(int k=0;k<4;k++)
    {
        temp=x[k]; x[k]=x[k+1]; x[k+1]=temp;
        dig(x,c,d);
    }
    //checking for 2 c as digit and 3 d as digits
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[1]=d;
    dig(x,c,d);
    for(int k=1;k<4;k++)
    {
        temp=x[k]; x[k]=x[k+1]; x[k+1]=temp;
        dig(x,c,d);
    }
    for(int i=0;i<5;i++) x[i]=c;
    x[2]=d; x[1]=d;
    dig(x,c,d);
    for(int k=2;k<4;k++)
    {
        temp=x[k]; x[k]=x[k+1]; x[k+1]=temp;
        dig(x,c,d);
    }
     for(int i=0;i<5;i++) x[i]=c;
    x[3]=d; x[2]=d;
    dig(x,c,d);
    for(int k=3;k<4;k++)
    {
        temp=x[k]; x[k]=x[k+1]; x[k+1]=temp;
        dig(x,c,d);
    }
     for(int i=0;i<5;i++) x[i]=c;
    x[3]=d; x[4]=d;
    dig(x,c,d);
    //checking for 3 c as digits 2 d as digits
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[1]=d; x[2]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[1]=d; x[3]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[1]=d; x[4]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[2]=d; x[3]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[2]=d; x[4]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[0]=d; x[3]=d; x[4]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[1]=d; x[2]=d; x[3]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[1]=d; x[2]=d; x[4]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[1]=d; x[3]=d; x[4]=d;
    dig(x,c,d);
    for(int i=0;i<5;i++) x[i]=c;
    x[2]=d; x[3]=d; x[4]=d;
    dig(x,c,d);
    //checking for number with 4 d as digits and 1 c
    for(int i=0;i<5;i++) x[i]=d;
     x[0]=c;
    dig(x,c,d);
    for(int k=0;k<4;k++)
    {
        temp=x[k]; x[k]=x[k+1]; x[k+1]=temp;
        dig(x,c,d);
    }
    //checking for 5 d as digits
    for(int i=0;i<5;i++) x[i]=d;
    dig(x,c,d);
}
