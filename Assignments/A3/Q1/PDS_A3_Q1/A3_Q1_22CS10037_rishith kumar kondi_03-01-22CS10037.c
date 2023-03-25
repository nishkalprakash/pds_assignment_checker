#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i=0,j=0,k1=0,k2=0,k3=0,k4=0,k5=0,K1=0,K2=0,K3=0,K4=0,K5=0,p=0,m=0,n=0,q=0;
    printf("enter 5 numbers ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    if(a%2==0){
        i=i+1;
        K1=a;}
    else{
         j=j+1;
         k1=a;}
    if(b%2==0){
        i=i+1;
        K2=b;}
    else{
        j=j+1;
        k2=b;}
    if(c%2==0){
        i=i+1;
        K3=c;}
    else{
        j=j+1;
        k3=c;}
    if(d%2==0){
        i=i+1;
        K4=d;}
    else{
        j=j+1;
        k4=d;}
    if(e%2==0){
        i=i+1;
        K5=e;}
    else{
        j=j+1;
        k5=e;}
    if(i==3)
    {
       if(K1>K2){
        p=K1;}
       else{
        p=K2;}
        if(p>K3){
            p=p;}
        else{
            p=K3;}

        if(p>K4){
            p=p;}
        else{
            p=K4;}

        if(p>K5){
            p=p;}
        else{
            p=K5;}

       }
       printf("%d",p);
       if(j==3)
       {
           if(k1>k2){
            m=k1;
            n=k2;}
            if(m<k3){
                m=k3;
                n=k1;
                q=k2;}
            else {
                m=m;
                if(k3>k2){
                    n=k3;
                    q=k2;}
            }
            if(m<k4){
                q=n;
                n=m;
                m=k4;}
             else{
                m=m;
                if(n<k4){
                    q=n;
                    n=k4;}
                else if(q<k4){
                        q=k4;}
             }
              if(m<k5){
                q=n;
                n=m;
                m=k5;}
              else{
                    m=m;
                if (n<k5){
                    q=n;
                    n=k5;}
                else if(q<k5){
                        q=k5;}
              }

              printf("the ascending order of odd numbers is %d,%d,%d",q,n,m);


            }


       }