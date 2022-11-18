#include<stdio.h>
#include<stdlib.h>
//NAME- ANMOL KUMAR MISHRA
//SECTION-3
//ROLL NO- 21EC30060
// PDS LAB Q4


void filtering(int **image,int **kernel,int m,int n,int sz)
{
      int l=n-sz+1,r=m-sz+1;
      int **filt;
      filt = (int**)malloc(sizeof(int*)*l);
    for(int i=0;i<n;i++)
        filt[i] = (int*)malloc(sizeof(int)*r);

    for(int i=0;i<l;i++)
    {
        for(int j=0;j<r;j++)
        {
            filt[i][j]=0;
            for(int p=i;p<i+sz;p++)
            {
                for(int q=j;q<j+sz;q++)
                    filt[i][j] += (image[p][q]*kernel[p-i][q-j]);
            }
        }
    }

    printf("Output image matrix is: \n");
     for(int i=0;i<l;i++)
    {
        for(int j=0;j<r;j++)
        printf("%d ",filt[i][j]);
    printf("\n");
    }
}
int main()
{
    int m,n,**image,sz,**kernel;

    printf("Enter dimension of the input image matrix: ");
    scanf("%d%d",&n,&m);
    image = (int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        image[i] = (int*)malloc(sizeof(int)*m);
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&image[i][j]);
    }

    printf("Enter the kernel size: ");
    scanf("%d",&sz);
    kernel = (int**)malloc(sizeof(int*)*sz);
    for(int i=0;i<sz;i++)
        kernel[i] = (int*)malloc(sizeof(int)*sz);
    printf("Enter the kernel elements: ");
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
            scanf("%d",&kernel[i][j]);
    }
    filtering(image,kernel,m,n,sz);
}
