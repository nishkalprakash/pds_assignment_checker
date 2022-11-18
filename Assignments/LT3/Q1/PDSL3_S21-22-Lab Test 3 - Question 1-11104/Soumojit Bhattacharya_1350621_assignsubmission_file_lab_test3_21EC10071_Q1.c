/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>

void exception(int**arr,int a,int b,int h,int w)//in the case where two blocks with different numbers get joined
{
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            if(arr[i][j]>b)
            arr[i][j]--;
            if(arr[i][j]==b)
            arr[i][j]=a;
        }
    }
}

void print(int**arr,int h,int w)//print the image
{
    printf("\n\n");
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n\n");
    }
}
int main()
{
    int w,h;
    printf("Enter the image size:");//user input image size
    scanf("%d %d",&h, &w);
    int**img=(int**)malloc(h*sizeof(int*));//allocate memory for image
    for(int i=0;i<h;i++)
    {
        img[i]=(int*)malloc(w*sizeof(int));
    }
    printf("Enter the image:");//user input image
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            scanf("%d", &img[i][j]);
        }
    }
    int number=0;
    for(int i=0;i<h;i++)//iterate through every pixel
    {
        for(int j=0;j<w;j++)
        {
            if(img[i][j]==1)
            {
                int a=0,b=0,c=0,d=0;
                if(i-1>=0)
                {
                    a=img[i-1][j];
                    if(j+1<w)
                    b=img[i-1][j+1];
                    if(j-1>0)
                    c=img[i-1][j-1];
                }
                if(j-1>0)
                d=img[i][j-1];
                if(a==0&&(b==0&&(c==0&&d==0)))//see if it can be joined to a block that we have already found
                {                             //we are going left to right and top to bottom top row being 0th row
                    number++;//if new block found increase number of blocks
                    img[i][j]=number;
                    continue;
                }
                if(b!=c&&(b>0&&c>0))
                {
                    exception(img,c,b,h,w);//exception cases where this pixel joins to old blocks
                    b=c;
                    number--;//decrease number of blocks
                }
                if(b!=d&&(b>0&&d>0))
                {
                    exception(img,b,d,h,w);//exception cases where this pixel joins to old blocks
                    d=b;
                    number--;//decrease number of blocks
                }
                if(a>0)
                b=a;
                else
                if(c>0)
                b=c;
                else
                if(d>0)
                b=d;
                img[i][j]=b;

            }
        }
    }
    print(img,h,w);//output
    printf("number of connected components: %d", number);
    printf("\n");
    for(int i=0;i<h;i++)//free allocated memory
    {
        free(img[i]);
    }
    free(img);
    return 0;
}