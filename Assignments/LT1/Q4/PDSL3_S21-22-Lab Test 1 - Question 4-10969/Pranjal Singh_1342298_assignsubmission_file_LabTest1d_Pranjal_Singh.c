/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

int main()
{
    int n,arr[100],brr[100],sumx=0,sumy=0,a=0,b=0;
    printf("Enter the no, of integer you want :- \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter x coordinate for point %d:- \n",i+1);
        scanf("%d",&arr[i]);
        printf("enter y coordinate for point %d:- \n",i+1);
        scanf("%d",&brr[i]);
        printf("\n\n");
        sumx= sumx+ arr[i];
        sumy = sumy + brr[i];

    }
    int meanx = sumx/n;
    int meany = sumy/n;
    for(int i=0;i<n;i++)
    {
        a = (arr[i]- meanx)*(brr[i]-meany) + a;
        b = b + (arr[i]-meanx)*(arr[i]-meanx);
    }
    float c = (float)a/b;
    float d = meany - c*meanx;
    printf("m=%.1f",c);
    printf("b=%.1f",d);

    printf("\nEquation of line is :\n \t\t y = %.1f x + %.1f",c,d);

    return 0;

}
