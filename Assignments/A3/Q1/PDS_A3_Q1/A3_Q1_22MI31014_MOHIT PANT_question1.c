#include <stdio.h>
int main(){

    int a,b,c,d,e;
    int s=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if (a%2==0){
        s=s+1;
    }
    if (b%2==0){
        s=s+1;
    }
    if (c%2==0){
        s=s+1;
    }
    if (d%2==0){
        s=s+1;
    }
    if (e%2==0){
        s=s+1;
    }
    if (s==3){
        if (a>b && a>c && a>d && a>e) printf("LARGEST NUMBER :\n%d",a);
        else if (b>a && b>c && b>d && b>e) printf("LARGEST NUMBER :\n%d",b);
        else if (c>a && c>b && c>d && c>e) printf("LARGEST NUMBER :\n%d",c);
        else if (d>a && d>c && d>b && d>e) printf("LARGEST NUMBER :\n%d",d);
        else printf("LARGEST NUMBER :\n%d",e);
    }
    if (s==2){
        if (a%2==1 && b%2==1 && c%2==1 && d%2==0 && e%2==0){
            if (a>b && b>c) printf(" %d %d %d",c,b,a);
            else if (a>c && c>b) printf("smallest odd numbers :\n%d %d %d",b,c,a);
            else if (b>c && c>a) printf("smallest odd numbers :\n%d %d %d",a,c,b);
            else if (b>a && a>c) printf("smallest odd numbers :\n%d %d %d",c,a,b);
            else if (c>a && a>b) printf("smallest odd numbers :\n%d %d %d",b,a,c);
            else printf("smallest odd numbers :\n%d %d %d",a,b,c);

        }
        else if (a%2==1 && b%2==1 && d%2==1  && c%2==0 && e%2==0){
            if (a>b && b>d) printf(" %d %d %d",d,b,a);
            else if (a>d && d>b) printf("smallest odd numbers :\n%d %d %d",b,d,a);
            else if (b>d && d>a) printf("smallest odd numbers :\n%d %d %d",a,d,b);
            else if (b>a && a>d) printf("smallest odd numbers :\n%d %d %d",d,a,b);
            else if (d>a && a>b) printf("smallest odd numbers :\n%d %d %d",b,a,d);
            else printf("smallest odd numbers :\n%d %d %d",a,b,d);

        }
        else if (a%2==1 && b%2==1 && e%2==1 && d%2==0 && c%2==0){
            if (a>b && b>e) printf(" %d %d %d",c,b,a);
            else if (a>e && e>b) printf("smallest odd numbers :\n%d %d %d",b,e,a);
            else if (b>e && e>a) printf("smallest odd numbers :\n%d %d %d",a,e,b);
            else if (b>a && a>e) printf("smallest odd numbers :\n%d %d %d",e,a,b);
            else if (e>a && a>b) printf("smallest odd numbers :\n%d %d %d",b,a,e);
            else printf("smallest odd numbers :\n%d %d %d",a,b,c);

        }
        else if (a%2==1 && d%2==1 && c%2==1 && b%2==0 && e%2==0){
            if (a>d && d>c) printf(" %d %d %d",c,d,a);
            else if (a>c && c>d) printf("smallest odd numbers :\n%d %d %d",d,c,a);
            else if (d>c && c>a) printf("smallest odd numbers :\n%d %d %d",a,c,d);
            else if (d>a && a>c) printf("smallest odd numbers :\n%d %d %d",c,a,d);
            else if (c>a && a>d) printf("smallest odd numbers :\n%d %d %d",d,a,c);
            else printf("smallest odd numbers :\n%d %d %d",a,d,c);
        }
        else if (a%2==1 && e%2==1 && c%2==1 && d%2==0 && b%2==0){
            if (a>e && e>c) printf(" %d %d %d",c,e,a);
            else if (a>c && c>e) printf("smallest odd numbers :\n%d %d %d",e,c,a);
            else if (e>c && c>a) printf("smallest odd numbers :\n%d %d %d",a,c,e);
            else if (e>a && a>c) printf("smallest odd numbers :\n%d %d %d",c,a,e);
            else if (c>a && a>e) printf("smallest odd numbers :\n%d %d %d",e,a,c);
            else printf("smallest odd numbers :\n%d %d %d",a,e,c);
        }
        else if (d%2==1 && b%2==1 && c%2==1 && a%2==0 && e%2==0){
            if (d>b && b>c) printf(" %d %d %d",c,b,d);
            else if (d>c && c>b) printf("smallest odd numbers :\n%d %d %d",b,c,d);
            else if (b>c && c>d) printf("smallest odd numbers :\n%d %d %d",d,c,b);
            else if (b>d && d>c) printf("smallest odd numbers :\n%d %d %d",c,d,b);
            else if (c>d && d>b) printf("smallest odd numbers :\n%d %d %d",b,d,c);
            else printf("smallest odd numbers :\n%d %d %d",d,b,c);
        }
        else if (e%2==1 && b%2==1 && c%2==1 && d%2==0 && a%2==0){
            if (e>b && b>c) printf(" %d %d %d",c,b,e);
            else if (e>c && c>b) printf("smallest odd numbers :\n%d %d %d",b,c,e);
            else if (b>c && c>e) printf("smallest odd numbers :\n%d %d %d",e,c,b);
            else if (b>e && e>c) printf("smallest odd numbers :\n%d %d %d",c,e,b);
            else if (c>e && e>b) printf("smallest odd numbers :\n%d %d %d",b,e,c);
            else printf("smallest odd numbers :\n%d %d %d",e,b,c);
        }
        else if (d%2==1 && e%2==1 && c%2==1 && a%2==0 && b%2==0){
            if (d>e && e>c) printf(" %d %d %d",c,e,d);
            else if (d>c && c>e) printf("smallest odd numbers :\n%d %d %d",e,c,d);
            else if (e>c && c>d) printf("smallest odd numbers :\n%d %d %d",d,c,e);
            else if (e>d && d>c) printf("smallest odd numbers :\n%d %d %d",c,d,e);
            else if (c>d && d>e) printf("smallest odd numbers :\n%d %d %d",d,e,c);
            else printf("smallest odd numbers :\n%d %d %d",d,e,c);
        }
        else if (d%2==1 && e%2==1 && a%2==1 && b%2==0 && c%2==0){
            if (d>e && e>a) printf(" %d %d %d",a,e,d);
            else if (d>a && a>e) printf("smallest odd numbers :\n%d %d %d",e,a,d);
            else if (e>a && a>d) printf("smallest odd numbers :\n%d %d %d",d,a,e);
            else if (e>d && d>a) printf("smallest odd numbers :\n%d %d %d",a,d,e);
            else if (a>d && d>e) printf("smallest odd numbers :\n%d %d %d",d,e,a);
            else printf("smallest odd numbers :\n%d %d %d",d,e,a);
        }
        else if (d%2==1 && e%2==1 && b%2==1 && a%2==0 && c%2==0){
            if (d>e && e>b) printf(" %d %d %d",b,e,d);
            else if (d>b && b>e) printf("smallest odd numbers :\n%d %d %d",e,b,d);
            else if (e>b && a>d) printf("smallest odd numbers :\n%d %d %d",d,b,e);
            else if (e>d && d>b) printf("smallest odd numbers :\n%d %d %d",b,d,e);
            else if (b>d && d>e) printf("smallest odd numbers :\n%d %d %d",d,e,b);
            else printf("smallest odd numbers :\n%d %d %d",d,e,b);
        }

}

return 0;

}
