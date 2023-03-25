#include<stdio.h>

int main(){
    int a,b,c,d,e,o1,o2,o3;
    printf("Enter 5 integers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    int even=0;
    if(a%2==0){
        even++;
    }
    if(b%2==0){
        even++;
    }
    if(c%2==0){
        even++;
    }
    if(d%2==0){
        even++;
    }
    if(e%2==0){
        even++;
    }

    if(even==3){

        if(a>=b && a>=c && a>=d && a>=e){
            printf("Largest Number is %d",a);
        }
        else if(b>=a && b>=c && b>=d && b>=e){
            printf("Largest Number is %d",b);
        }
        else if(c>=a && c>=b && c>=d && c>=e){
            printf("Largest Number is %d",c);
        }
        else if(d>=a && d>=c && d>=b && d>=e){
            printf("Largest Number is %d",d);
        }
        else if(e>=a && e>=b && e>=c && e>=d){
            printf("Largest Number is %d",e);
        }

    }
    else if(even==2){
        if(a%2==1){
            o1=a;
        }
        else if(b%2==1){
            o1=b;
        }
        else if(c%2==1){
            o1=c;
        }
        else if(d%2==1){
            o1=d;
        }
        else if(e%2==1){
            o1=e;
        }

        if(b%2==1 && b!=o1){
                o2=b;
        }
        else if(c%2==1 && c!=o1){
                o2=c;
        }
        else if(d%2==1 && d!=o1){
                o2=d;
        }
        else if(e%2==1 && e!=o1){
                o2=e;
        }
        if(c%2==1 && c!=o1 && c!=o2){
                o3=c;
        }
        else if(d%2==1 && d!=o1 && d!=o2){
                o3=d;
        }
        else if(e%2==1 && e!=o1 && e!=o2){
                o3=e;
        }

        if(o1>o2 && o1>o3){
            if(o2>o3){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o3,o2,o1);
            }
            else if(o3>o2){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o2,o3,o1);

            }
        }
        else if(o2>o1 && o2>o3){
            if(o1>o3){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o3,o1,o2);
            }
            else if(o3>o1){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o1,o3,o2);

            }

        }
        else if(o3>o1 && o3>o2){
                if(o1>o2){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o2,o1,o3);
            }
            else if(o3>o1){
                printf("Smallest three odd numbers:\n");
                printf("%d\t %d\t %d\t",o1,o2,o3);

            }

        }




            return 0;



    }
}

