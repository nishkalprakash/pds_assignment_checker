//SHRITIK-JAISWAL
//ROLL:21BT30026 - SEC:3
//MAC-OS
#include<stdio.h>
#include<stdlib.h>
int c1=0,c2=0,c3=0,c4=0;
int *bin1,*bin2,*bin3,*bin4;
void bin(int p[],int n);
int main()
{
    int n,i,j,k;
    int *p;
    printf("Enter n:\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("\nEnter elements\n");//input
    for (i=0;i<n;i++)
    {
        scanf("%d",&p[i]);//element
    }
    bin(p,n);//calling function to store bin
    printf("\nbin1 :");
    for (int j=0;j<c1;j++)
    {
    printf("%d,", bin1[j]);//printing bin1
    }
    printf("\n");
     printf("bin2 :");
    for (int j=0;j<c2;j++)
    {
    printf("%d, ",bin2[j]);
    }
     printf("\nbin3 :");
    for (int j=0;j<c3;j++)
    {
    printf("%d, ",bin3[j]);
    }
     printf("\nbin4 :");
    for (int j=0;j<c4;j++)
    {
    printf("%d, ",bin4[j]);
    }
}

void bin(int p[],int n)

{
    int i,a=0,b=0,c=0,d=0;
    for (i=0;i<n;i++)
    {
        if (p[i]>=1 && p[i]<=18)
       {
            c1=c1+1;
       }    
        if (p[i]>=19 && p[i]<=36)
       {
            c2=c2+1;
       }    
        if (p[i]>=37 && p[i]<=54)
       {
            c3=c3+1;
       }    
        if (p[i]>=54 && p[i]<=72)
       {
            c4=c4+1;
       }    
    }
        bin1=(int*)malloc(c1*sizeof(int));//dynamic memory allocation
        bin2=(int*)malloc(c2*sizeof(int));//dynamic memory allocation
        bin3=(int*)malloc(c3*sizeof(int));//dynamic memory allocation
        bin4=(int*)malloc(c4*sizeof(int));//dynamic memory allocation
    for (i=0;i<n;i++)
    {
        if (p[i]>=1 && p[i]<=18)
        {
            printf("%d\n",p[i]);
            bin1[a]=p[i];//storing bin1
            a=a+1;
        }    
        if (p[i]>=19 && p[i]<=36)
        { 
            bin2[b]=p[i];//storing bin2
            b=b+1;
        }    
        if (p[i]>=37 && p[i]<=54)
        {
             bin3[c]=p[i];//storing bin3
             c=c+1;
        }    
        if (p[i]>=54 && p[i]<=72)
        {
             bin4[d]=p[i];//storing bin4
             d=d+1;
        }    
    }
}