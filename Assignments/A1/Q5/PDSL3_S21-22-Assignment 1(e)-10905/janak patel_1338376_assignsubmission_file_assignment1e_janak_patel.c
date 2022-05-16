/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:1(e)
*/
#include<stdio.h>
int main (){

     int a,s,n;
     printf("enter 110 for synthetic wood\n");
     printf("enter 115 for natural wood\n");
    scanf("%d",&a);
    n==110;
    s==115;
    if (a==110){
        printf( "natural wood\n");
        float weight;
        float price;
        float GST;
        float totalprice;
        printf("enter weight in kg:\n");
        scanf("%Lf",&weight);
        price= weight*1100;

        printf("price :%Lf",price);

        GST=1.20*price;
        printf("tax:%Lf",GST);

        totalprice=price+GST;
        printf("totalprice: %Lf",totalprice);
        }



    else if (a==115){
        printf(" synthetic wood\n");

        float weight;
        float price;
        float GST;
        float netprice;
        printf("enter weight in kg:\n");
        scanf("%Lf",&weight);
        price= weight*780;

        printf("price :%Lf",price);

        GST=1.15*price;
        printf("tax:%Lf",GST);

       netprice= price+GST;
        printf("netprice:%Lf",netprice);
        }

    else
        printf("not allow");

     }

