#include<stdio.h>
// NAME - NAIN ADITYA
//ROLL NO - 22AG10029
//SECTION - 2
int main(){int a,b,a1,a2,a3,b1,b2,b3,i,j,k;
    scanf("%d%d",&a,&b);
    if (a<-100 && b>100){
        printf("not a perfect pair");
        }
    else if (b<-100 && a>100){
        printf("not a perfect pair");
        }
    else if (a>100 && b > 100){
        a1=a/100;
        a2=(a/10)-10*a1;
        k=(a/10);
        a3=a-10*k;
        b1=b/100;
        b2=(b/10)-10*b1;
        k=(b/10);
        b3=b-10*k;
        if(a1==b3 && a3==b1){
            if (a2==b2){
                printf("perfect pair");

            }
            else printf("not a perfect pair");
        }
        }
    else if (a<100 && b>100){
        printf("INVALID INPUT");
    }
    else if (b<100 && a>100){
        printf("INVALID INPUT");
    }
    else if (a>0 && b>0){
        a1=a/10;
        a2=a-10*a1;
        b1=b/10;
        b2=b-10*b1;
        if (a1==b2 && a2==b1){printf("perfect pair");}
        else printf("not a perfect pair");
    }
    else if (a<0 && b>0){
            printf("invalid input");
        }
        else if (b<0 && a>0){
            printf("invalid input");
        }
   else if (a<-100 && b>-100){
    printf("invalid input");
   }
   else if (b<-100 && a>-100){
    printf("invalid input");
   }
   else if (a<-100 && b <-100){
       i=-1*a;
       j=-1*b;
          a1=i/100;
        a2=(i/10)-10*a1;
        k=(i/10);
        a3=i-10*k;
        b1=j/100;
        b2=(j/10)-10*b1;
        k=(j/10);
        b3=j-10*k;
   if(a1==b3 && a3==b1){
            if (a2==b2){
                printf("perfect pair");

            }
            else printf("not a perfect pair");
        }
        }
   else if (a>-100 && a>-100 ){
       i=-1*a;
       j=-1*b;
        a1=i/10;
        a2=i-10*a1;
        b1=j/10;
        b2=j-10*b1;
        if (a1==b2 && a2==b1){printf("perfect pair");}
        else printf("not a perfect pair");

   }
   return 0;


   }


