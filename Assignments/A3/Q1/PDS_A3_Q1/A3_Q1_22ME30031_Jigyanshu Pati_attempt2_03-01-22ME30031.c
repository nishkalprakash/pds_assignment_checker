#include<stdio.h>
int main()
{
    int a,b,c,d,e,max1,max2,max3;
    printf("enter five numbers:");
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);

    if (a%2==0 && b%2==0 && c%2!=0 && d%2!=0 && e%2!=0)
    {

       if (c>d && c>e){//1
        max1=c;
        if (d>e){
            max2=d;
            max3=e;

        }
         else {
            max2=e;
            max3=d;

        }

       }
       if (d>e && d>c){
        max1=d;
        if (c>e){
            max2=c;
            max3=e;

        }
         else {
            max2=e;
            max3=c;

        }

       }
       if (e>c && e>d){
        max1=e;
        if (c>d){
            max2=c;
            max3=d;

        }
         else {
            max2=d;
            max3=c;

        }

       }
       printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);
    }

    if (c%2==0 && b%2==0 && a%2!=0 && d%2!=0 && e%2!=0)
    {
       if (a>d && a>e){//2
        max1=a;
        if (d>e){
            max2=d;
            max3=e;

        }
         else {
            max2=e;
            max3=d;

        }

       }
       if (d>e && d>a){
        max1=d;
        if (a>e){
            max2=a;
            max3=e;

        }
         else {
            max2=a;
            max3=c;

        }

       }
       if (e>a && e>d){
        max1=e;
        if (a>d){
            max2=a;
            max3=d;

        }
         else {
            max2=d;
            max3=a;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (d%2==0 && b%2==0 && c%2!=0 && a%2!=0 && e%2!=0)
    {
       if (c>a && c>e){//3
        max1=c;
        if (a>e){
            max2=a;
            max3=e;

        }
         else {
            max2=e;
            max3=a;

        }

       }
       if (a>e && a>c){
        max1=a;
        if (c>e){
            max2=c;
            max3=e;

        }
         else {
            max2=e;
            max3=c;

        }

       }
       if (e>c && e>a){
        max1=e;
        if (c>a){
            max2=c;
            max3=a;

        }
         else {
            max2=a;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }
    if (e%2==0 && b%2==0 && c%2!=0 && d%2!=0 && a%2!=0)
    {
       if (c>d && c>a){//4
        max1=c;
        if (d>a){
            max2=d;
            max3=a;

        }
         else {
            max2=a;
            max3=d;

        }

       }
       if (d>a && d>c){
        max1=d;
        if (c>a){
            max2=c;
            max3=a;

        }
         else {
            max2=a;
            max3=c;

        }

       }
       if (a>c && a>d){
        max1=a;
        if (c>d){
            max2=c;
            max3=d;

        }
         else {
            max2=d;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (a%2==0 && c%2==0 && b%2!=0 && d%2!=0 && e%2!=0)
    {
       if (b>d && b>e){
        max1=c;//5
        if (d>e){
            max2=d;
            max3=e;

        }
         else {
            max2=e;
            max3=d;

        }

       }
       if (d>e && d>b){
        max1=d;
        if (b>e){
            max2=b;
            max3=e;

        }
         else {
            max2=e;
            max3=c;

        }

       }
       if (e>b && e>d){
        max1=e;
        if (b>d){
            max2=b;
            max3=d;

        }
         else {
            max2=d;
            max3=b;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (a%2==0 && d%2==0 && c%2!=0 && b%2!=0 && e%2!=0)
    {
       if (c>b && c>e){
        max1=c;//6
        if (d>e){
            max2=b;
            max3=e;

        }
         else {
            max2=e;
            max3=b;

        }

       }
       if (b>e && b>c){
        max1=d;
        if (c>e){
            max2=c;
            max3=e;

        }
         else {
            max2=e;
            max3=c;

        }

       }
       if (e>c && e>b){
        max1=e;
        if (c>b){
            max2=c;
            max3=b;

        }
         else {
            max2=b;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }
    if (a%2==0 && e%2==0 && c%2!=0 && d%2!=0 && b%2!=0)
    {
       if (c>d && c>b){
        max1=c;//7
        if (d>e){
            max2=d;
            max3=b;

        }
         else {
            max2=b;
            max3=d;

        }

       }
       if (d>b && d>c){
        max1=d;
        if (c>e){
            max2=c;
            max3=b;

        }
         else {
            max2=b;
            max3=c;

        }

       }
       if (b>c && b>d){
        max1=e;
        if (c>d){
            max2=c;
            max3=d;

        }
         else {
            max2=d;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (c%2==0 && d%2==0 && a%2!=0 && b%2!=0 && e%2!=0)
    {
       if (a>d && a>e){
        max1=a;//8
        if (d>e){
            max2=d;
            max3=e;

        }
         else {
            max2=e;
            max3=d;

        }

       }
       if (d>e && d>a){
        max1=d;
        if (a>e){
            max2=a;
            max3=e;

        }
         else {
            max2=e;
            max3=a;

        }

       }
       if (e>c && e>d){
        max1=e;
        if (c>d){
            max2=c;
            max3=d;

        }
         else {
            max2=d;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (d%2==0 && e%2==0 && a%2!=0 && c%2!=0 && b%2!=0)
    {
       if (c>a && c>b){//9
        max1=c;
        if (a>e){
            max2=a;
            max3=b;

        }
         else {
            max2=b;
            max3=a;

        }

       }
       if (a>e && a>c){
        max1=a;
        if (c>e){
            max2=a;
            max3=b;

        }
         else {
            max2=b;
            max3=a;

        }

       }
       if (b>c && b>a){
        max1=b;
        if (c>a){
            max2=c;
            max3=a;

        }
         else {
            max2=a;
            max3=c;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }

    if (c%2==0 && e%2==0 && a%2!=0 && d%2!=0 && b%2!=0)
    {
       if (a>d && a>b){//10
        max1=a;
        if (d>b){
            max2=d;
            max3=b;

        }
         else {
            max2=b;
            max3=d;

        }

       }
       if (d>b && d>a){
        max1=d;
        if (a>b){
            max2=a;
            max3=b;

        }
         else {
            max2=b;
            max3=a;

        }

       }
       if (b>a && b>d){
        max1=b;
        if (a>d){
            max2=a;
            max3=d;

        }
         else {
            max2=d;
            max3=a;

        }

       }

        printf("smallest three odd integers: %d,%d,%d",max3,max2,max1);


    }
    else if (a%2==0 && b%2==0 && c%2==0 && d%2!=0 && e%2!=0)
    {
        if (a>b && a>c)
            {
                printf("largest number: %d",a);
            }
        else if (b>a && b>c)
            {
                printf("largest number: %d",b);
            }
        else if (c>a && c>b)
            {
                printf("largest number: %d",c);
            }



    }

    else if (  e%2==0 && b%2==0 && a%2==0 && d%2!=0 && a%2!=0)
    {
       if (e>b && e>c)
            {
                printf("largest number: %d",e);
            }
        else if (b>e && b>c)
            {
                printf("largest number: %d",b);
            }
        else if (c>e && c>b)
            {
                printf("largest number: %d",c);
            }

    }

    else if (a%2==0 && b%2==0 && e%2==0 && d%2!=0 && c%2!=0)
    {
       if (a>b && a>e)
            {
                printf("largest number: %d",a);
            }
        else if (b>a && b>e)
            {
                printf("largest number: %d",b);
            }
        else if (e>a && e>b)
            {
                printf("largest number: %d",e);
            }


    }

    else if (a%2==0 && b%2==0 && d%2==0 && c%2!=0 && e%2!=0)
    {
       if (a>b && a>d)
            {
                printf("largest number: %d",a);
            }
        else if (b>a && b>d)
            {
                printf("largest number: %d",b);
            }
        else if (d>a && d>b)
            {
                printf("largest number: %d",d);
            }


    }
    else if (d%2==0 && e%2==0 && b%2==0 && c%2!=0 && a%2!=0)
    {
      if (d>b && d>e)
            {
                printf("largest number: %d",d);
            }
        else if (b>d && b>e)
            {
                printf("largest number: %d",b);
            }
        else if (e>d && e>b)
            {
                printf("largest number: %d",e);
            }

    }

    else if (a%2==0 && d%2==0 && e%2==0 && c%2!=0 && b%2!=0)
    {
     if (a>d && a>e)
            {
                printf("largest number: %d",a);
            }
        else if (d>a && d>e)
            {
                printf("largest number: %d",d);
            }
        else if (e>a && e>d)
            {
                printf("largest number: %d",e);
            }
            if (b%2==0 && c%2==0 && d%2==0 && a%2!=0 && e%2!=0)
    {

        //else if  (b>c && b>d)
            {
                printf("largest number: %d",a);
            }
//        else if (d>c && d>b)
            {
                printf("largest number: %d",d);
            }
        //else if (c>b && c>a)
            {
                printf("largest number: %d",e);
            }
    }

    }
}








