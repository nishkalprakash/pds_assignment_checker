#include<stdio.h>
# include<math.h>
/* Name:Sumit Kumar
   Roll No.:22CS30056
   Section:2
   Problem NO.:2
   Description: an odd and even integer and print least and most significant digits       */
int main() {
   int i;
   printf("enter the integer  :");
   scanf("%d",&i);
   if (i%2==0){

        int a=i;
        int b=i;
        int c=i;
        printf("Least significant digits to most significant digits:");


        int count=0;
        do{
           count++;
           a=a/10;

    }while(a!=0);
    int m=pow(10,count-1);
    c=((c>0)?c:-c);

     while(c!=0){
           printf("%d,",c);
           c=c%m;
           m=m/10;


    }
    if(i%10==0) printf("0");

        printf("\n");
        int rev=0;
        while(b!=0){
            rev=rev*10;
            int p=b%10;
            rev+=p;
            b=b/10;
    }
        printf("Reverse number=%d",rev);
        printf("\n");
        int o;
        o=rev-i;
        o=((o>0)?o:-o);
        printf("Difference between reverse and original number=%d",o);
   }
   if(i%2==1)  {
        int a=i;
        int b=i;
        int c=i;
        int d=i;
        printf("Most significant digits to least significant digits:");


        int count=0;
        do{
           count++;
           a=a/10;

    }while(a!=0);
    int m=pow(10,count-1);
    c=((c>0)?c:-c);
    int t;



    while(c!=0){

        if (m==0) printf("%d",d%10);
        else {
                t=d/m;
                m=m/10;
                c=c/10;

                printf("%d,",t);

    }
    }
    if(i%10==0) printf("0");

        printf("\n");
        int rev=0;
        while(b!=0){
            rev=rev*10;
            int p=b%10;
            rev+=p;
            b=b/10;
    }
        printf("Reverse number=%d",rev);
        printf("\n");
        int o;
        o=rev-i;
        o=((o>0)?o:-o);
        printf("Difference between reverse and original number=%d",o);

   }


    return 0;
}
