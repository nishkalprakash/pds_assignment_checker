#include <stdio.h>

int main()

{
    int a, b, c, d, e, even=0, odd, v1,v2,v3 ;

    printf("Enter the 5 integers \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a%2==0)
        {even++;}


    if (b%2==0)
        {even++;}


    if (c%2==0)
        {even++;}


    if (d%2==0)
        {even++;}


    if (e%2==0)
        {even++;}


    if (even==3) {

       if (a>=b && a>=c && a>=d && a>=e){
        printf("The largest number is %d",a);
       }
       else if (b>=a && b>=c && b>=d && b>=e){
            printf("The largest number is %d",b) ;
       }
       else if (c>=b && c>=a && c>=d && c>=e){
            printf("The largest number is %d",c) ;
       }
       else if (d>=b && d>=c && d>=a && d>=e){
            printf("The largest number is %d",d);
       }
       else if (e>=b && e>=c && e>=d && e>=a){
            printf("The largest number is %d",e) ;
       }

    }

    if (even==2){
        if (a%2!=0){
            v1=a;
        }
        else if (b%2!=0){
            v1=b;
        }
        else if (c%2!=0){
            v1=c;
        }
        else if (d%2!=0){
            v1=d;
        }
        else if (e%2!=0){
            v1=e;
        }

        if (b%2!=0 && b!=v1){
            v2=b;
        }
        else if (c%2!=0 && c!=v1){
            v2=c;
        }
        else if (d%2!=0 && d!=v1){
            v2=d;
        }
        else if (e%2!=0 && e!=v1){
            v2=e;
        }

        if (c%2!=0 && c!=v1 && c!=v2){
            v3=c;
        }
        else if (d%2!=0 && d!=v1 && d!=v2){
            v3=d;
        }
        else if (e%2!=0 && e!=v1 && e!=v2){
            v3=e;
        }

    if (v1>v2 && v1>v3){
        if (v2>v3){
            printf("Ascending order %d ",v3);
            printf("%d ",v2);}
        else {printf("%d ",v2);
              printf("%d ",v3);
        }

          printf("%d",v1);

    }
    else if (v2>v1 && v2>v3){
        if (v1>v3){
            printf("Ascending order %d ",v3);
            printf("%d ",v1);}
        else {printf("%d ",v1);
              printf("%d ",v3);
        }

          printf("%d",v2);

    }
    else if (v3>v2 && v3>v1){
        if (v2>v1){
            printf("Ascending order %d ",v1);
            printf("%d ",v2);}
        else {printf("%d ",v2);
              printf("%d ",v1);
        }

          printf("%d",v3);

    }



    }






    return 0;



}
