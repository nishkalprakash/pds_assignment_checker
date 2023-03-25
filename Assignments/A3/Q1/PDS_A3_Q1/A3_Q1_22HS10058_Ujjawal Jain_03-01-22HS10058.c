#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a%2 + b%2 +c%2 +d%2 +e%2;
//for odd
int x=-1,y=-1,z=-1;
if (sum==3){

    if (a%2==1){
        if(x==-1){
            x=a;
        }
        else if(y==-1){
            y=a;
        }
        else if(z==-1){
            z=a;
        }
    }
    if (b%2==1){
        if(x==-1){
            x=b;
        }
        else if(y==-1){
            y=b;
        }
        else if(z==-1){
            z=b;
        }
    }
    if (c%2==1){
        if(x==-1){
            x=c;
        }
        else if(y==-1){
            y=c;
        }
        else if(z==-1){
            z=c;
        }
    }
    if (d%2==1){
        if(x==-1){
            x=d;
        }
        else if(y==-1){
            y=d;
        }
        else if(z==-1){
            z=d;
        }
    }
    if (e%2==1){
        if(x==-1){
            x=e;
        }
        else if(y==-1){
            y=e;
        }
        else if(z==-1){
            z=e;
        }
    }
    printf("Smallest three odd numbers :" );
    if(x>y && x>z){
            if(y>z) printf("%d %d %d",z,y,x);
            else printf("%d %d %d",y,z,x);
    }
    else if(y>z && y>x){
            if(x>z) printf("%d %d %d",z,x,y);
            else printf("%d %d %d",x,z,y);
    }
    else if(z>x && z>y){
            if(x>y) printf("%d %d %d",y,x,z);
            else printf("%d %d %d",x,y,z);
    }

}
//for even
else {
        int x=-1,y=-1,z=-1;
    if (a%2==0){
        if(x==-1){
            x=a;
        }
        else if(y==-1){
            y=a;
        }
        else if(z==-1){
            z=a;
        }
    }
    if (b%2==0){
        if(x==-1){
            x=b;
        }
        else if(y==-1){
            y=b;
        }
        else if(z==-1){
            z=b;
        }
    }
    if (c%2==0){
        if(x==-1){
            x=c;
        }
        else if(y==-1){
            y=c;
        }
        else if(z==-1){
            z=c;
        }
    }
    if (d%2==0){
        if(x==-1){
            x=d;
        }
        else if(y==-1){
            y=d;
        }
        else if(z==-1){
            z=d;
        }
    }
     if (e%2==0){
        if(x==-1){
            x=e;
        }
        else if(y==-1){
            y=e;
        }
        else if(z==-1){
            z=e;
        }
    }
    printf("Largest number :" );
    if(x>y&&x>z){
        printf("%d",x);
    }
    else if(y>x&&y>z){
        printf("%d",y);
    }
    else if(z>x&&z>y){
        printf("%d",z);
    }

}
return 0;
}
