#include<stdio.h>
int main()
{
    int a,b,c,d,e,s;

    printf("enter any five numbers : \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    s=a%2+b%2+c%2+d%2+e%2;

  // c part of the question
     if(s==2){
        if(a>b&&a>c&&a>d&&a>e)
            printf("Largest number is : %d",a);
        if(b>a&&b>c&&b>d&&b>e)
             printf("Largest number is : %d",b);
        if(c>a&&c>b&&c>d&&c>e)
             printf("Largest number is : %d",c);
        if(d>a&&d>b&&d>c&&d>e)
             printf("Largest number is : %d",d);
        if(e>a&&e>b&&e>c&&e>d)
            printf("Largest number is : %d",e);
     }
     return 0;
     }

