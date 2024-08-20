//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//To take four integer as input and print "yes" if exactly two of them are equal 
#include<stdio.h>
int main()
{     
     int a,b,c,d;
     printf("enter the integers:");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     if((a==b==c)||(b==c==d)||(c==d==a)||(a==c==d||(a==b==d)))
       printf("NO");
       else if((a==b)||(b==c)||(c==d)||(d==a)||(c==a)||(b==d))
       printf("YES");
       else
        printf("NO");
     return 0;
}
     
     
