#include<stdio.h>

int main(){
    int n,t=1,n1,t1=1;
    printf("Enter an integer:  ");
    scanf("%d",&n);
    n1=n;
    int n2=n;

    if(n1%2==1){
            while(n1>0){

                t=t*10;
                n1=n1/10;
            }
            //t1=t;

     while(n2>0){
        int a=n2%t;
        printf("%d\t",a);
        t=t/10;
        n2=n2%t;
     }

    }
    else{
            printf("vkcnbjbsio");

    }


    int rn=0;
    int n3=n;
    int n4=n;
    int r=10;


    while(n4>0){

                t1=t1*10;
                n4=n4/10;
            }
     t1=t1/10;

    while(n3>0){
            int nt=t1*(n3%10);
            rn=rn+nt;
            t1=t1/10;
            n3=n3/10;



    }
    printf("\nReverse Number = %d",rn);

    int diff=rn-n;
    if(diff>=0){
        printf("\nDifference between original and reverse number = %d",diff);

    }
    else printf("\nDifference between original and reverse number = %d",-diff);

    return 0;
}
