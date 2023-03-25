#include<stdio.h>
#include<math.h>
//NAME - NAIN ADITYA / ROLL NO. - 22AG10029 / SECTION - 2
int main(){int a,b,c,d,e,j=0,k=0,e1=0,e2=0,e3=0,e4=0,e5=0,o1=0,o2=0,o3=0,o4=0,o5=0;
       scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
       if ((a%2)==0){
        j++;
        e1=a;
       }
       else {k++;
      o1=a; }

       if ((b%2)==0){
        j++;
        e2=b;}
       else {k++;
       o2=b;}

       if ((c%2)==0){
        j++;
        e3=c;
       }
       else {k++;
       o3=c;}
       if ((d%2)==0){
        j++;
        e4=d;
        }
       else {k++;
       o4=d;}
       if ((e%2)==0){
        j++;
        e5=e;
       }
       else {k++;
       o5=e;}
       if (j==3){
            if (e1>e2 && e1>e3 && e1>e4 && e1>e5){
            printf("the largest even no. is %d",e1);
        }
           if ((e2>e1 && e2>e3)  && (e2>e4 && e2>e5)){
            printf("the largest even no. is %d",e2);
        }   if ((e3>e2 && e3>e1) && (e3>e4 && e3>e5)){
            printf("the largest even no. is %d",e3);
        }   if ((e4>e2 && e4>e3) && (e4>e1 && e4>e5)){
            printf("the largest even no. is %d",e4);
        }   if ((e5>e2 && e5>e3) && (e5>e4 && e5>e1)){
            printf("the largest even no. is %d",e5);
        }}
        else if (k==3){if ((o1>0){
            if (o1>0){
                printf("%d".o1);}
            if (o2>0){
                printf("%d".o2);}
            if (o3>0){
                printf("%d".o3);}
            if (o4>0){
                printf("%d".o4);}
            if (o5>0){
                printf("%d".o5);}
                }
                }
            return 0;


}



