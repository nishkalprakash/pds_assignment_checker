#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,s,t,p,n,r,m,o,b;
    printf("Enter the Interger:");
    scanf("%d",&x);
    o=x;
    r=0;
    n=0;
    s=0;
    y=x;
    z=x;
    b=x*(-1);
    while(z>0){
        z/=10;
        s++;
    }
    t=pow(10,s-1);
    m=t;

    if(x%2==0){
            printf("Most significant digits to least significant digits :\n");
            if(x>0){
                while(x>0){

                    p=x/t;
                    n=n*10+p;
                    printf("%d,",n);
                    x=x-(t*p);
                    t/=10;


            }
            }

            else{
                    while(b>0){

                    p=b/t;
                    n=n*10+p;
                    printf("%d,",n);
                    b=b-(t*p);
                    t/=10;


            }
            }


    }
    else{
            printf("Least significant digits to most significant digits :\n");
        while (x>0){
            printf("%d,",x);
            x=x-((x/t)*t);
            t/=10;

        }

    }
    printf("\n");

    while(y>0){
        r+=(y%10)*m;
        m/=10;
        y/=10;


    }
    printf("Revrse Number = %d\n",r);
    if(r>o){printf("difference between revrse and original number = %d",r-o);}
    else{printf("difference between revrse and original number = %d",o-r);}





return 0;
}

